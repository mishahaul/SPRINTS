// #include <unistd.h>
void mx_foreach(const int *arr, int size, void(*f)(int)){
    for (int i = 0; i<size; i++){
        f(arr[i]);
    }
}
void mx_printchar(char c){
    write(1, &c, 1);
}
void mx_printint(int n) {
	if (n<0) {
		n= -n;
		mx_printchar('-');
	}
	if (n/10 != 0)
		mx_printint(n/10);
	mx_printchar(n%10+48);
}
void(*f)(int) = mx_printint;

// int main(){
  
//    //  void mx_printint(int n);
//     int arr[]= {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, mx_printint); //prints “12345” to the standart output
// }
