CXX := g++
CXXFLAGS := -O2

INP = simstring_tests.cpp
OUT := ./simstring_tests.out

test: sstest ${OUT}
	./${OUT}

sstest: simstring_tests.cpp
	${CXX} ${INP} ${CXXFLAGS} -o ${OUT}
	@echo "Compilation completed"
