//#include<stdio.h>
//  int main()
//{
//float luong=0, sothue=0;
//printf("nhap so tien luong: ");
//scanf("%f",&luong);
//if (luong>=15)
//{
//  sothue=luong*0.3;
//  printf("\n thuesuat=30");
//  
//}
//else if (luong>=7)
//{
//  sothue=luong*0.2;
//  printf("\n thuesuat=20");
//}
//else
//{
//sothue=luong*0.1;
//printf("\n thuesuat=10");
//}
//}

//#include<stdio.h>
//int main()
//{
//	int tuoi=0;
//    printf("nhap so tuoi cua hoc sinh:");
//    scanf("%d",&tuoi);
//    if (tuoi >=16){
//        printf("hoc sinh du tuoi vao lop 10");
//    }
//    else {
//        printf ("hoc sinh khong du tuoi vao lop 10");
//    }
//}



#include<stdio.h>
int main()
{
	int a=0;
    printf("nhap n:");
    scanf("%d",&a);
    if (a >=100){
        printf("lon hon 100");
    }
    else {
        printf ("nho hon 100");
    }   
}













//#include<stdio.h>
//int main(){
//	int SUM = 0;
//	for(int n = 1; n<=10000; n=n+1){
//		if((n % 7) == 0){
//			SUM = SUM +n;
//		}
//	}
//	printf("%d\n",SUM);
//}


//#include<stdio.h>
//int maain(){
//	int SUM = 100;
//	for(int n =101; n<=1000; n=n+1){
//		if((n % 13) ==100){
//			SUM = SUM +n;
//		}
//	}
//	printf("%d\n",SUM);
//}

//#include <stdio.h>
//
//int main(){
//    int SUM =0;
//    for(int n=100; n<=1000; n=n+1){
//        if((n%13)==0){
//            SUM=SUM+n; 
//        }
//     }
//        printf("%d\n",SUM);
//}

//#include <stdio.h>
//
//int main(){
//    int SUM =0;
//    for(int n=100; n<=1000; n=n+1){
//        if((n%9&&6)==0){
//        	printf("%d\n",n);
//            SUM=SUM+n; 
//        }
//     }
//        printf("%d\n",SUM);
//}

//#include <stdio.h>
//
//int main(){
//    int SUM =0;
//    for(int n=100; n<=1000; n=n+1){
//        if((n%1==0)&&(n%2==0)&&(n%6==0)&&(n%9==0){
//            SUM=SUM+n; 
//        }
//     }
//        printf("%d\n",SUM);
//}







//#include <stdio.h>
//#include <math.h>
//
//int main(){
//    int n;
//    printf("\nNhap so di e = ");
//    scanf("%d", &n);
//    if(n < 2){
//        printf("\n%d khong phai so nguyen to", n);
//        return 0;
//    }
//    int count = 0;
//    for(int i = 2; i <= sqrt(n); i++){
//        if(n % i == 0){
//            count++;
//        }
//    }
//    if(count == 0){
//        printf("\n%d la so nguyen to", n);
//    }else{
//        printf("\n%d khong phai so nguyen to", n);
//    }
//}


#include <stdio.h>
#include <math.h>

intmain(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
}


































































