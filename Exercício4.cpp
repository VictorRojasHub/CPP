#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
	int findmajor(int a, int b){
		if (a > b)
			return a;
		else
			return b;
	}
int main()
{
	int n, major; //the first number is always considered the major
	for (int i = 1; i <=5; i++){
		cout << "informe o valor" << i << ": ";
		cin >> n; //loop para ler os 4 próximos numeros
		major = findmajor(major, n);
	}
	cout << " O maior valor informado é: " << major << endl;
	return 0;
}

