#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> shei;
    shei.push_back(3);
    shei.push_back(2);
    
    for(int nums : shei)
    {
        cout << nums << " ";
    }

}