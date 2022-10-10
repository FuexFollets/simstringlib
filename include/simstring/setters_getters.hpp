#pragma once

#include <bits/stdc++.h>

#include "prototypes.hpp"
#include "initializers.hpp"

#include "./operators/conversions.hpp"
#include "./operators/std_operators.hpp"


std::size_t sim::simstring::len() const {
    return length;
}

std::size_t sim::simstring::size() const {
    return length;
}

sim::simstring& sim::simstring::del_string_data() {
    string_val = reinterpret_cast<char*>(realloc(string_val, 0));
    return *this;
}

sim::simstring& sim::simstring::set_size(const std::size_t new_size) {
	length = new_size;
	return *this;
}

sim::simstring& sim::simstring::set_string_val(char* new_str) {
	string_val = new_str;
	return *this;
}
