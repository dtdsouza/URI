#include <iostream>
#include <locale>
#include <iomanip>
#include <math.h>
#define pi 3.14159

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double A,B,C,area_triangulo,area_circulo,area_trapezio,area_quadrado,area_retangulo;
	cin>>A>>B>>C;
	area_triangulo = A*C/2;
	area_circulo = pi * pow(C,2);
	area_trapezio = (A+B)*C/2;
	area_quadrado = pow(B,2);
	area_retangulo = A * B;
	cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<area_triangulo<<endl;
	cout<<"CIRCULO: "<<fixed<<setprecision(3)<<area_circulo<<endl;
	cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<area_trapezio<<endl;
	cout<<"QUADRADO: "<<fixed<<setprecision(3)<<area_quadrado<<endl;
	cout<<"RETANGULO: "<<fixed<<setprecision(3)<<area_retangulo<<endl;
	
	cin.get();
	return 0;
}
