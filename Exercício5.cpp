#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	cout << "valores �mpares de 1 a 20: " << endl;
	
	for (int i = 1; i <= 20; i++){ //conta de 1 a 20
		if(i % 2 != 0) { //ve se o resto da divisao � diferente de zero, se for o n�mero necessariamente � �mpar
			cout << i << " "; //mostra o n�mero
		}
	}
	cout << endl; //quebra de linha
	return 0;
}

