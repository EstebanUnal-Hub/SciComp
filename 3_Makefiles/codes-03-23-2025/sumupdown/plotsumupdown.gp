set xlabel'k'
set ylabel 'E(k)'
set term pdf
set out "sumupdown.pdf"
#set log y
plot 'data.txt' u 1:4 w p lw 4 ps 0.1 pt 4 t'data''
#test