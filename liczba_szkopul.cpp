#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int max = n-1, min = 2;

    while(n%min == 0){
        ++min;
        
    }
    cout << min << " " << max;
}