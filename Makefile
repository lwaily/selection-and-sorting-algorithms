CXX=g++
CXXFLAGS=-Wall -Wmaybe-uninitialized -pedantic -Werror -g -O0 -std=c++17
OUTFILES=Algo

all: $(OUTFILES)

Algo: algoTest.cpp algo.cpp algo.h
	$(CXX) $(CXXFLAGS) -o Algo algoTest.cpp algo.cpp

clean:
	$(RM) $(OUTFILES) *.o

