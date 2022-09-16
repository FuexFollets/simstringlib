#include <iostream>

#include "../../src/simstring/simstring_main.hpp"

void construction_test() {
	sim::simstring hello("World");

	std::cout << hello.length << '\n';
	std::cout << hello.string_val << '\n';
}

int main() {
	construction_test();
}