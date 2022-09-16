#pragma once

#include <cstring>
#include <string>

#include "prototypes.hpp"
#include "set_get.hpp"
#include "ss_initializers.hpp"
#include "operators/operator_main.hpp"

namespace sim {

    simstring::operator char* () {
        char* new_str { ( char* ) calloc(length + 1, sizeof(char)) };
        std::memcpy(new_str, string_val, length);
        *(new_str + length + 1) = (char) 0;
        return new_str;
    }


    simstring::operator const char* () {
        return const_cast<const char*>( (char*) (*this) );
    }


    simstring::operator std::string () {
        return std::string((const char*) (*this));
    }

}

