#pragma once

#include <bits/stdc++.h>

struct simstring {
	char* string_val;
	std::size_t length;

	simstring() {}
	simstring(const char*);
	simstring(const std::string&);
	simstring(const std::string&);
	simstring(const char&); 

	simstring(const simstring&);
	simstring(const simstring&, std::size_t, std::size_t);

	~simstring();


	template <typename T> simstring& replace_substring(const std::size_t, const std::size_t, const T&);

	iterator begin();
	iterator end();

	std::size_t size() const;
	std::size_t len() const;

	operator char* ();
	operator const char* ();
	operator std::string ();

		private:

	simstring& set_size(const std::size_t);
	simstring& set_string_val(char*);
	simstring& del_string_data();

	struct iterator {
		iterator(char*);
		char* c_ptr;

		iterator operator++();
		iterator operator--();

		char operator* ();
	};
};


struct substring_operator {
	simstring* base_string;
	std::size_t substr_index_start;
	std::size_t substr_index_end;

	substring_operator(simstring*, std::size_t, std::size_t);
	substring_operator(simstring&, std::size_t, std::size_t);

	std::size_t size() const;
	std::size_t len() const;

	operator char* ();
	operator const char* ();
	operator std::string ();
	operator simstring ();
};

// Simstring iterator
simstring::iterator simstring::iterator::operator++();
simstring::iterator simstring::iterator::operator--();

simstring::iterator operator++(simstring::iterator);
simstring::iterator operator--(simstring::iterator);

bool operator==(const simstring::iterator&, const simstring::iterator&);
bool operator!=(const simstring::iterator&, const simstring::iterator&);

template <typename T> simstring::iterator operator+(const simstring::iterator&, const T&);
template <typename T> simstring::iterator operator+(const T&, const simstring::iterator&);

template <typename T> simstring::iterator operator-(const simstring::iterator&, T);
template <typename T> simstring::iterator operator-(const T&, const simstring::iterator&);





