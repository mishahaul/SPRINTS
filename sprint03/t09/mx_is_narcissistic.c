#include <stdbool.h>
//#include <stdio.h>

double mx_pow(double n, unsigned int pow);
bool  mx_is_narcissistic(int num) {
	int len = 0;
	int temp1 = num;
	while (temp1 != 0) {
		temp1 /= 10;
		len++;
	}
	int check = 0;
	int temp2 = num;
	while (temp2 != 0){
		check += mx_pow(temp2%10, len);
		temp2 /= 10;
	}
	if (num == check){
		return true;
	}
	else
		return false;	
}

/*int main() {
	int num = 153;
	mx_is_narcissistic(num);
	printf("%d", mx_is_narcissistic(num));
}
*/
