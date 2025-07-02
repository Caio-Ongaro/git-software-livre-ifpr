CXX = g++
CXXFLAGS = -Wall -Wextra


.PHONY: all clean

all: primo vetor matriz

primo: primo.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo "Compilado:$@"
vetor: vetor.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo "Compilado:$@"
matriz: matriz.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo "Compilado:$@"
clean:
	@rm -f primo vetor matriz *.o
