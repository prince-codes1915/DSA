#include <iostream>
using namespace std;

int main()
{
    char arr[] = "Prince";
    int n = 0;
    int i = 0;
    while(arr[i] != '\0'){
        n++;
        i++;
    }
    cout << n << endl;
}