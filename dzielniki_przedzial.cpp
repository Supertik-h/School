#include <iostream>
using namespace std;

int main() {

	int n = 1,m = 10;
	int k = 3;
	int dzielnik = 0;
	int tab[m-n +7] = {0};
	for(int i = n; i <= m; ++i){
		
		for(int j = 1; j*j<=i; ++j){
			if(i%j==0){
				dzielnik++;
				if(i/j != j){
					dzielnik++;
				}
			}
		}
		tab[i] = dzielnik;
		if(tab[i] == k){
			cout << i << "\n";
		}
		dzielnik = 0;
	}
	//cout << "\n";
	//for(int i = n; i <= m; ++i){
	//	cout << i << " = " << tab[i] << "\n";
	//}


	return 0;
}