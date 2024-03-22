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
