set terminal pdf
set output "times.pdf"
set xlabel "Reduction Time (hours)"
set ylabel "Test Case Size (KB)"
set nokey
plot "times.txt" using ($2/3600):($4/1024) with lines lw 5
