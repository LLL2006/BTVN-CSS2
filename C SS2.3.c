#include <stdio.h>

int main() {
	//Khai báo và khoi tao hai biên sô nguyên
	int num1 = 15; // sô nguyên thu nhat
	int num2 = 25; // sô nguyên thu hai
	
	// Tính tông, hieu, tich va thuong
	int sum = num1 + num2;        // tông
	int diff = num1 - num2;      // Hieu
    int product = num1 * num2;   // Tích
    float quotient = (float)num1 / num2; // Thuong
	
	// in kêt qua ra man hinh
	printf("Tông cua %d và %d là: %d\n", num1, num2, sum);
	printf("Hieu cua %d và %d là: %d\n", num1, num2, diff);
    printf("Tích cua %d và %d là: %d\n", num1, num2, product);
    printf("Thuong cua %d và %d là: %.2f\n", num1, num2, quotient);

	return 0;	
}
