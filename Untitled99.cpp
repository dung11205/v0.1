//#include <stdio.h>
//
//int main() {
//    int mssv = 102;
//    int s = 0;
//
//    for (int n = 1; n <=102; n += 2) {
//        s += n;
//    }
//
//    printf("Tong %d là: %d\n", mssv, s);
//}




#include<stdio.h>
int main(){
	printf("Ten: NGUYEN VAN DUNG");
	printf("MSSV: 102668");
	printf("Ma De: 0");
	//SV chon so 2
	int X = 2, Y = 102668;
	float
	}
	printf("%.3f\n",S);
}

//#include<stdio.h>
//int main(){
//  int X=0;
//  printf("nhap so:");
//  scanf("%d",&X);
//  
//  if((8<X) && (X<=10))
//  {printf("so lon");}
//  else if((3<X)&&(X<=8))
// {printf("so lon trung binh");}
//  else if ((0<X) && (X<=3))
//  {printf("so nho");}
//  else {printf("so khong hop le");}
//}


//#include <stdio.h>
//int main() {
//    int a, b, c;
//    printf("N: ");
//    scanf("%d %d %d", &a, &b, &c);
//    int bcnn = a;
//    while (bcnn % b != 0 || bcnn % c != 0) {
//        bcnn++;
//    }
//    printf("Boi chung nho nhat la %d, %d và %d là %d\n", a, b, c, bcnn);
//}


//#include <stdio.h>
//int main() {
//    double S = 0;
//    int i;
//    for(i=1; i<=10; i++) {
//        if(i%2 != 0) {
//            S += (double)(i + i+1) / (i * (i+1)); 
//        }
//        else {
//            S -= (double)(i + i+1) / (i * (i+1));
//        }
//    }
//    printf("Gia tri cua S = %lf", S); 
//}

//#include <stdio.h>
//
//int mssv(int n) {
//    if (n <= 1000) {
//        return 0;
//    } else {
//        if (n%2==0) {
//            return n +mssv(n - 2);
//        } else {
//            return mssv(n - 1);
//        }
//    }
//}
//
//int main() {
//    int batdau = 102668;
//    int ketthuc = 3 * batdau;
//   int sum = mssv(ketthuc);
// printf("Tong cac so chan tu %d den %d la: %d\n", batdau,sum,ketthuc);
// return 0;
//}



//#include<stdio.h>
//int main(){
//	for(int i = 1; i<= 5; i++){
//		printf("%d\n",i);             
//		printf("%d\n",i);
//	}
//}

//
//#include<stdio.h>
//int main(){
//	for(int i = 1; i<= 5; i++){
//		printf("%d\n",i);
//		continue;  //bo qua
//		printf("%d\n",i);
//	}
//}



//#include<stdio.h>
//int main(){
//	for(int i = 1; i<= 5; i++){
//		printf("%d\n",i);
//		break;      //thoat ra vong lap
//		printf("%d\n",i);
//	}
//}



//#include<stdio.h>
//int main(){
//	for(int i = 1; i<= 100; i++){
//		if(i > 50) break;  ////1 toi 50
//		printf("%d\n",i);
//	}
//}


//#include<stdio.h>
//int main(){
//	for(int i = 1; i<= 100; i++){
//		if (i%2==0) continue;    //1chia2 so le
//		if(i > 50) break;
//		printf("%d\n",i);
//	}
//}




//#include <stdio.h>
//int main(){
//	for (int n = 1; n<10; n++){
//		for (int i = 1; i<10; i++){
//			if (n%2==0) continue;
//			if(i>5) break;
//			printf("%d ",i);
//		}
//		printf("---\n");
//	}
//}




//#include <stdio.h>
//int main(){
//	for (int n = 1; n<10; n++){
//		for (int i = 1; i<10; i++){
//			if(n%2==0) continue;
//			if(n>5) break;
//			printf("%d ",i);
//		}
//		printf("---\n");
//	}
//}

//#include <stdio.h>
//int main(){
//	for (int i = 1; i<= 10000; i++){
//		printf("%d\n",i);    //boi chung nho nhat
//		if(i%16==0 && i%50==0)  break;		
//	}}



//#include <stdio.h>
//int main(){
//	for (int i = 1; i<= 10000; i++){
//		printf("%d\n",i);     //boi chung nho nhat
//		if(i%8==0 && i%18==0 && i%12==0 && i%27==0)  break;		
//	}}





//#include <stdio.h>
//int main(){
//	for (int i = 1; i<= 102668; i++){
//		printf("%d\n",i);
//		if(i%1==0 && i%10==0 && i%26==0 && i%68==0)  break;		
//	}}






//#include <stdio.h>
//int main(){
//	for (int i = 675; i> 1; i--){		
//		printf("%d\n",i);      //uoc chung lon nhat
//         if(675%i==0 && 216%i==0 )  break;
//    
//	}}


































//#include <stdio.h>
//
//int main() {
//    int num, total = 0;
//    
//    while (1) {
//        printf("Nhap so nguyen duong (nhap 0 de dung): ");
//        scanf("%d", &num);
//        
//        if (num == 0) {
//            break;
//        }
//        
//        if (num % 2 == 0) {
//            total += num;
//        }
//    }
//    
//    printf("Tong cac so chan trong day la: %d\n", total);
//    
//    return 0;
//}





//#include<stdio.h>
//int main(){
//	int number, sum = 0;
//	printf("nhap vao day so nguyen duong (ket thuc bang so 0):\n");
//	while(1){
//		printf("nhap so nguyen duong: ");
//		scanf("%d", &number);
//		if (number == 0){
//			break;
//		}
//		if (number % 2 ==0){
//			sum +=number;
//		}
//		
//	}
//	printf("tong cua cac so chan trong day la: %d\n", sum);
//}


#include<stdio.h>
int main()




































