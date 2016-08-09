/* Memory allocation used during tests.

Copyright 2001, 2002, 2007, 2013 Free Software Foundation, Inc.

This file is part of the GNU MP Library test suite.

The GNU MP Library test suite is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 3 of the License,
or (at your option) any later version.

The GNU MP Library test suite is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
Public License for more details.

You should have received a copy of the GNU General Public License along with
the GNU MP Library test suite.  If not, see https://www.gnu.org/licenses/.  */

#include <stdio.h>
#include <stdlib.h>		/* for abort */
#include <string.h>		/* for memcpy, memcmp */
#include "gmp.h"
#include "gmp-impl.h"
#include "tests.h"

#if GMP_LIMB_BITS == 64
#define PATTERN1 CNST_LIMB(0xcafebabedeadbeef)
#define PATTERN2 CNST_LIMB(0xabacadabaedeedab)
#else
#define PATTERN1 CNST_LIMB(0xcafebabe)
#define PATTERN2 CNST_LIMB(0xdeadbeef)
#endif

#if HAVE_INTPTR_T
#define PTRLIMB(p)  ((mp_limb_t) (intptr_t) p)
#else
#define PTRLIMB(p)  ((mp_limb_t) (size_t) p)
#endif

/* Each block allocated is a separate malloc, for the benefit of a redzoning
   malloc debugger during development or when bug hunting.

   Sizes passed when reallocating or freeing are checked (the default
   routines don't care about these).

   Memory leaks are checked by requiring that all blocks have been freed
   when tests_memory_end() is called.  Test programs must be sure to have
   "clear"s for all temporary variables used.  */


struct header {
  void           *ptr;
  size_t         size;
  struct header  *next;
};

struct header  *tests_memory_list = NULL;

/* Return a pointer to a pointer to the found block (so it can be updated
   when unlinking). */
struct header **
tests_memory_find (void *ptr)
{
  struct header  **hp;

  for (hp = &tests_memory_list; *hp != NULL; hp = &((*hp)->next))
    if ((*hp)->ptr == ptr)
      return hp;

  return NULL;
}

int
tests_memory_valid (void *ptr)
{
  return (tests_memory_find (ptr) != NULL);
}

void *
tests_allocate (size_t size)
{
  return malloc(size);
}

void *
tests_reallocate (void *ptr, size_t old_size, size_t new_size)
{
  return realloc(ptr, new_size);
}

struct header **
tests_free_find (void *ptr)
{
  return 0;
}

void
tests_free_nosize (void *ptr)
{
  free(ptr);
}

void
tests_free (void *ptr, size_t size)
{
  tests_free_nosize (ptr);
}

void
tests_memory_start (void)
{
  mp_set_memory_functions (tests_allocate, tests_reallocate, tests_free);
}

void
tests_memory_end (void)
{
  if (tests_memory_list != NULL)
    {
      struct header  *h;
      unsigned  count;

      fprintf (stderr, "tests_memory_end(): not all memory freed\n");

      count = 0;
      for (h = tests_memory_list; h != NULL; h = h->next)
	count++;

      fprintf (stderr, "    %u blocks remaining\n", count);
      abort ();
    }
}
