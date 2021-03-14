//2.1
#include <iostream>
#include "Line.h"
#include <Windows.h> 
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Line a;
    cin >> a;
    cout << a;
    a.denial();
    cout << " Інкремент(префіксна форма) "<< endl;
    ++a; cout << a;
    a.denial();
    cout << " Дикремент(префіксна форма) " << endl;
    --a; cout << a;
    a.denial();
    cout << " Інкремент(постфіксна форма) " << endl;
    a++; cout << a;
    a.denial();
    cout << " Дикремент(постфіксна форма) " << endl;
    a--; cout << a;
    a.denial();
    return 0;
}
  
    
   
   