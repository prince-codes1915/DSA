#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    vector<string> strs;
    for(int i = 0 ; i < t ; i++)
    {
        string temp;
        getline(cin , temp);
        cin.ignore();
        strs.push_back(temp);
        
    } 
    
    for(int i = 0 ; i < t ; i++)
    {
        string evenTemp;
        string oddTemp;
        for(int j = 0 ; j <= strs[i].length() - 1 ; j++)
        {
            
            if(j == 0 || j % 2 == 0)
            {
                
                evenTemp.push_back(strs[i][j]);
            }
            else 
            {
                oddTemp.push_back(strs[i][j]); 
            }
        }
        
        cout << evenTemp << " " << oddTemp << endl;
        
    }
    return 0;
}
