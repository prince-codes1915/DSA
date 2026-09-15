#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "omos";
    int key = 0;
    int n = str.length();
    cout << n ;
    for(int i = 0 ; i < n/2 ; i++)
    {
        if(str[i] != str[n-i-1])
        {
            key = -1;
        }
        
    }
    if(key == -1) cout << "Not a palindrome!" << endl;
    else cout << "Palindrome!" << endl;
}