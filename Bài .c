#include <stdio.h>

int main() //khai bao bien
    int num1, num2, max, bcnn;

    // Nhap vao du lieu ng ding
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // Kiem tra du lieu nhap vao hop le hay khong
    if (num1<= 0 || num2<= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1; 
    }

    // tim bcnn
    max = (a > b) ? a : b; 
    while (1) {
        if (max % a == 0 && max % b == 0) {
            bcnn = max;
            break;
        }
        max++;
    }

    
    printf("bcnn cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}
