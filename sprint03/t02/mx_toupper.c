//#include <stdio.h>

int mx_toupper(int c) {
	if (c>=97 && c<=122) {
		c = c-32;
	}
	return c;
}

/*int main() {
	mx_toupper('Z');
	mx_toupper('z');
	printf("%c %c", mx_toupper('Z'), mx_toupper('z'));
}
*/
