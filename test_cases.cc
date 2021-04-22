#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "count_functions.cc"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

TEST_CASE("Default Test"){
    int test;
    string default_lines = "default_line.txt";
    string default_chars = "default_char.txt";

    test = count_line(default_lines);
    cout << "This file has " << test << " lines in it." << endl;

    test = count_char(default_chars);
    cout << "This file has " << test << " characters in it. " << endl;
} 
TEST_CASE("Case 1"){
    int test;
    string file;

    file = "input.txt";

    test = count_line(file);
    cout << "This file has " << test << " lines in it." << endl;

    test = count_char(file);
    cout << "This file has " << test << " characters in it. " << endl;
}

TEST_CASE("Case 2")
{
    int test;
    string file;

    file = "bookDB.txt";

    test = count_line(file);
    cout << "This file has " << test << " lines in it." << endl;

    test = count_char(file);
    cout << "This file has " << test << " characters in it. " << endl;
}