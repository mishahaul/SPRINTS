#include <stdio.h>
#include <time.h>

int mx_sqrt(int x) {
	if (x < 0) {
		return 0;
	}
	for(int sqrtx = 1; sqrtx <= x; sqrtx++) {
		if (sqrtx*sqrtx == x) {
			return sqrtx;
		}
	}
	return 0;
}

int main() {
	time_t start = time(NULL);
//	printf("%d\n", mx_sqrt(8));
//	time_t finish = time(NULL) - start;
	printf("%d", start);
}



