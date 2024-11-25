#include <stdio.h>

int main () {
	//Khai bao bien
	int number,sum=0;
	//Nhap vao du lieu nguoi dung
	printf("Nhap mot so nguyen duong: ");
	scanf ("%d", &number);
	//tinh tong sum
	int i;
	for (i=1  ; i<=number ; i++) {
		sum= sum+i ;
	}
	printf("Tong cac so tu 1 den %d la %d ",number, sum);
	
	return 0;
}
