#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int max(int* );
int min(int* );
int main() {
	int input;
	int* p;
	scanf("%d", &input);
	p = (int*)malloc(sizeof(int));
	for (int i = 0;i < input;i++) {
		scanf("%d",  &p[i]);
	}
	printf("Number : ");
	for (int i = 0;i < input;i++) {
		printf(" %d ", p[i]);
	}
	max(p);
	printf("\nMAX : %d\nMIN : %d", max(p), min(p));
	return 0;
}
int max(int *p) {
	int max=0,min=2000;
	for (int i = 0;i < sizeof(*p);i++) {
		if (p[i] > max) {
			max = p[i];
		}
	}
	return max;

}
int min(int* p) {
	int max = 0, min = 200000;
	for (int i = 0;i < sizeof(*p);i++) {
		
		if (p[i] < min) {
			min = p[i];
		}
	}
	return min;
}