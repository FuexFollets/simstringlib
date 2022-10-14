#include "local_include.hpp"

void replace_test() {
    std::cout << "\n -- Replace test\n";
    sim::simstring hi("abcdefg");
    sim::simstring hi2("abcdefg");
    hi2.replace_substring(2, 4, sim::simstring("EE"));
    hi.replace_substring<sim::simstring>(2, 3, sim::simstring("HHHH"));
    std::cout << hi << '\n' << hi2 << "\n";
}

int main() {
    replace_test();
}
