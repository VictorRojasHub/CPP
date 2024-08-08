#include<iostream>
#include<stdlib.h>
#include<math.h>
//volume da lata de óleo
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
    double raio,altura;
    double volume;
    //const pi = 3.14159;
    system("CLS");
    cout<<"Informe o raio da lata de óleo";
    cin>>raio;
    cout<<"Informe a altura da lata de óleo";
    cin>>altura;
    volume= 3.14159*(raio*raio)*altura;
    cout <<"Volume da lata de óleo " << volume << endl;
    system("PAUSE");
    return 0;
}

