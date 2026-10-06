#include <iostream>
using namespace std;

int main()
{
    string str1 , str2;
    getline(cin , str1);
    getline(cin , str2);
    int m = 0 , n = 0;
    while(str2[m] != '\0') m++;
    while (str1[n] != '\0')
    {
        str2 += str1[n];
        n++;
    }
    cout << str2;
}