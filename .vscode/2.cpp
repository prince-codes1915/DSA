#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
 
    cout<<"Original array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
 
    int pos, val;
    cout<<"Enter position and value to insert: ";
    cin>>pos>>val;
    for(int i=n;i>pos;i--)
        arr[i]=arr[i-1];
    arr[pos]=val;
    n=n+1;
 
    cout<<"Array after insertion: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
 
    int delPos;
    cout<<"Enter position to delete: ";
    cin>>delPos;
    for(int i=delPos;i<n-1;i++)
        arr[i]=arr[i+1];
    n=n-1;
 
    cout<<"Array after deletion: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
