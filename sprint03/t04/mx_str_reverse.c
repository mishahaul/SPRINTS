//#include <stdio.h>

int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
	int n = mx_strlen(s);
	int i = 0;
	while (i <= n-i) {
		mx_swap_char(&s[i], &s[n-1-i]);
		i++;
	}
}

/*int main() {
	char str[] = "game over for you";
	mx_str_reverse(str);
	printf("%s", str);
}
*/
