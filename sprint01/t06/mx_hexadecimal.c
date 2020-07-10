void mx_printchar(char c);
void mx_hexadecimal(void) {
	for(int i = 48; i < 71; i++) {
	mx_printchar(i);
		if (i==57){
		i=64;
		}
	}
	mx_printchar('\n');
}

