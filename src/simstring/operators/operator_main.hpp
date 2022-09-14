#pragma once

#include <cstring>
#include <cstdint>

#include "../prototypes.hpp"
#include "../ss_initializers.hpp"

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
        
        *this = to_eq;
    }
}
