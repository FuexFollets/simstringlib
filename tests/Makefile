CXX := g++
CXXFLAGS := -O2

INP := simstring_tests.cpp
OUT := ./simstring_tests.out

ITR_INP := iterator_tests.cpp
ITR_OUT := ./iterator_tests.out

itr_test: itr_compile
	./${ITR_OUT}

itr_compile: ${ITR_INP}
	${CXX} ${ITR_INP} ${CXXFLAGS} -o ${ITR_OUT}

test: sstest ${OUT}
	./${OUT}

sstest: simstring_tests.cpp
	${CXX} ${INP} ${CXXFLAGS} -o ${OUT}
	@echo "Compilation completed"

