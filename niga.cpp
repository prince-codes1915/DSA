#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) return false;
    for(int i = 2; i * i <= num ; i++)
    {
        if (num % i == 0) return false;
    }
    return true;;
}


int main()
{
    int n = 6;
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "Total is " << sum << endl;

    if(isPrime(n)) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;

    return 0;
}