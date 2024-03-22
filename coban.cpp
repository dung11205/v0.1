//%d in ra so nguyen
//%c in ra chu
//%f in ra so thuc
// int so nguyen
// char ki tu
//float so thuc

//#include<stdio.h>
//int main(){
//	int X = 5;
//	printf("%d",X);
//}
//#include<stdio.h>
//int main(){
//	printf("--------------------\n");
//	int X = 5;
//	printf("%d", X);
//	char c = 'b';
//	printf("\n%c",c);
//}


//#include<stdio.h>
//int main(){
//	int x;
//	float y;
//	char c;
//	// nhap vao ky tu
///*
//	printf("\n nhap vao ky tu c:");
//	scanf("%c", &c);
//	printf("\n gia tri cua ki tu da nhap vao la: %c ", c);
//	
//	// nhap vao so nguyen
//	printf("\nnhap vao gia tri cua x:");
//	scanf("%d", &x);
//	printf("\n gia tri cua x da nhap la: %d", x);
//	
//	//nhap vao so thuc
//	printf("\n nhap vao so thuc y: ");
//	scanf("%f", &y);
//	printf("\ngia tri so thuc y da nhap la: %f", y);
//*/
//	// nhap nhieu gia tri cung mot hang
//	float x1, x2, x3;
//	printf("\nnhap vao gia tri x1, x2, x3 la:");
//	scanf("%f%f%f" , &x1 ,&x2, &x3);
//	printf("x1=%f, x2=%f, x3=%f", x1, x2, x3);
//
//}





//+ cong
//- tru
//* nhan
// / chia phan qnguyen toan ra hai dang
// % phep chia du
// ++ tang mot don vi
// -- giam mot don vi
// cac phep toan ++ va -- co the dat truuoc hoac sau toan hang.


//#include<stdio.h>
//int main(){
//	float a, b, c;
//	printf("nhap vao gia tri cua A = ");
//	scanf ("%f", &a);
//	printf("nhap vao gia tri cua B = ");
//	scanf("%f", &b);
//	printf("nhap vao gia tri cua C = ");
//	scanf("%f", &c);
//	float cong = a + b + c;
//	printf("%.2f + %.2f + %.2f = %.2f", a, b, c, cong);
//	
//}

//#include<stdio.h>
//int main(){
//	float a, b, c;
//	printf("nhap vao gia tri cua A = ");
//	scanf ("%f", &a);
//	printf("nhap vao gia tri cua B = ");
//	scanf("%f", &b);
//	printf("nhap vao gia tri cua C = ");
//	scanf("%f", &c);
//	float tru = a - b - c;
//	printf("%.2f - %.2f - %.2f = %.2f", a, b, c, tru);
//	
//}

//#include<stdio.h>
//int main(){
//	float a, b, c;
//	printf("nhap vao gia tri cua A = ");
//	scanf ("%f", &a);
//	printf("nhap vao gia tri cua B = ");
//	scanf("%f", &b);
//	printf("nhap vao gia tri cua C = ");
//	scanf("%f", &c);
//	float nhan = a * b * c;
//	printf("%.2f * %.2f * %.2f = %.2f", a, b, c, nhan);
//	
//}


//#include<stdio.h>
//int main(){
//	float a, b, c;
//	printf("nhap vao gia tri cua A = ");
//	scanf ("%f", &a);
//	printf("nhap vao gia tri cua B = ");
//	scanf("%f", &b);
//	printf("nhap vao gia tri cua C = ");
//	scanf("%f", &c);
//	float chia = a / b / c;
//	printf("%.2f / %.2f / %.2f = %.2f", a, b, c, chia);
//	
//}



#include <stdio.h>
//int main() {
//    int i = 3;
//    printf("%d", (++i)++);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int number = 28341;
//    int sum = 0;
//
//    while (number > 0) {
//        int digit = number % 10;
//        if (digit % 2 == 0) {
//            sum += digit;
//        }
//        number /= 10;
//    }
//
//    printf("Tong cac so chan: %d\n", sum);
//}


#include <stdio.h>
int main() {
    int number;
    printf("Nhap mot so nguyen hang van (tu 9999 den 100000): ");
    scanf("%d", &number);
    int sum = 0;
    int digit;
    while (number > 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        number /= 10;
    }
    printf("tong cac chu so chan: %d\n", sum);
}



