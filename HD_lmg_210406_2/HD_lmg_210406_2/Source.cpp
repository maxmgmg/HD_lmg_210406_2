#include<stdio.h>
#include<iostream>
using namespace std;
void main() {
	float PI = 3.141592;
	int dia = 10;
	float r = dia / 2;
	float C_Round = dia * PI;
	float C_Area = r * r * PI;

	printf("원의 넓이 = %f, 원의 둘레 = %f\n", C_Area, C_Round);
	cout << "원의 넓이 = " << C_Area << ", 원의 둘레 = " << C_Round << endl;
	fgetc(stdin);
}