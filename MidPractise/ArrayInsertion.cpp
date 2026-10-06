#include <iostream>
using namespace std;
int main()
{
     int n;
    cout << "Enter N : " ;
    cin >>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    int val , ind;
    cout << "Enter value and index : " ;
    cin >> val >> ind;
    n++;
    for(int i = n ; i > ind ; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[ind] = val;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " "; 
    }
}