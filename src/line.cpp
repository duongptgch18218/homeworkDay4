#include "../include/line.h"
#include <iostream>

using namespace std;

Line::Line(const string &name, const int &length){
    this -> name = name;
    this -> length = length;
}

int Line::get_length(){
    return this -> length;
}

void Line::set_length(const int &length){
    this -> length = length;
}

Line Line::operator+(const int &length){
    int new_length = this -> length + length;
    return Line(this -> name, new_length);
}

Line Line::operator-(const int &length){
    int new_length = this -> length - length;
    return Line(this -> name, new_length);
}

Line Line::operator++(){
    int new_length = this -> length + 1;
    return Line(this -> name, new_length);
}

Line Line::operator--(){
    int new_length = this -> length - 1;
    return Line(this -> name, new_length);
}

bool Line::operator>(const Line &l){
    return (this -> length > l.length);
}

bool Line::operator==(const Line &l){
    return (this -> length == l.length);
}
