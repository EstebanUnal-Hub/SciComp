CXXFLAGS=-O2 -std=c++17
OBJS = ${patsubst %.cpp,%.o,${wildcard *.cpp}}
all:   sumupdown.pdf
#$<: la primera dependencia
#$@: el target
#$^: todas las dependencias
#$*: el nombre del target sin la extension
#$(@D): el directorio del target
#$(@F): el nombre del target sin el directorio
#$(@D)/$(@F): el target sin la extension
#$(@D)/$(@F).o: el target sin la extension y con la extension .o
#$(@D)/$(@F).cpp: el target sin la extension y con la extension .cpp
#$(@D)/$(@F).h: el target sin la extension y con la extension .h


%.o: %.cpp
	g++ ${CXXFLAGS} -c $< -o $@

sumupdown.x: ${OBJS}
	g++ ${CXXFLAGS} $^ -o $@

data.txt:sumupdown.x
	./sumupdown.x > data.txt
	
sumupdown.pdf: plotsumupdown.gp data.txt
	gnuplot plotsumupdown.gp

.PHONY:clean
clean:
	rm *.x *.txt *.pdf *.o


