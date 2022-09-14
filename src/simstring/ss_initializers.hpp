#pragma once

#include <string>
#include <cstring>
#include <cstdint>

#include "prototypes.hpp"
#include "set_get.hpp"


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

