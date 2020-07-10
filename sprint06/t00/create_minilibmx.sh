clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c *.c 
ar -cvq minilibmx.a *.o
ranlib minilibmx.a 
rm -f *.o


