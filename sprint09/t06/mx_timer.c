#include <time.h>
// #include <stdio.h>

double mx_timer(void(*f)()) {
    clock_t start = clock();
    f();  
    clock_t stop = clock();
    return (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
}

// void pe4at() {          
//     printf("%d   :pe4at\nvremya:  ",123456);  
// }
// int main() {
//     void(*test)() = pe4at;      
//     printf("%f",mx_timer(test));  
// }

