#include <bits/stdc++.h> 

using namespace std;

void dos(int& x, int& suma){
    int dzielniki[x] = {0};
	int k = 0;

    for(int i = 1; i*i <= x; i++){
        if(x%i == 0){
            dzielniki[k] = i;
            ++k;
            if(i != 1){
            	dzielniki[k] = x/i;
            	++k;
            }
        }
    }

    for(int i = 0; i < k; ++i){
        suma += dzielniki[i];
    }
}



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    int suma = 0;
    
  
    cin >> x;
    dos(x, suma);

	if(suma == x){
		cout << "Ta liczba jest doskonała";
	}else{
		cout << "Ta liczba nie jest doskonała";
	}



    return 0;
}