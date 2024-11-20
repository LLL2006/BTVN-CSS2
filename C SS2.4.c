#include <stdio.h>

int main(){
	//Khai bao va khoi tao bien luu canh cua hinh vuong
	int side = 5; // canh cua hinh vuong (don vi: met)
	
	//Tinh chu vi va dien tich cua hinh vuong
	int perimeter = 4 * side;    // Chu vi = 4 * canh
	int area = side * side;      // Dien tich = canh * canh
	
	//In ket qua ra man hinh
	printf("Canh cua hinh vuong: %d met\n", side);
	printf("Chu vi cua hinh vuong: %d met\n", perimeter);
	printf("Dien tich cua hinh vuong: %d met vuong\n", area);
	
	return 0;
}
