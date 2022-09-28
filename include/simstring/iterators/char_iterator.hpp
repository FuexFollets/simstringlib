#pragma once

#include "../prototypes.hpp"
#include "../initializers.hpp"
#include "../setters_getters.hpp"
#include "../operators/conversions.hpp"
#include "../operators/std_operators.hpp"


namespace sim {
	simstring::iterator::iterator(char* pos_ptr) : c_ptr{pos_ptr} {}

	simstring::iterator simstring::iterator::operator++() {
		return simstring::iterator{c_ptr++};
	}

	simstring::iterator simstring::iterator::operator--() {
		return simstring::iterator{c_ptr--};
	}

	char simstring::iterator::operator*() {
		return (*c_ptr);
	}

	template <typename T_int> simstring::iterator simstring::iterator::operator+(T_int int_val) {
		return simstring::iterator{c_ptr + int_val};
	}

	template <typename T_int> simstring::iterator simstring::iterator::operator-(T_int int_val) {
		return simstring::iterator{c_ptr - int_val};
	}

	bool simstring::iterator::operator==(simstring::iterator ss_itr) {
		return (c_ptr == ss_itr.c_ptr);
	}

	bool simstring::iterator::operator!=(simstring::iterator ss_itr) {
		return !(*this == ss_itr);
	}
}
