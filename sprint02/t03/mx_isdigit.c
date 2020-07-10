#include <stdbool.h>
//#include <stdio.h>

bool mx_isdigit(int c) {
	if (c>=48 && c<=57)
		return true;
	else
		return false;
}

/*int main() {
	
	mx_isdigit('A');
	printf("%d", mx_isdigit('A'));
}
*/
