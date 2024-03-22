#include<stdio.h>
int main(){
	int X = 0, Y = 1, Z;
	Z = (!X && Y) || (X && (!Y));
	printf("X=%d,Y=%d => Z=%d",X,Y,Z);
}
