#include<iostream>
#include<windows.h>
using namespace std;

void color()
{
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 1);
    cout<<"TEXTO A COLOR"<<endl;
    SetConsoleTextAttribute(hConsole, 2);
    cout<<"TEXTO A COLOR"<<endl;
    SetConsoleTextAttribute(hConsole, 3);
    cout<<"TEXTO A COLOR"<<endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"TEXTO A COLOR"<<endl;
    system("pause");
}
