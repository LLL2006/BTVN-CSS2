#include <stdio.h>

int main() {
	//Khai b�o v� khoi tao hai bi�n s� nguy�n
	int num1 = 15; // s� nguy�n thu nhat
	int num2 = 25; // s� nguy�n thu hai
	
	// T�nh t�ng, hieu, tich va thuong
	int sum = num1 + num2;        // t�ng
	int diff = num1 - num2;      // Hieu
    int product = num1 * num2;   // T�ch
    float quotient = (float)num1 / num2; // Thuong
	
	// in k�t qua ra man hinh
	printf("T�ng cua %d v� %d l�: %d\n", num1, num2, sum);
	printf("Hieu cua %d v� %d l�: %d\n", num1, num2, diff);
    printf("T�ch cua %d v� %d l�: %d\n", num1, num2, product);
    printf("Thuong cua %d v� %d l�: %.2f\n", num1, num2, quotient);

	return 0;	
}
