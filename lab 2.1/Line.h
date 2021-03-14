//Line.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Line
{
    double first, second, x;
public:

    Line();
    Line(double, double, double);
    Line(const Line&);
    void Setfirst(double);
    void Setsecond(double);
    void Setx(double);
    double Getfirst() const;
    double Getsecond() const;
    double Getx() const;
    Line& operator = (const Line&);
    operator string() const;
    friend istream& operator >> (istream&, Line&);
    friend ostream& operator << (ostream&, const Line&);
    double denial();
    double function();
   // Line& operator ++ ();
    Line& operator ++();     //перевантаження операції "інкременту"(префіксна форма) --- first
    Line& operator --();     //перевантаження операції "дикременту"(префіксна форма) --- first

    Line operator ++(int);   //перевантаження операції "інкременту"(постфіксна форма) --- second
    Line operator --(int);   //перевантаження операції "дикременту"(постфіксна форма) --- second
  };
    