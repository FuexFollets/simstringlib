#include "local_include.hpp"


void from_cstring() {
	std::cout << " -- Construction Test\n";
	sim::simstring hello ("World");

	std::cout << hello.length << '\n'
			  << (char*) hello << '\n';

	std::cout << '\n';
}

int main() {
	from_cstring();
}