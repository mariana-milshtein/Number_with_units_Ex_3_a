#pragma once
#include <fstream>
#include <iostream>
#include <string>

namespace ariel {
};
    class NumberWithUnits {
    public:
        static void read_units(std::ifstream&);
        NumberWithUnits(double, std::string);
        ~NumberWithUnits();
        
        NumberWithUnits& operator +=(const NumberWithUnits&);
        NumberWithUnits& operator +(const NumberWithUnits&);
        NumberWithUnits& operator +();
        NumberWithUnits& operator ++();
        NumberWithUnits& operator ++(int);
        NumberWithUnits& operator -=(const NumberWithUnits&);
        NumberWithUnits& operator -(const NumberWithUnits&);
        NumberWithUnits& operator -();
        NumberWithUnits& operator --();
        NumberWithUnits& operator --(int);
        
        bool operator <(const NumberWithUnits&) const;
        bool operator >(const NumberWithUnits&) const;
        bool operator <=(const NumberWithUnits&) const;
        bool operator >=(const NumberWithUnits&) const;
        bool operator ==(const NumberWithUnits&) const;
        bool operator !=(const NumberWithUnits&) const;
        
        friend NumberWithUnits& operator*(double,NumberWithUnits&);
        friend std::istream& operator>>(std::istream&, const NumberWithUnits&);
        friend std::ostream& operator<<(std::ostream&, const NumberWithUnits&);
    };    

