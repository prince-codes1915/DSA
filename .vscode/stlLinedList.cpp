#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int>ll;
    ll.push_back(3);
    ll.push_back(4);
    ll.push_front(2);
    ll.push_front(1);
    for(int nums : ll)
    {
        cout << nums << " ";
    }

    auto pos = ll.begin();
    while(*pos!= 3)
    {
        pos++;
    }

    ll.insert(pos , 99);
    ll.insert(next(pos) , 100);

    for(int nums : ll)
    {
        cout << nums << " ";
    }
    
}