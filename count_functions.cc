#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;


int count_line(string file_name);
//int count_line(char *text);
int count_char(string file_name);
//int count_char(char *text);

int main(int argc, char const *argv[])
{
    string file_name;
    int lines;
    int chars;

    if (argv[1] != "\n"){
        file_name = argv[1];

        lines = count_line(file_name);
        chars = count_char(file_name);

        cout << "This file has " << lines << " lines in it." << endl;
        cout << "This file has " << chars << " characters in it. " << endl;
    } else {
        
        lines = count_line("default_line.txt");
        chars = count_char("default_char.txt");

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