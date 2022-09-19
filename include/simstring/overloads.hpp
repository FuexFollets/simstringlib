#pragma once

#include "prototypes.hpp"
#include "initializers.hpp"

#include "setters_getters.hpp"
#include "./operators/conversions.hpp"
#include "./operators/std_operators.hpp"


std::ostream& operator<<(std::ostream& out, sim::simstring str) {
	out << (const char *) str;
	return out;
}

