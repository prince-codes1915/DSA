#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5} ;
    int val = 4;
    int ind = -1;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == val)
        {
            ind = i;
        }
    }
    if(ind != -1)
    {
        cout << "Found at " << ind << endl ;
    }
    else cout << "Not Found!!" ;

}