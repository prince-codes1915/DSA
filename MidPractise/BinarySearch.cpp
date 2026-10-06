#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int val;
    cout <<"Enter value to search : " << endl;
    cin >> val;
    int low = 0 , high = n-1;
    int ind = -1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == val){
            ind = mid;
            break;
        }
        else if(arr[mid] > val){
            high = mid - 1 ;
        }
        else low = mid + 1;
    }

    if(ind !=-1) cout << "Found at " << ind << endl;
    else cout << "Not Found " << endl; 
}