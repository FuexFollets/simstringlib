#pragma once

#include <iostream>

#include "prototypes.hpp"
#include "set_get.hpp"
#include "ss_initializers.hpp"
#include "operators/operator_main.hpp"
#include "conversions.hpp"

std::ostream& operator<< (std::ostream& out, sim::simstring str) {
    out << static_cast<char*>(str);
    return out;
}

