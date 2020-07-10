//#include <stdio.h>

void mx_printchar(char c);
void mx_str_separate(const char *str, char delim) {
	int i = 0;
	while (str[i]) {
		if (str[i] == delim){
			if (str[i+1] == delim);
			else 
				mx_printchar('\n');
		}
		else			
			mx_printchar(str[i]);
	i++;
	}
	mx_printchar('\n');

}

/*int main() {
	char s[] = "game over";
	char separ = 'm';
	mx_str_separate(s, separ);
}
*/
