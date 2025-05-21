#include <iostream>
using namespace std;

void F(int n, int sum[], int tab[]){
	//int tab[n] = {4, 5, 6, 7, 8};
	for(int i = 0; i < n; ++i){
		for(int j = 1; j <= tab[i]; ++j){
			if(tab[i]%j==0){
				sum[i] += j;
			}
		}
	}
}

int main() {
	int n = 5, k = 12, il = 0;
	int suma = 0;
	int sum[n]= {0};
	int tab[n] = {4, 5, 6, 7, 8};
	
	F(n, sum, tab);
	
	//for(int i = 0; i < n; ++i){
	//	cout << sum[i] << " ";
	//}
	
	for(int i = 0; i < n; ++i){
		if(sum[i] == k ){
			cout << tab[i] << " ";
			suma += tab[i];
			++il;
		}
	}
	
	cout << endl;
	cout << suma << endl;
	cout << il;
	
	
	
	return 0;
}