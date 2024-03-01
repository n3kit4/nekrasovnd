#include <iostream>
#include <string>
using namespace std;

int main()
{
    char chr1 = '1';
    char chr2 = '2';
    char chr3 = '3';
    char chr4 = '4';
    char chr5 = '5';
    string s = "";
    s += chr1;
    s += chr2;
    s += chr3;
    s += chr4;
    s += chr5;
    int f = stoi(s);
    cout << f << endl; 
    cout << typeid(f).name();
}    
