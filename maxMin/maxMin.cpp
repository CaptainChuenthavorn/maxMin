#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int max(int* ,int );
int min(int* ,int );
int main() {
	int input;
	int* p;
	printf("How many numbers you want to compare ? : ");
	scanf("%d", &input);
	p = (int*)malloc(sizeof(int));
	printf("What are they ? : ");
	for (int i = 0;i < input;i++) {
		scanf("%d",  &p[i]);
	}
	printf("\nMAX number is : %d\nMIN number is : %d", max(p,input), min(p, input));
	return 0;
}
int max(int *p, int input) {
	int max= -214748364;
	for (int i = 0;i < input;i++) {
		if (p[i] > max) {
			max = p[i];
		}
	}
	return max;
}
int min(int* p,int input) {
	int min = 214748364;
	for (int i = 0;i < input;i++) {
		if (p[i] < min) {
			min = p[i];
		}
	}
	return min;
}