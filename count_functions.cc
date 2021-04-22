/*
 * 
 * @file: count_functions.cc
 * @author: Alyssa Vandale
 * @date: 22 April 2021
 * @brief: counts the lines and characters of a file and prints it in the command terminal
 * 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;


int count_line(string file_name);
/**
 *  Function:  count_line(string file_name) - this finds the number of lines in a text file
 *
 *  @param file_name - the name of the text file
 *  @return - returns the number of lines in the text file
 */
//int count_line(char *text);
int count_char(string file_name);
/**
 *  Function:  count_char(string file_name) - this finds the number of characters in a text file
 *
 *  @param file_name - the name of the text file
 *  @return - returns the number of characters in the text file
 */
//int count_char(char *text);

int main(int argc, char const *argv[])
{
    string file_name;
    int lines;
    int chars;

    if (argc > 1){
        file_name = argv[1];

        lines = count_line(file_name);
        chars = count_char(file_name);

        cout << "This file has " << lines << " lines in it." << endl;
        cout << "This file has " << chars << " characters in it. " << endl;
    } else if (argc == 1) {
        string default_lines = "default_line.txt";
        string default_chars = "default_char.txt";


        lines = count_line(default_lines);
        chars = count_char(default_chars);

        cout << "This file has " << lines << " lines in it." << endl;
        cout << "This file has " << chars << " characters in it. " << endl;
    }


    return 0;
}

int count_line(string file_name){
    ifstream ins;
    string line;
    int line_count;

    line_count = 0;
    line = " ";

    ins.open(file_name);

    if (ins.fail()){
        cout << "Error: Cannot Open Input File" << endl;
        exit(0);
    }

    while(!ins.eof()){
        getline(ins, line);
        if (line.length() != 0){
            ++line_count;
            //cout << line_count << endl;
        }
    }

    ins.close();

    return line_count;
}

int count_char(string file_name){
    ifstream ins;
    string line;
    int char_count;

    char_count = 0;
    line = " ";

    ins.open(file_name);

    if (ins.fail())
    {
        cout << "Error: Cannot Open Input File" << endl;
        exit(0);
    }

    while (!ins.eof())
    {
        getline(ins, line);
        if (line != " ")
        {
          char_count += line.length();
          //cout << char_count << endl;  
        }
    }

    ins.close();

    return char_count;
}