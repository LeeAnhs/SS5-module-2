#include <stdio.h>

int main () {
	//khai bao bien
	int number,list;
	//In ra bang cuu chuong 
	for(number=1;number<=9;number++) {
		printf("Bang cuu chuong so %d: \n", number);
		for (list=1;list<=10;list++) {
		printf("%d x %d = %d\n",number,list,number * list );
	}
	}
	return 0;
}  
    
