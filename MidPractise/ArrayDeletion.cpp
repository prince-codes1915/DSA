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

    int val ;
    cout << "Enter value to be deleted : " ;
    cin >> val;
    int ind;
    for(int i = 0; i < n ; i++){
        if(arr[i]==val) ind = i;
    }
    for(int i = ind ; i < n ; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " "; 
    }

}