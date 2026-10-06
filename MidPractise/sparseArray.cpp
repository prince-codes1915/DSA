#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] =
    {
        {0 , 0 , 1},
        {1 , 1 , 2},
        {2 , 2 , 3}
    };

    
    for(const auto& row : arr)
    {
        for(int nums : row)
        {
            cout << nums << " ";
        }
        cout << endl;
    }

}