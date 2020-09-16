#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int max(int* ,int );
int min(int* ,int );
int main() {
	int input;
	int* p;
	scanf("%d", &input);
	p = (int*)malloc(sizeof(int));
	for (int i = 0;i < input;i++) {
		scanf("%d",  &p[i]);
	}
	printf("P : %d ",input);

	printf("Number : ");
	for (int i = 0;i < input;i++) {
		printf(" %d ", p[i]);
	}
	printf("\nMAX : %d\nMIN : %d", max(p,input), min(p, input));
	return 0;
}
int max(int *p, int input) {
	int max=0;
	for (int i = 0;i < input;i++) {
		if (p[i] > max) {
			max = p[i];
		}
	}
	return max;
}
int min(int* p,int input) {
	int min = 200000;
	for (int i = 0;i < input;i++) {
		if (p[i] < min) {
			min = p[i];
		}
	}
	return min;
}