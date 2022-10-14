CXX := g++
CXXFLAGS := -O2 -Wno-stringop-overflow

LIBFILES := $(wildcard ../include/**/*)

%_test: ./$@_tests.cpp
	./dist/$@

%: $(LIBFILES)
	$(CXX) $@ $(CXXFLAGS) -o ./dist/$@_test

