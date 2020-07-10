#include <stdio.h>
int mx_factorial_iter(int n) {
   // long res;
    if (n >= 0) {
        if(n == 0 || n == 1) {
            return 1;
        }
    //    // res = n * mx_factorial_iter(n-1);
    //     if (n * mx_factorial_iter(n-1) < 2147483647) {    
            return n * mx_factorial_iter(n-1);     
        
    }     
    return 0;
}

int main() {
    printf("%d", mx_factorial_iter(15));
}

