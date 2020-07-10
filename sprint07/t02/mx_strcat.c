//#include <stdio.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2) {
	char *stroka = s1;
	while (*s1 != '\0') {
		s1++;
	}

	while (*s2 != '\0') {
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return stroka;
	
}

/*int main() {
	char S1[] = "Unit";
	const char S2[] = "code";
	printf("%s", mx_strcat(S1, S2)); 
}*/

