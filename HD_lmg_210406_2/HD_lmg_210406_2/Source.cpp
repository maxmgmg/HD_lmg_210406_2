#include<stdio.h>
#include<iostream>
using namespace std;
void main() {
	float PI = 3.141592;
	int dia = 10;
	float r = dia / 2;
	float C_Round = dia * PI;
	float C_Area = r * r * PI;

	printf("���� ���� = %f, ���� �ѷ� = %f\n", C_Area, C_Round);
	cout << "���� ���� = " << C_Area << ", ���� �ѷ� = " << C_Round << endl;
	fgetc(stdin);
}