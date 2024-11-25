#include <stdio.h>

int main() {
    float a, b;
    int select;

    //Nhap vao du lieu nguoi dung
    printf("So thu nhat: ");
    scanf("%f", &a);
    printf("So thu hai: ");
    scanf("%f", &b);

    do {
        
        printf("\nCACULATOR\n");
        printf("1.TONG\n");
        printf("2.HIEU \n");
        printf("3.TICH\n");
        printf("4.THUONG\n");
        printf("5.EXIT\n");
        printf("Select from 1 to 5: ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                printf("Tong cua %.2f va %.2f la: %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Hieu cua %.2f va %.2f la: %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Tich cua %.2f va %.2f la: %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Thuong cua %.2f va %.2f la: %.2f\n", a, b, a / b);
                } else {
                    printf("Khong the chia cho 0\n");
                }
                break;
            case 5:
                printf("EXIT.\n");
                break;
            default:
                printf("Lua chon cua ban kh dung.\n");
        }
    } while (select != 5);

    return 0;
}
