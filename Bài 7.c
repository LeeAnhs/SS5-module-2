#include <stdio.h>

int main(){
	//Khai bao bien
	int temp, a, b;
	//Nhap 2 so bat ky
	printf("Nhap so thu nhat:");
	scanf("%d", &a);
	printf("Nhap so thu hai");
	scanf("%d", &b);
	//Xu ly neu du lieu nhap vao khong hop le
	while( a == 0 && b == 0){
		printf("vui long nhap lai: ");
		scanf("%d", &a);
		scanf("%d", &b);
	}
	//Tim uoc chung lon nhat
	while(b != 0){
		temp=b;
		b=a%b;
		a=temp;
	}
	//In ra man hinh
	printf("uoc chung lon nhat la: %d", a);
	//ket thuc chuong trinh
	return 0;
}

