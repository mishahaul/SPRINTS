#include <stdio.h>

int mx_sum_digits(int num) {
	int sum = 0;
	while(num != 0){
		sum = sum + num%10;
		num /= 10;
	}
	if (sum<0) {
	sum *=-1;
	}
	return sum;
}

int main() {
	printf("%d", mx_sum_digits(-359));

}

