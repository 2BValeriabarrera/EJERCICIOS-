#include <iostream>
using namespace std;

int main(){
	double nota1, nota2, nota3, promedio;
	cout<<"Porfavor ingrese la primera nota:"<<endl;
	cin>> nota1;
	cout<<"Porfavor ingrese la segunda nota:"<<endl;
	cin>>nota2;
	cout<<"Porfavor ingrese la tercer nota: "<<endl;
	cin>>nota3;
	promedio=(nota1+nota2+nota3)/3;
	if (promedio<=7 and promedio <=10){
		cout<<"Aprobado";
	}else if(promedio >=4 && promedio <7) {
		cout<<"Regular";
	}else if (promedio >0 && promedio <4){
		cout <<"Reprobado";
	}else {
		cout<<"Su nota no es valida";
	}
}

