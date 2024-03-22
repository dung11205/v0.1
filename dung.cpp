//#include<stdio.h>
//int main(){
//	printf("=========\n");
//	int D = 3;
//	float I = 3.99;
//	char E = 'B';
//	int U = -1;
//	printf("X = %d \n", D);
//	printf("X/** = %f \n", I);
//	printf("Z = %c \n", E);
//}



#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int thuesuat;
	float luong, sothue, luongrong = 0;
	cout << "Nh?p s? ti?n luong : ";
	cin >> luong;
	if (luong > 15)
	{
		sothue = luong *0.3;
		thuesuat = 30;
	}
	else if (luong >= 7)
	{
		sothue = luong *0.2;
		thuesuat = 20;
	}
	else
	{
		sothue = luong *0.1;
		thuesuat = 10;
	}

	luongrong = luong - sothue;
	cout << "Luong = " << luong << endl;
	cout << "Thu? thu nh?p " << thuesuat << "% = " << sothue << endl;
	cout << "Ti?n luong th?c nh?n = " << luongrong << end;
	return 0;
}
