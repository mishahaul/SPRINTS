#include <stdbool.h>
//#include <stdio.h>
bool mx_isspace(char c) {
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return true;
	else
		return false;
}

/*int main() {
	mx_isspace(' ');
	printf("%d", mx_isspace(' '));
}
*/

