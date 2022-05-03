#include<stdio.h>
int n, m, i, j;
int sum(char d[], int len);
struct node {
	char ad[50];
	int num;
} a[101], temp;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%s", a[i].ad);
		a[i].num = sum(a[i].ad, n);
	}

	for (i = 0; i < m - 1; i++) {
		for (j = i; j >= 0; j--) {
			if (a[j].num > a[j + 1].num) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < m; i++) {
		puts(a[i].ad);
	}
	return 0;
}
int sum(char d[], int len) {
	int i, j, all = 0;
	for (i = 0; i < len - 1; i++) {
		for (j = i + 1; j < len; j++) {
			if (d[i] > d[j])
				all++;
		}
	}
	return all;
}
