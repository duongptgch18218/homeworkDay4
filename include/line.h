#ifndef _LINE_H_
#define _LINE_H_

#include <iostream>
#include <string>

using namespace std;

class Line{
    private:
        string name;
        int length;
    public:
        Line(const string &name, const int &length);
        int get_length();
        void set_length(const int &length);


        Line operator+(const int &length);
        
        Line operator-(const int &length);
        
        bool operator>(const Line &l);
        
        Line operator++();
        
        Line operator--();
        
        bool operator==(const Line &l);
};

#endif