#include <stdio.h>

int main(){
	//Khai bao va khoi tao hai bien chieu dai va chieu rong cua hinh chu nhat
	int length = 8; // Chieu dai hinh chu nhat
	int width =5; // Chieu rong hinh chu nhat
	
	//Tinh chu vi va dien tich hinh chu nhat
	int perimeter = 2 * (length + width); // Chu vi = 2 * (chieu dai + chieu rong)
	int area = length * width;            // Dien tich = chieu dai * chieu rong
	
	// In ket qua ra man hinh
	printf("Chieu dai cua hinh chu nhat: %d met\n", length);
	printf("Chieu rong cua hinh chu nhat: %d met\n", width);
	printf("Chu vi cua hinh chu nhat: %d met\n", perimeter);
	printf("Dien tich cua hinh chu nhat: %d met vuong\n", area);
}
