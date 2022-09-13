#include <cstdint>
#include <string>
#include <tuple>
#include <iostream>

namespace sim {
    struct simstring {
        struct iterator;
        struct split_iterator;
        struct find_iterator;

        simstring();
        simstring(const char*);
        simstring(const std::string&);
        simstring(const std::string&&);
        simstring(const char&); 
        simstring(const char&&);

        simstring(const simstring&);
        simstring(const simstring&&);

        template <typename Tv> char& operator[](Tv);
        template <typename Ta> simstring&& operator+(Ta);
        template <typename Ta> simstring& operator+=(Ta);

        template <typename T_split> iterator split(T_split);
        template <typename T_split> iterator split_ref(T_split);
        template <typename T_find> std::size_t find(T_find);
        template <typename T_find> find_iterator find_all(T_find);
        template <typename T_start, typename T_end> simstring&& sub_string(T_start, T_end);
        template <typename T_start, typename T_end> simstring& sub_string_ref(T_start, T_end);
        template <typename T_first, typename T_second> simstring& swap(T_first, T_second);
        

        iterator begin();
        iterator end();

        std::size_t len();
        std::size_t size();

        friend std::ostream& operator<<(std::ostream&, simstring&);
        friend std::ostream& operator<<(std::ostream&, simstring&&);
    };


}
