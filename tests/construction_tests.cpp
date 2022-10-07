#include "local_include.hpp"


void from_cstring() {
	std::cout << " -- Construction Test\n";
	sim::simstring hello ("World");

	std::cout << hello.length << '\n'
			  << (char*) hello << '\n';

	std::cout << '\n';
}

void substring_operator() {
	sim::simstring str("abcdefg");
	
	sim::substring_operator sel(str, 3, 5);
}

int main() {
	from_cstring();
	substring_operator();
}