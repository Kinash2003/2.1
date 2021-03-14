//Line.cpp
#include "Line.h"
Line::Line()
{
    first = 0;
    second = 0;
    x = 0;

}
Line::Line(double first = 0, double second = 0, double x = 0)
{
    this->first = first;
    this->second = second;
    this->x = x;
}
Line::Line(const Line& c)
{
    first = c.first;
    second = c.second;
    x = c.x;
}
void Line::Setfirst(double first)
{
    this->first = first;
}
void Line::Setsecond(double second)
{
    this->second = second;
}
void Line::Setx(double second)
{
    this->x = x;
}
double Line::Getfirst() const { return first; }
double Line::Getsecond() const { return second; }
double Line::Getx() const { return x; }
Line& Line::operator = (const Line& c)
{
    first = c.first;
    second = c.second;
    x = c.x;
    return *this;
}
istream& operator >> (istream& in, Line& c)
{
    
    cout << " Введіть: " << endl;
    cout << " A = "; in >> c.first;
    cout << " B = "; in >> c.second;
    cout << " x = "; in >> c.x;
    return in;
}
ostream& operator << (ostream& out, const Line& c)
{
    out << string(c);
    return out;
}
Line::operator string() const
{
    stringstream ss;
    ss << " Значення функції: " << endl;
    ss << " A: " << first << endl;
    ss << " B: " << second << endl;
    ss << " x: " << x << endl;
    return ss.str();
}
double Line::denial()
{
    
    cout << " A != 0 " << endl;
    if (first != 0 )
    {
        cout << " Yes " << endl;
        cout << " y = " << function() << endl;
        return true;
    }
    else
    {
        cout << " No " << endl;
        return false;
    }
}
double Line::function()
{
    return  first * x + second;
}

Line& Line::operator ++() {     //перевантаження операції "інкременту"(префіксна форма)
    ++first;
    ++second;
    ++x;
    return *this;
}
Line& Line::operator --() {     //перевантаження операції "дикременту"(префіксна форма)
    --first;
    --second;
    --x;
    return *this;
}
Line Line::operator ++(int) {   //перевантаження операції "інкременту"(постфіксна форма)
    Line a(*this);
    first++;
    second++;
    x++;
    return a;
}
Line Line::operator --(int) {   //перевантаження операції "дикременту"(постфіксна форма)
    Line a(*this);
    first--;
    second--;
    x--;
    return a;
}