#pragma once

#include <bits/stdc++.h>

#include "incl.hpp"

namespace sim {
	template <> simstring_operator::simstring_operator <simstring> (simstring* str_ptr, std::size_t start, std::size_t end)
		: base_string{str_ptr}, substr_index_start{start}, substr_index_end{end} {}

	template <> simstring_operator::simstring_operator <char*> (char** cstr_ptr, std::size_t start, std::size_t end)
		: base_string{cstr_ptr}, substr_index_start{start}. substr_index_end{end} {}
}