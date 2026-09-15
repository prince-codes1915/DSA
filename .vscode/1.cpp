#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
 
    cout<<"Array elements: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
 
    int maxVal=arr[0], minVal=arr[0], sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxVal) maxVal=arr[i];
        if(arr[i]<minVal) minVal=arr[i];
        sum=sum+arr[i];
    }
    float avg=(float)sum/n;
 
    cout<<"Maximum: "<<maxVal<<endl;
    cout<<"Minimum: "<<minVal<<endl;
    cout<<"Average: "<<avg<<endl;
    return 0;
}

