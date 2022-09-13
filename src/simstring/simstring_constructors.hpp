#pragma once

#include <string>
#include <string.h>
#include <cstdint>
#include "prototypes.hpp"

sms::simstring::simstring(const char* c_string) {
    length = {strlen(c_string)};
    string_val = calloc(length, sizeof(char));

    std::memcpy(string_val, c_string, length);
}

sms::simstring::simstring(const std::string&& std_string) {
    simstring(std_string.c_str());
}

sms::simstring::simstring(const std::string& std_string) {
    simstring(std::move(std_string.c_str()));
}

sms::simstring::simstring(const char&& letter) {
    string_val = calloc(char, 1);
    string_val[0] = letter;
}

sms::simstring::simstring(const char& letter) {
    simstring(static_cast<char&&>(letter));
}

sms::simstring::simstring(const sms::simstring&& ss_string) {
    length = {ss_string.len()};
    string_val = calloc(length, sizeof(char));

    std::memcpy(string_val, c_string, length);
}

sms::simstring::simstring(const sms::simstring& ss_string) {
    simstring(static_cast<sms::simstring&&>(ss_string));
}