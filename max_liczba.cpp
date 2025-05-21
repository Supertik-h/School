#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    int t[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> t[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            m=t[i];
        }
        if(t[i]>m)
        {
            m=t[i];
        }
    }
    
    cout << m;
}