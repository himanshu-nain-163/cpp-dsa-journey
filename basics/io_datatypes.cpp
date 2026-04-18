//Topic: Basic I/O and Datatypes
// Date: 19 April 2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    //basic input output
    cout << "Hey Raj\n" << endl << "Hey" << endl;

    int x;
    cin >> x;
    cout << x << endl;

    int y,z;
    cin >> y >> z;
    cout << "value of y: " << y << "and z: " << z << endl;

    //datatypes
    //showing size ranges: int(4B), long(8B), long long(8B)

    int a=1;
    long b=2;
    long long c=3752357058032;
    

    float d=5.678876946395623;
    double e=6;
    cout << "value of d; " << d << " and " << "e: " << e << endl;

    string s1,s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;

    string str;
    cin.ignore();
    getline(cin,str);
    cout << str << endl;

    return 0;
}