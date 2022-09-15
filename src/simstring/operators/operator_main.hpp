#pragma once

#include <cstring>
#include <cstdint>

#include "../prototypes.hpp"
#include "../ss_initializers.hpp"
#include "../set_get.hpp"

namespace sim {
    template <> void simstring::operator= <simstring> (const simstring ss_string) {
        length = ss_string.size();
        string_val = ( char* ) realloc(string_val, sizeof(char) * length);
        std::memcpy(string_val, ss_string.string_val, length);
    }

    template <typename T_string> void simstring::operator= (const T_string str) {
        simstring to_eq;
        
        try {
            simstring to_eq{simstring(str)};
        } catch {
            // Put exception here
        }
        
        (*this) = to_eq;
    }

    template <typename T_int> char& simstring::operator[] (const T_int index) {
        return *(string_val + index);
    }

    template <> simstring&& simstring::operator+ <simstring> (const simstring str) {
        char*&& new_string_ptr { ( char* ) calloc(length + str.size(), sizeof(char)) };
        
        std::memcpy(new_string_ptr, string_val, length);
        std::memcpy(new_string_ptr + length, str.string_val, str.size());

        this -> del_string_data();

        return simstring(new_string_ptr);
    }
        
        
    template <typename T_string> simstring&& simstring::operator+ (const T_string str) {
        return (*this + simstring(str));
    }

    template <> simstring& simstring::operator+= (simstring ss_string) {
        string_val = realloc(string_val, length + ss_string.size());
        std::memcpy(string_val + length, ss_string.string_val, ss_string.size());
        return *this;
    }

    template <typename T_string> simstring& simstring::operator+= (T_string str) {
        (*this) += simstring(str);
        return *this;
    }

    template <> bool simstring::operator== (simstring ss_string) {
        return (length == ss_string.size()) && (std::memcmp(string_val, ss_string.string_val, length));
    }

    template <typename T_string> bool simstring::operator== (T_string str) {
        return (*this) == simstring(str);
    }

    template <typename T_string> bool simstring::operato!= (T_string str) {
        return (*this) == str;
    }
    
}
