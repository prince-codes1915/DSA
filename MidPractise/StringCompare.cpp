#include <iostream>
using namespace std;
int main()
{
    string str1 , str2;
    getline(cin , str1);
    getline(cin , str2);
    int n = 0 , m = 0 ;
    while(str1[n] != '\0') n++;
    while(str2[m] != '\0') m++;

    if( n!=m) cout << "Not Equal" ;
    else{
        int c = 0;
        for(int i = 0; i < m ; i++)
        {
            if(str1[i] == str2[i]) c++;
        }
        if( c == m) cout << "Equal";
        else cout << "Not equal";
    }
}