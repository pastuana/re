CXX := g++
CXXWARNS := -Wall -pedantic -Wextra
CXXFLAGS := -std=c++11 -O2 $(CXXWARNS)

all: 1.out 2.out 3.out 4.out 5.out

%.out: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -f *.out binarni-soubor.bin

