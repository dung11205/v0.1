//#include<stdio.h>
//int main(){
//	for(int n=5;n<12;n=n+1){
//		printf("%d\n",n);
//		
//	}
//}




//#include<stdio.h>
//int main(){
//	for(int n=5;n<12;n=n+3){
//		printf("%d\n",n);
//		
//	}
//}




//#include<stdio.h>
//int main(){
//	for(int n=1;n<12;n=n+1){
//		printf("%d\n",n);
//		
//	}
//}



//#include<stdio.h>
//int main(){
//	for(int n=5;n<12;n=n+3){
//		n=n-1;
//		printf("%d\n",n);
//		
//	}
//}


//#include<stdio.h>
//int main(){
//	for(int n=1;n<60;n=n+3){
//		printf("%d\n",n);
//		
//	}
//}

//#include <stdio.h>

//int main() {
//    int i, n = 20;
//    int num = 1;
//
//    for (i = 0; i < n; i++) {
//        printf("%d ", num * num);
//        num++;
//    }
//
//    return 0;
//


//#include <stdio.h>
//int main() {
//   for(int n=5;n<21;n=n+2){
//       
//printf("%d\n",n*n);       
//   }
//}


//#include <stdio.h>
//int main() {
//   for(int n=6;n<21;n=n+1){
//       
//printf("%d\n",n*n);       
//   }
//}

//#include <stdio.h>
//int main() {
//   for(int n=2;n<45;n=n+1){
//       
//printf("%d\n",n*n+3);       
//   }
//}


//#include <stdio.h>
//int main() {
//	int tong = 0;
//	for(int n=1;n<21;n=n+1){     
//		tong = tong + n;       
//	}
//	printf("%d\n",tong);
//}

//#include <stdio.h>
//int main() {
//	int tong = 1+2+3+4;
//	for(int n=5;n<21;n=n+1){     
//		tong = tong + n;       
//	}
//	printf("%d\n",tong);
//}


//#include <stdio.h>
//int main() {
//	int tong = 0;
//	for(int n=1;n<21;n=n+1){     
//		tong = tong + n*n;       
//	}
//	printf("%d\n",tong);
//}

//#include <stdio.h>
//int main() {
//    float n=0;
//        for(float i=1.;i<31;i=i+1){
//            n=n+1/i;
//        }
//        printf("%f",n);
//}

//#include <stdio.h>
//
//int main() {
//    float n=0;
//    int count = 1;
//        for(float i=2;i<61;i=i+2){
//            n=n+1/i;
//        }
//        printf("%f",n);
//}

//#include <stdio.h>
//int main() {
//    printf("===========\n");
//	float tong = 0;
//	int count = 1;
//	for(float n=2;n<61;n=n+2){     
//		tong = tong+1/n; 
//		printf("Phan tu so %d la %f\n",
//				count,1/n);
//		count ++;      
//	}
//	printf("%f\n",tong);
//}


//#include <stdio.h>
//int main() {
//    float S=0;
//    for(float n=1.;n<=30;n++){
//    	S = S + 1/(n*(n+1));
//    }
//    printf("%f",S);
//}

//#include <stdio.h>
//int main() {
//    int muaxuan;
//    int party;
//    for(muaxuan =18; muaxuan <45; muaxuan++){
//    	for(party=1; party<8; party++){
//    		printf("Mua Xuan thu %d,",muaxuan);
//    		printf(" to chuc party lan %d\n",party);
//		}
//    }
//}

//#include<stdio.h>
//int main(){
//    for(float i=1.;i<8;i=i+1){
//        for(int n=1;n<=i;n=n+1){
//            printf("*");
//        }
//        printf("\n");
//    }     
//}



//#include<stdio.h>
//int main(){
//	for(int k=1; k<10; k++){//k=k+1
//	printf("%d \n" ,k);
//	}
//	printf("-------------------\n");
//	int k =1;
//	while(k<=10){
//		printf("%d \n" ,k);
//		k++;
//	}
//}



//#include <stdio.h>
//int main() {
//    printf("--------------\n");
//	float tong = 0;
//	int count = 1;
//	for(float n=1;n<31;n=n+1){     
//		tong = tong+n/(n+1); 
//		printf("Phan tu so %d la %f\n",
//				count,1/n);
//		count ++;
//	}
//	printf("%f\n",tong);
//}


//#include <stdio.h>
//int main() {
//    printf("--------------\n");
//	float tong = 0;
//	int count = 1;
//	for(float n=1;n<31;n=n+1){     
//		tong = tong+n/(n+1); 
//		printf("Phan tu so %d la %f\n",
//				count,1/n);
//		count ++;
//	}
//	printf("%f\n",tong);
//	float n=1
//	while( n<31 ){
//		tong = tong+n/(n+1); 
//		printf("Phan tu so %d la %f\n",
//				count,1/n);
//		n=n+1
//	}
//	printf("%f\n",tong);
//}


//#include <stdio.h>
//int main() {
//	float tong = 0;
//	int count = 1;
//	for(float n=1;n<31;n=n+1){     
//		tong = tong+n/(n+1); 
//		printf("Phan tu so %d:%f\n", count,1/n);
//		count ++;}
//	printf("%f\n",tong);
//	tong = 0; count = 1;
//	printf("===========\n");
//	float n=1;
//	while( n<31 ){
//		tong = tong+n/(n+1); 
//		printf("Phan tu so %d:%f\n", count,1/n);
//		count ++;
//		n=n+1;
//	}
//	printf("%f\n",tong);
//}



 #include <math.h>
int main() {
	float S = sqrt(10);
	for(int n=1;n<=10000;n++){
		S = sqrt(2+S);
	}
	printf("%f",S);
}










































