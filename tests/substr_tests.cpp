#include "local_include.hpp"
#include <iostream>

void substr_construction() {
    std::cout << " -- substring_operator construction" << '\n';
    sim::simstring a ("123456789");
    sim::substring_operator (a, 2, 5);
}

void substr_stdout() {
    std::cout << " -- substring_operator stdout" << '\n';
    sim::simstring a ("123456789");
    sim::substring_operator a_sub (a, 2, 5);
    std::cout << a_sub << "\n\n";
}

int main() {
    substr_construction();
    substr_stdout();
}

