#pragma once

#include <bits/stdc++.h>

#include "prototypes.hpp"

#include "setters_getters.hpp"
#include "./operators/conversions.hpp"
#include "./operators/std_operators.hpp"


sim::simstring::simstring(const char* c_string) {
    length = {strlen(c_string)};
    string_val = reinterpret_cast<char*>(calloc(length, sizeof(char)));

    std::memcpy(string_val, c_string, length);
}

sim::simstring::simstring(const std::string&& std_string) {
    const char* c_string{std_string.c_str()};
    length = {strlen(c_string)};
    string_val = reinterpret_cast<char*>(calloc(length, sizeof(char)));

    std::memcpy(string_val, c_string, length);
}

sim::simstring::simstring(const std::string& std_string) {
    const char* c_string{std_string.c_str()};
    length = {strlen(c_string)};
    string_val = reinterpret_cast<char*>(calloc(length, sizeof(char)));

    std::memcpy(string_val, c_string, length);
}

sim::simstring::simstring(const char&& letter) {
    string_val = reinterpret_cast<char*>(calloc(1, sizeof(char)));
    string_val[0] = letter;
}

sim::simstring::simstring(const char& letter) {
    string_val = reinterpret_cast<char*>(calloc(1, sizeof(char)));
    string_val[0] = letter;
}

sim::simstring::simstring(const sim::simstring&& ss_string) {
    length = {ss_string.size()};
    string_val = reinterpret_cast<char*>(calloc(length, sizeof(char)));

    std::memcpy(string_val, ss_string.string_val, length);
}

sim::simstring::simstring(const sim::simstring& ss_string) {
    length = {ss_string.size()};
    string_val = reinterpret_cast<char*>(calloc(length, sizeof(char)));

    std::memcpy(string_val, ss_string.string_val, length);
}

sim::substring_operator::substring_operator
	(simstring* str_ptr, std::size_t start, std::size_t end)
		: base_string{str_ptr}, substr_index_start{start}, substr_index_end{end} {}

sim::substring_operator::substring_operator
	(simstring& str_ptr, std::size_t start, std::size_t end)
		: base_string{&str_ptr}, substr_index_start{start}, substr_index_end{end} {}

sim::simstring::simstring(const simstring& str, std::size_t start, std::size_t end = 0) {
	simstring new_simstring;
	std::size_t new_length {(end == 0) ? start : (end - start)};
	std::size_t start_index {start * (end == 0)};

	new_simstring
		.set_size(new_length)
		.set_string_val(reinterpret_cast<char*>(calloc(new_length, sizeof(char))));

	std::memcpy(new_simstring.string_val, str.string_val + start_index, new_length);
	
	return new_simstring;
}


sim::simstring::~simstring() {
    this -> del_string_data();
}
