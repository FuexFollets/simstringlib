#include <cstdint>

namespace sms {
    template <typename Ti1, typename Ti2> struct simstring {
        simstring();
        simstring(const char*);
        simstring(const std::string&);
        simstring(const std::string&&);
        simstring(const char&); 
        simstring(const char&&);
        simstring(const Ti1, const Ti2);

        simstring(const simstring&);
        simstirng(const simstring&&);

        template <typename Tv> char& operator[](Tv);
        template <typename Ta> simstring&& operator+(Ta);
        template <typename Ta> simstring& operator+=(Ta);
    }
}