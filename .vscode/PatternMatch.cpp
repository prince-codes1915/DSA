#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 , str2;
    getline(cin , str1);
    getline(cin , str2);

    int n = str1.length();
    int m = str2.length();
    int c = 0;

    for(int i = 0 ; i <= n - m ; i++)
    {
        for(int j = 0; j < m ; j++ )
        {
            if(str1[i + j] == str2[j]){
                c++;
            }
        }
    }

    if(c == m) cout << "Found" << endl;
    else cout << "Not Found" << endl;

}