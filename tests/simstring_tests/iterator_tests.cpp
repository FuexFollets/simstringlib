#include <bits/stdc++.h>

#include "../../include/simstring.hpp"

void char_iterator_test() {
	std::cout << " -- Char Iterator Test\n";
	sim::simstring str("Hello");

	for (const auto& letter: str) {
		std::cout << ' ' << letter;
	}

	std::cout << str;

	std::cout << "\n\n";
}

int main() {
	char_iterator_test();
	
	return 0;
}