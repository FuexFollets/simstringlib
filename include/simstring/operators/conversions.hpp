#pragma once

#include <bits/stdc++.h>

#include "std_operators.hpp"

#include "../prototypes.hpp"
#include "../setters_getters.hpp"
#include "../initializers.hpp"

namespace sim {
    simstring::operator char* () {
        char* new_str {reinterpret_cast<char*>(calloc(length + 1, sizeof(char)))};
        std::memcpy(new_str, string_val, length);
        *(new_str + length + 1) = (char) 0;
        return new_str;
    }


    simstring::operator const char* () {
        return const_cast<const char*>((char*)(*this));
    }


    simstring::operator std::string () {
        return std::string((const char*)(*this));
    }

	simstring substring_operator::as_simstring() {
		return simstring(*base_string, substr_index_start, substr_index_end);
	}

	substring_operator::operator simstring () {
		return this -> as_simstring();
	}
}

