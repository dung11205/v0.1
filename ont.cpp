//#include<stdio.h>
//int main(){
//	printf("Ten: NGUYEN VAN DUNG\n");	
//	printf("MSSV: 102668\n");
//	printf("Ma De: 0\n");
//	// SV chon so 6
//	int X = 6, Y = 100686;
//	//cach 1
//	float S1 = 0;
//	for(int i=0;i<100;i++){
//		S1 = S1 + Y%(X+i)/(X+(float)i+1);
//	}
//	printf("%.3f\n",S1);
//	//cach 2
//	float S2 = 0, j = 1;
//	for(int i=0;i<100;i++){
//		S2 = S2 + Y%(X+i)/(X+j);
//		j++;
//	}
//	printf("%.3f\n",S2);
//}



#include<stdio.h>
int ham_phu2(int Y){//Y=5;tong1=15
int tong1 = 0;
for(int i=1;i<=Y;i++){
tong1 = tong1 + i;
}
return tong1;
}
int ham_phu1(int X){
	//X
int tong1 = 0, tong2;
for(int i=1;i<=X;i++){
tong1 = tong1 + i;
}
tong2 = ham_phu2(X/2);
return tong1-tong2;
}
int main(){
	int N;
scanf("%d",&N);
printf("Ket qua: %d",ham_phu1(2*N));
}
