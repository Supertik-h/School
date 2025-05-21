#include <iostream>
using namespace std;

long long NWD(int x, int y){
	if(y!= 0) return NWD(y, x%y);
	return x;
	
}

int main() {
	int n = 1, m = 10, k = 1;
	int tab[m-n+2] = {0};
	
	for(int i = n; i < m-n+1; ++i){
		for(int j = i+1; j < m-n+1; ++j){
			if(NWD(i, j) == k){
				cout << i << " " << j << endl;
			}
		}
	}
	
	
	
	
	
	return 0;
}