#include <bits/stdc++.h> 

using namespace std;
bool czy_pierwsza(int x){
	if(x == 0 || x == 1 || x == 2){
		return false;
	}
    for(int i = 2; i < x; ++i){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;

    if (czy_pierwsza(x) == true){
        cout << "Liczba jest pierwsza";
    }else{
        cout << "Liczba nie jest pierwsza";
    }
   
  
   


    return 0;
}