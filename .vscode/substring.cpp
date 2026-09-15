#include <iostream>
using namespace std;

int main()
{
    string str1 , str2;
    getline(cin , str1);
    int n , m ;
    cin >> n >> m;
    int i = n;
    int j = 0;
    while(str1[i] != '\0' && m > 0)
    {
        str2 += str1[i];
        i++;
        j++;
        m--;
    }
    str2[j] = '\0';
    cout << str2 << endl;
}