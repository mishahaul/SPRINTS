//#include <stdio.h>
int mx_factorial_iter(int n) {
    long res = 1;
    if (n > 0) {
        for (int i = 1; i < n+1; i++) {
            res *= i;
        }
        if (res < 2147483647) {   
            return res;
        }
    }
    return 0;
}
// int main() {
//     printf("%d", mx_factorial_iter(13));
// }
