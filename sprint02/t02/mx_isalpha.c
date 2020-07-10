#include <stdbool.h>
//#include <stdio.h>

bool mx_isalpha(int c) {
	if ((c>64 && c<91) ||(c>96 && c<124))
		return true;
		
	else 
		return false;
	
}
/*int main() {
	mx_isalpha('a');
	printf("%d", mx_isalpha('a'));
}
*/
