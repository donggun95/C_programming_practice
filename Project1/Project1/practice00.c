#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
int main() {
	int i, sum;
	sum = 0;
	for (int i = 1; i < 11; i++)
		sum += i;
	printf("%d\n",sum);

	i = 1;
	sum = 0;
	while (i < 11) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);

	i = 1;
	sum = 0;
	do{
		sum += i;
		i++;
	} while (i < 11);
	printf("%d\n", sum);

	/*int x, y;
	x = 10, y = 3;
	printf("%d\n", x / y);
	printf("%f\n", x / y);
	printf("%f\n", (double) x / y);*/

	/*char input[100];
	int age;
	printf("���̸� �Է��ϼ���\n");
	scanf("%d",&age);
	printf("�̸��� �Է��ϼ���\n");
	scanf(" %s", input);

	printf("%d\n", age);
	printf("%s\n", input);*/


	/*float pi = 3.14f;
	double rating = 0.02;
	long double fNumber = 1.;
	long double ldNumber = 333.66e-22;
	printf("%f %lf %lf %lf\n",pi,rating, fNumber, ldNumber);*/


	/*char uppercase = 'A';
	printf("�빮�� C ���> %c\n", uppercase + 2);
	printf("�빮�� A �ƽ�Ű�ڵ� ���> %d\n", uppercase);*/


	/*
	int num_keywords;
	num_keywords = 32;
	int a, b;
	int age = 16;
	printf("int age=16; ������ ���尪�� %d�Դϴ�. \n", age);
	age = 016;
	printf("int age=016; ������ ���尪�� %d�Դϴ�. \n", age);
	printf("			 8�����δ� %#o�Դϴ�. \n", age);
	age = 0x16;
	printf("int age=0x16; ������ ���尪�� %d�Դϴ�. \n", age);
	printf("			 16�����δ� %#x�Դϴ�. \n", age);

	printf("");
	printf("\n");
	*/

	/*const double pi = 3.14;
	int pi2 = 0;
	printf("%d", pi2);*/
	/*long int year;
	int month;
	short int date;
	char blood = 'A';

	year = 1000;
	month = 3;
	date = 15;

	printf("My birthdat is %d, %d, %d, and my blood type is %c",
		date, month, year, blood);*/


	printf("\n");
	return 0;
}