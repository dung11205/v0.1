//	#include <stdio.h>
//float A(){	
//	printf("2 a\n");}
//char hello(){
//	printf("3 hello\n");
//	A();}
//int S(int N){
//	printf("4 S\n");
//	A();
//	hello();}
//int main() {
//	printf("1 main\n");
//	A();
//	hello();
//	S(0);}

#include<stdio.h>
float A(void);
char hello(void);
int S(int);
int mian(){
	printf("1 main\n");
	A();}
float A(){
	printf("2 a\n");
	hello();
}
char hello(){
	printf("3 heloo\n");
	A();
}

