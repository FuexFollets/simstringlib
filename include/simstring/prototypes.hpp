#pragma once 

#include <bits/stdc++.h>

namespace sim {
    struct simstring {
        /*
         * Stored values
        */

        char* string_val;
        std::size_t length;
        

		struct iterator {
			iterator(char*);
			char* c_ptr;

            iterator operator++();
            iterator operator--();

            char operator*();

            template <typename T_int> iterator operator+(T_int);
            template <typename T_int> iterator operator-(T_int);

            bool operator==(iterator);
            bool operator!=(iterator);
        
		};
/*
        struct split_ref_iterator : public iterator {
			char* pos_ptr;
			simstring& operator*();
		};

        struct split_iterator : public iterator {
			simstring&& operator*();
		};

        struct find_iterator : public iterator {
			std::size_t&& operator*();
		};

        struct slice_iterator : public iterator {
			simstring&& operator*();
		};

        struct slice_ref_iterator : public iterator {
			simstring& operator*();
		};
*/

        simstring() {}
        simstring(const char*);
        simstring(const std::string&);
        simstring(const std::string&&);
        simstring(const char&); 
        simstring(const char&&);

        simstring(const simstring&);
        simstring(const simstring&&);

        ~simstring();

        template <typename T_string> void operator=(T_string&&);
        template <typename T_int> char& operator[](T_int);
        template <typename T_app> simstring operator+(T_app);
        template <typename T_app> simstring& operator+=(T_app);
        template <typename T_string> bool operator==(T_string);
        template <typename T_string> bool operator!=(T_string);

		template <typename T_string> simstring& replace_substring(const std::size_t, const std::size_t, const T_string);

        iterator begin();
        iterator end();

        simstring& del_string_data();

        std::size_t size() const;
        std::size_t len() const;

        operator char* ();
        operator const char* ();
        operator std::string ();
    };


	template <typename T_str> struct substring_operator {
		T_str* base_string;
		std::size_t substr_index_start;
		std::size_t substr_index_end;

		substring_operator(T_str*, std::size_t, std::size_t);

        template <typename T_string> void operator=(T_string&&);
        template <typename T_int> char& operator[](T_int);
        template <typename T_app> simstring operator+(T_app);
        template <typename T_app> simstring& operator+=(T_app);
        template <typename T_string> bool operator==(T_string);
        template <typename T_string> bool operator!=(T_string);

        std::size_t size() const;
        std::size_t len() const;

        operator char* ();
        operator const char* ();
        operator std::string ();
	};
}
