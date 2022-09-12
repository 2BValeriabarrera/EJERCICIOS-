#include <iostream>

using namespace std;

int pot(int a,int b);

int main()
{
int a, b, potencia;
cout << "Introduce la base de la potencia: " ;

cin >> a;

cout << "Introduce el exponente(positivo):"  ;

cin >> b;

potencia=pot(a,b);

cout << "La potencia es:" << potencia << endl << endl;


return 0;
}

int pot(int a,int b){

if (b==0) return 1;
else return (a*pot(a,b-1));
}
