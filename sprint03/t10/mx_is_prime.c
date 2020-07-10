#include <stdbool.h>
//#include <stdio.h>

bool mx_is_prime(int num) {
	if (num <= 1)
		return false;
	for (int d=2; d*d <= num; d++) {
		if (num %d == 0){
			return false;
		}
	}
	return true;
}

/*int main() {
	
	printf("%d", mx_is_prime(37));
}
*/
