#include <iostream>
using namespace std;

void welcome() { /* declara a fun��o */
	cout << "Welcome!! \n";
}

void printNumber(int numToPrint) {  /*numToPrint fica em cinza pois � um input param
	que fica reservado para o uso da fun��o*/
	cout << numToPrint << endl;
}

void multiply(int a, int b) {
	cout << a * b << endl;
}

int add(int a, int b) {
	int result;
	result = a + b;
	return result;
}
int main()
{
	welcome(); /* chama a fun��o*/

	printNumber(4);

	multiply(5, 4);
	int c;
	c = add(2, 2);
	printNumber(c);
	system ("pause");
}