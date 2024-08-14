#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{	
	const int n = 15;
	double valores[n];
	double soma = 0, media, maior;
	
	cout << "Informe 15 valores: " << endl;
	for(int i = 0; i < n; i++){
		cin >> valores[i];
		soma += valores[i];
		if(i == 0 || valores[i]> maior){
			maior = valores[i];
		}
	}
	media = soma / n;
	cout << "Média dos valores: " << media << endl;
	cout << "Maior valor: " << maior << endl;
	cout << "Diferença entre a média e o maior valor: " << maior - media << endl;
	
	return 0;
}

