#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	cout << "valores ímpares de 1 a 20: " << endl;
	
	for (int i = 1; i <= 20; i++){ //conta de 1 a 20
		if(i % 2 != 0) { //ve se o resto da divisao é diferente de zero, se for o número necessariamente é ímpar
			cout << i << " "; //mostra o número
		}
	}
	cout << endl; //quebra de linha
	return 0;
}

