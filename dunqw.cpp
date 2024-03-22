//#include<stdio.h>
//int main(){
//    for(float i=1.;i<8;i=i+1){
//        for(int n=1;n<=i;n=n+1){
//            printf("*");
//        }
//        printf("\n");
//    }     
//}

//#include <stdio.h>
//
//int main() {
//    int i;
//
//    for (i = 0; i < 7; i++) {
//        printf("******\n");
//    }
//
//    
//}


//#include<stdio.h>
//int main() {
//    for(float i=1.;i<2;i=i+1){
//        for(int n=1;n<=i;n=n+1){
//            printf("1\n");
//            printf("2 3\n");
//            printf("4 5 6\n");
//            printf("7 8 9 10\n");
//            printf("11 12 13 14 15");
//        }
//        printf("\n");
//    }    
//}



#include <stdio.h>
int main() 
{
int count=1;
    for (int i=1;i<10; i=i+1) {
        for (int n = 1; n <= i;n=n+1) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

}

//#include <stdio.h>
//int main() {
//    printf("===========\n");
//	float tong = 0;
//	int count = 1;
//	for(float n=2;n<31;n=n+2){     
//		tong = tong+1/n; 
//		printf("Phan tu so %d la %f\n",
//				count,1/n);
//		count ++;      
//	}
//	printf("%f\n",tong);
//}
