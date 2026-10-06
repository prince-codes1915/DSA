#include <iostream>
using namespace std;

int main()
{
    string str1 , str2;
    getline(cin , str1);
    int n , m;
    cin >> n >> m;
    for(int i = n ; m > 0 && str1[i] != '\0' ; i++)
    {
        str2 += str1[i];
        m--;
    }
    cout << str2;
}