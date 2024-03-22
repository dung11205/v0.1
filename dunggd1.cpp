#include <stdio.h>

int main() {
	printf("nguyen thi thuy hang \n");
    int a, b;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    int tong, hieu, tich, thuong, chia_du, chia_du_chia_nguyen, mu;

    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;
    chia_du = a % b;
    chia_du_chia_nguyen = (a % b) / b;
    mu = a^b;

    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong nguyen: %d\n", thuong);
    printf("Chia du: %d\n", chia_du);
    printf("Chia du chia nguyen: %d\n", chia_du_chia_nguyen);
    printf("mu:%d\n", mu);


}
