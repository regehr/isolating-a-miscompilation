The compiler bug here is in Clang+LLVM r135022 for x86-64, which you
can build yourself or else use or else grab [this
tarball](http://john.regehr.org/llvm-r135022-install-ubuntu-14.04.tar.bz2)
for Ubuntu 14.04 on x86-64. You'll also need the GMP 6.1.1 source code
and you need to have configured and built GMP in a subdirectory called
<tt>build</tt>. If you've placed either GMP or the compiler binary
anywhere besides your home directory, you'll need to adjust some paths
in the C-Reduce interestingness tests. Also, tis-interpreter and
C-Reduce must be in your PATH.
