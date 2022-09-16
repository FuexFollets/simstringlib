#include <iostream>

#include "../../src/simstring/simstring_main.hpp"

void construction_test() {
	sim::simstring hello ("World");

	std::cout << hello.length << '\n'
			  << (char*) hello << '\n';
}

void addition_test() {
	sim::simstring a("abc");
	sim::simstring b("123");

	std::cout << (char*) (a + b + " const char* " + std::string(" std::string ")) << '\n';
}

void assignment_test() {
	sim::simstring s1("hello");
	s1 = sim::simstring("hi");
	std::cout << (char*) s1;
}

int main() {
	construction_test();
	addition_test();
}