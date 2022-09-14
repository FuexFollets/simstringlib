#pragma once

#include <string>
#include <string.h>
#include <cstdint>
#include "prototypes.hpp"

sim::simstring::simstring(const char* c_string) {
    length = {strlen(c_string)};
    string_val = reinterpret_cast<char*>(calloc(length, sizeof(char)));

    std::memcpy(string_val, c_string, length);
}

sim::simstring::simstring(const std::string&& std_string) {
    simstring(std_string.c_str());
}

sim::simstring::simstring(const std::string& std_string) {
    simstring(std::move(std_string.c_str()));
}

sim::simstring::simstring(const char&& letter) {
    string_val = reinterpret_cast<char*>(calloc(1, sizeof(char)));
    string_val[0] = letter;
}

sim::simstring::simstring(const char& letter) {
    simstring(static_cast<const char&&>(letter));
}

sim::simstring::simstring(const sim::simstring&& ss_string) {
    length = {ss_string.len()};
    string_val = reinterpret_cast<char*>(calloc(length, sizeof(char)));

    std::memcpy(string_val, c_string, length);
}

sim::simstring::simstring(const sim::simstring& ss_string) {
    simstring(std::move(ss_string));
}
