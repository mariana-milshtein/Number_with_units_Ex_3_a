#include "NumberWithUnits.hpp"

using namespace ariel;

        void NumberWithUnits::read_units(std::ifstream&) {}
        NumberWithUnits::NumberWithUnits(double, std::string) {}
        NumberWithUnits::~NumberWithUnits() {}
        
        NumberWithUnits& NumberWithUnits::operator +=(const NumberWithUnits&) {return *this;}
        NumberWithUnits& NumberWithUnits::operator +(const NumberWithUnits&) {return *this;}
        NumberWithUnits& NumberWithUnits::operator +() {return *this;}
        NumberWithUnits& NumberWithUnits::operator ++() {return *this;}
        NumberWithUnits& NumberWithUnits::operator ++(int){return *this;}
        NumberWithUnits& NumberWithUnits::operator -=(const NumberWithUnits&) {return *this;}
        NumberWithUnits& NumberWithUnits::operator -(const NumberWithUnits&) {return *this;}
        NumberWithUnits& NumberWithUnits::operator -() {return *this;}
        NumberWithUnits& NumberWithUnits::operator --() {return *this;}
        NumberWithUnits& NumberWithUnits::operator --(int) {return *this;}
        
        bool NumberWithUnits::operator <(const NumberWithUnits&) const {return true;}
        bool NumberWithUnits::operator >(const NumberWithUnits&) const {return true;}
        bool NumberWithUnits::operator <=(const NumberWithUnits&) const {return true;}
        bool NumberWithUnits::operator >=(const NumberWithUnits&) const {return true;}
        bool NumberWithUnits::operator ==(const NumberWithUnits&) const {return true;}
        bool NumberWithUnits::operator !=(const NumberWithUnits&) const {return true;}
        
        NumberWithUnits& operator*(double lhs,NumberWithUnits& rhs) {return rhs;}
        std::istream& operator>>(std::istream& is, const NumberWithUnits&) {return is;}
        std::ostream& operator<<(std::ostream& os, const NumberWithUnits&) {return os;}
        