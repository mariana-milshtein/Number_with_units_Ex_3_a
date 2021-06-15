#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "NumberWithUnits.hpp"
using namespace ariel;

TEST_CASE("Number with units tests") {
    ifstream units_file{"units.txt"};
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{2, "km"};
    NumberWithUnits b{2, "kg"};
    CHECK_THROWS(a+b);
    NumberWithUnits d{4, "km"};
    CHECK((a + a == d));
    NumberWithUnits e{2000, "m"};
    CHECK(a == e);
    NumberWithUnits f{2, "km"};
    CHECK(a++ == f);
    NumberWithUnits g{4, "km"};
    CHECK(++a == g);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
    CHECK(a != e);
}