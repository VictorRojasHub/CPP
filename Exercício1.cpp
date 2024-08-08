#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    float c,f;
    system("CLS");
    cout<<"Informe a temperatura em graus centígrados:";
    cin>>c;
    f=(9*c+160)/5;
    cout <<"Temperatura em Farenheit " << f << endl;
    system("PAUSE");
    return 0;
}

