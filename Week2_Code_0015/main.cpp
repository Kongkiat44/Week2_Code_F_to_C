#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float F, C;
	printf("Fahrenheit : ");
	scanf("%f", &F);
	if (F >= 32) {
		C = (5 * (F - 32)) / 9;
		printf("Celsius : %.2f\n", C);
	}
	else printf("Too cold to live\n");
	return 0;
}