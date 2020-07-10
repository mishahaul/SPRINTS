void mx_printchar (char c);
/*void mx_printint(int n) {
	if (n<0) {
		n= -n;
		mx_printchar('-');
	}
	if (n/10 != 0)
		mx_printint(n/10);
	mx_printchar(n%10+48);
}
int main() {
	mx_printint(2147483647);
}
*/

#include <stdio.h>
void mx_printint(int n) {
	int counter = 0;
	while(n/10 == 0) {
	printf("%d", &counter);
	counter++;
	}	
	

}
int main () {

	mx_printint(720);

//	printf("%d", counter);
}
