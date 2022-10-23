CXX := g++
CXXFLAGS := -O2 -Wno-stringop-overflow

LIBFILES := $(wildcard ../include/**/*)

%_tests: ./dist/%_tests.out
	./dist/$@.out

./dist/%.out: $(LIBFILES) %.cpp
	$(CXX) $*.cpp $(CXXFLAGS) -o $@
