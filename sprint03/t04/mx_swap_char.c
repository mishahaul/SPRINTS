//#include <stdio.h>

void mx_swap_char(char *s1, char *s2) {
	char buff_s1 = *s1;
	*s1 = *s2;
	*s2 = buff_s1;
}

/*int main() {
	char str[] = "CLONE";
	mx_swap_char(&str[0], &str[3]);
	printf("%s", str);
}
*/
