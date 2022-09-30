#include "local_include.hpp"


void addition_test() {
	std::cout << " -- Addition Test\n";
	sim::simstring a("abc");
	sim::simstring b("123");

	std::cout << (char*) (a + b + " const char* " + std::string(" std::string ")) << '\n';
	std::cout << '\n';
}

void assignment_test() {
	std::cout << " -- Assignment Test\n";
	sim::simstring s1("hello");
	sim::simstring s2("hello");
    s1 = sim::simstring("hi");
    s2 = "hi";

	// s1 = "hi";
	std::cout << s1 << '\n' 
              << s2;
	std::cout << '\n';
}

void comparison_test() {
	std::cout << " -- Comparison Test\n";
	sim::simstring a("a1");
	sim::simstring b("a2");
	sim::simstring c("a3");

	std::cout << (a == b) << '\n'
			  << (a == c) << '\n'
			  << (b == "a2") << '\n';
	std::cout << '\n';
}

int main() {
	addition_test();
	assignment_test();
	comparison_test();
}