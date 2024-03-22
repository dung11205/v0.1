#include<stdio.h>
  int main()
{
float luong=0, sothue=0;
printf("nhap so tien luong: ");
scanf("%f",&luong);
if (luong>=15)
{
  sothue=luong*0.3;
  printf("\n thuesuat=30");
  
}
else if (luong>=7)
{
  sothue=luong*0.2;
  printf("\n thuesuat=20");
}
else
{
sothue=luong*0.1;
printf("\n thuesuat=10");
}
}






