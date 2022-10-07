#pragma once

#include <bits/stdc++.h>

#include "incl.hpp"

namespace sim {
	template <> simstring& simstring::replace_substring <simstring> 
	(const std::size_t substring_start, 
	 const std::size_t substring_end, 
	 const simstring str) {

		if (str.size() == substring_end - substring_start) {
			std::memcpy(string_val + substring_start, str.string_val, str.size());
			return *this;
		}

		std::size_t&& new_size {length + str.size() - (substring_end - substring_start)};

		char* new_str {reinterpret_cast<char*>(calloc(new_size, sizeof(char)))};

		std::memcpy(new_str, string_val, substring_start);
		std::memcpy(new_str + substring_start, str.string_val, str.size());
		std::memcpy(new_str + substring_start + str.size(), string_val + substring_end, length - substring_end);

		del_string_data();
		string_val = new_str;
        length = new_size;
		return *this;
	}

	template <typename T_string> simstring& simstring::replace_substring
	(const std::size_t start,
	 const std::size_t end,
	 T_string str) {
		return this -> replace_substring<simstring>(simstring(str));
	}
}
