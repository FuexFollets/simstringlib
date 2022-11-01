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

	template <typename S> simstring& operator=(const S&);
	template <typename Ti> char& operator[](const Ti);
	template <template S> simstring operator+(const S&) const;
	template <template S> simstring& operator+=(const S&);

	explicit operator char* () const;
	explicit operator const char* () const;
	explicit operator std::string () const;

		private:

	simstring& set_size(const std::size_t);
	simstring& set_string_val(char*);
	simstring& del_string_data();

	struct iterator {
		iterator(char*);
		char* c_ptr;

		iterator operator++();
		iterator operator--();

		char& operator* ();
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


// Simstring
template <typename S> bool operator==(const simstring&, const S&);
template <typename S> bool operator==(const S&, const simstring&);

template <typename S> bool operator!=(const simstring&, const S&);
template <typename S> bool operator!=(const S&, const simstring&);

template <typename S> S operator+(const S&, const simstring&);



