#include <stdbool.h>
//#include <stdio.h>

bool mx_islower(int c) {
	if (c>=97 && c<=122)
		return true;
	else
		return false;
}

/*int main() {
	mx_islower('Z');
	printf("%d", mx_islower('Z'));
}
*/

