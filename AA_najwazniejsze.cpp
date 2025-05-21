#include <iostream>
using namespace std;

long long FIB(int x){
	if(x == 1 || x == 0) return 1;
	return FIB(x-1) + FIB(x-2);
}

long long potega(int x, int n){
	if(n == 0) return 1;
	return potega(x, n-1)*x;
}

long long NWD(int x, int y){
	if(y != 0) return NWD(y, x%y);
	return x;
}

long long NWD1(int x, int y){
	int r = x%y;
	while(r!=0){
		x= y;
		y = r;
		r = x%y;
	}
	return y;
}

long long NWD2(int x, int y){
	int r;
	do{
		r = x%y;
		x = y;
		y = r;
	}while(r!= 0);
	return x;
}

long long NWW(int x, int y){
	return (x*y/NWD(x, y));
}


int main() {
	for (int i = 0; i < 8; ++i){
		cout << FIB(i) << " ";
	}
	cout << endl;
	cout << potega(2,5);
	cout << endl;
	cout << NWD(15, 25);
	cout << endl;
	cout << NWD1(15, 25);
	cout << endl;
	cout << NWD2(15, 25);
	cout << endl;
	cout << NWW(10, 8);
	
	return 0;
}