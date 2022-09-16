CXX := g++
CXXFLAGS := -O2 -Wall

INP = simstring_tests.cpp
OUT := ./simstring_tests.out

ss_testrun: simstring_test.out
	./simstring_test.out

simstring_test.out: simstring_tests.cpp
	${CXX} ${INP} ${CXXFLAGS} -o ${OUT}
	@echo "Compilation completed"
