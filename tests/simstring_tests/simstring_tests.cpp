#include <bits/stdc++.h>

#include "../../include/simstring.hpp"

/*
std::ostream& operator<<(std::ostream& out, sim::simstring s_string) {
	out << (char*) s_string;
	return out;
}
*/

void construction_test() {
	std::cout << "Construction Test\n";
	sim::simstring hello ("World");

	std::cout << hello.length << '\n'
			  << (char*) hello << '\n';

	std::cout << '\n';
}

void addition_test() {
	std::cout << "Addition Test\n";
	sim::simstring a("abc");
	sim::simstring b("123");

	std::cout << (char*) (a + b + " const char* " + std::string(" std::string ")) << '\n';
	std::cout << '\n';
}


void assignment_test() {
	std::cout << "Assignment Test\n";
	sim::simstring s1("hello");
    s1 = sim::simstring("hi");
	// s1 = "hi";
	std::cout << (char*) s1;
	std::cout << '\n';
}


void comparison_test() {
	std::cout << "Comparison Test\n";
	sim::simstring a("a1");
	sim::simstring b("a2");
	sim::simstring c("a3");

	std::cout << (a == b) << '\n'
			  << (a == c) << '\n'
			  << (b == "a2") << '\n';
	std::cout << '\n';
}

void output_test() {
	sim::simstring ss("Hello ");
	std::cout << ss << sim::simstring("world") << '\n';
}

int main() {
	std::cout << '\n';
	construction_test();
	addition_test();
	comparison_test();
	output_test();
    assignment_test();
}
