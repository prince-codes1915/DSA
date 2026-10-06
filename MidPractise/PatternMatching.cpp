#include <iostream>
using namespace std;
 int main()
 {
    string s1, s2;
    getline(cin , s1);
    getline(cin , s2);
    int n = 0 , m = 0 ;
    while(s1[n] != '\0') n++;
    while(s2[m] != '\0') m++;

    int i = 0;
    bool found = false;
    while(i < n-m+1)
    {
        int c = 0;
        for(int j = 0 ; j < m ; j++)
        {
            if(s1[i+j] == s2[j]) c++;
        }

        if(c == m){
            found = true;
            break;
        }
        i++;
    }
    found? cout << "Found at " << i : cout << "Not found" << endl;
 }