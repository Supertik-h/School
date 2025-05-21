#include <iostream> 
#include <math.h>

using namespace std;

int NWD(long long int a, long long int b){
    int p;
    while(b!=0){
        
        p = b;
        b = a%b;
        a = p;
    }
    return a;
}



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    
    cin >> a >> b;
    
    cout << NWD(a,b);
   

    return 0;
}