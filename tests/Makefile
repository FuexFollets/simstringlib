CXX := g++
CXXFLAGS := -O2

define compile_testname
	${CXX} $1_tests.cpp ${CXXFLAGS} -o ./dist/$1_test
endef

define run_testname
	@echo "./dist/$1_test" && echo ""
	@./dist/$1_test
endef

TESTNAMES := construction iterator operator misc
LIBFILES := $(wildcard ../include/**/*)
OUTFILES := $(wildcard ./dist/*)


all: $(foreach T,$(TESTNAMES),./dist/$T_test)
	$(foreach F,${OUTFILES},./dist/$F_test)
	

construction_test: ./dist/construction_test
	$(call run_testname,construction)
	

./dist/construction_test: construction_tests.cpp ${LIBFILES}
	echo $(LIBFILES)
	$(call compile_testname,construction)


operator_test: ./dist/operator_test
	$(call run_testname,operator)

./dist/operator_test: operator_tests.cpp
	$(call compile_testname,operator)


iterator_test: ./dist/iterator_test
	$(call run_testname,iterator)

./dist/iterator_test: iterator_tests.cpp
	$(call compile_testname,iterator)


misc_test: ./dist/misc_test
	$(call run_testname,misc)

./dist/misc_test: misc_tests.cpp
	$(call compile_testname,misc)
