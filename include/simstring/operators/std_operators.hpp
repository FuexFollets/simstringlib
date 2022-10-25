#pragma once

#include "../prototypes.hpp"
#include "../initializers.hpp"

#include "../setters_getters.hpp"
#include "conversions.hpp"


namespace sim {


template <> void simstring::operator= <simstring> (simstring&& ss_string) {
    length = ss_string.size();
    string_val = reinterpret_cast<char*>(realloc(string_val, sizeof(char) * length));
    std::memcpy(string_val, ss_string.string_val, length);
}

template <typename T_string> void simstring::operator= (T_string&& str) { (*this) = simstring(str); }


template <typename T_int> char& simstring::operator[] (const T_int index) { return *(string_val + index); }


template <> simstring simstring::operator+ <simstring> (const simstring str) {
    char*&& new_string_ptr {reinterpret_cast<char*>(calloc(length + str.size(), sizeof(char)))};
    
    std::memcpy(new_string_ptr, string_val, length);
    std::memcpy(new_string_ptr + length, str.string_val, str.size());

    this -> del_string_data();

    return simstring(new_string_ptr);
}
    
template <typename T_string> simstring simstring::operator+ (const T_string str) { return (*this + simstring(str)); }


template <> simstring& simstring::operator+= (simstring ss_string) {
    string_val = reinterpret_cast<char*>(realloc(string_val, length + ss_string.size()));
    std::memcpy(string_val + length, ss_string.string_val, ss_string.size());
    return *this;
}


template <typename T_string> simstring& simstring::operator+= (T_string str) {
    (*this) += simstring(str);
    return *this;
}


template <> bool simstring::operator== (simstring ss_string) {
    return 
        (length == ss_string.size()) &&
        (!std::memcmp(string_val, ss_string.string_val, length));
}


template <typename T_string> bool simstring::operator== (T_string str) { return (*this) == simstring(str); }


template <typename T_string> bool simstring::operator!= (T_string str) { return !((*this) == str); }


template <> substring_operator& substring_operator::operator= <simstring> (simstring&& simstr) {
    base_string -> replace_substring<simstring>(substr_index_start, substr_index_end, simstr);
    return *this;
}


template <typename T_string> substring_operator& substring_operator::operator=(T_string&& str) {
    *this = simstring(str);
    return *this;
}


} // End of namespace sim


