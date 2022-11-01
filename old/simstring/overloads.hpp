#pragma once

#include "prototypes.hpp"
#include "initializers.hpp"

#include "setters_getters.hpp"
#include "./operators/conversions.hpp"
#include "./operators/std_operators.hpp"

#include "./iterators/char_iterator.hpp"


std::ostream& operator<<(std::ostream& out, sim::simstring s_string) {
	out << (char*) s_string;
	return out;
}

std::ostream& operator<<(std::ostream& out, sim::substring_operator ss_operator) {
    out << ss_operator.as_simstring();
    return out;
}
