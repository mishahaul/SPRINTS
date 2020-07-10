//#include <stdio.h>

int mx_tolower(int c) {
	if (c>=65 && c<=90) {
		c = c+32;
 	}
	return c;
}
/*int main() {
	mx_tolower('Z');
	mx_tolower('z');
	printf("%c %c", mx_tolower('Z'), mx_tolower('z'));
}
*/
