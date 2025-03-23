CXXFLAGS=-O2 -std=c++17
all:   sumupdown.pdf
sumupdown.x:sumupdown.cpp
	g++ ${CXXFLAGS} sumupdown.cpp -o sumupdown.x

data.txt:sumupdown.x
	./sumupdown.x > data.txt
	
sumupdown.pdf: plotsumupdown.gp data.txt
	gnuplot plotsumupdown.gp

.PHONY:clean
clean:
	rm *.x *.txt *.pdf


