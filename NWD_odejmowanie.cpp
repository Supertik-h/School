#include <iostream> 
#include <math.h>

using namespace std;

int NWD(long long int a, long long int b){
    int p;
    while(a - b != 0){
        if(a>b){
            p = a-b;
            a = p;
        }else{
            p = b-a;
            b = p;
        }

        
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