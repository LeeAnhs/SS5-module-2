#include <stdio.h>

int main () {
	//Khai bao bien
	int number,i;
	//Nhap du lieu ng dung va kiem tra hop le hay khong
		printf("Nhap so tu 1 den 10: ");
		scanf("%d", &number);
		
		if (number < 1 || number > 10) {
			printf("Du lieu nhap sai vui long nhap lai.");
		}
	
	//In ra bang cuu chuong
	for(i=1;i<=10;i++){
	printf("%d x %d= %d\n",number,i,number*i);
	}
	return 0;
}
