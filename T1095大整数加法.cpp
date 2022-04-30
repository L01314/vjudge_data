#include<stdio.h>
#include<string.h>
int main() {
	char c1[210];
	char c2[212];
	int i1[210];
	int i2[210];
	scanf("%s", c1);
	scanf("%s", c2);
	memset(i1, 0, sizeof(i1));
	memset(i2, 0, sizeof(i2));

	int i, j = 0;
	for (i = strlen(c1) - 1; i >= 0; i--) {
		i1[j] = c1[i] - '0';
		j++;
	}
	j = 0;
	for (i = strlen(c2) - 1; i >= 0; i--) {
		i2[j] = c2[i] - '0';
		j++;
	}
	int k = strlen(c1);
	if (strlen(c2) > strlen(c1)) k = strlen(c2);
	for ( i = 0; i < k; i++) {
		if (i1[i] + i2[i] > 9) {
			i1[i] = i1[i] + i2[i] - 10;
			i1[i + 1] += 1; //TODO
		} else {
			i1[i] = i1[i] + i2[i];
		}

	}
	while (i1[k] == 0 && k >= 1) {
		k--;

	}
	for ( i = k; i >= 0; i--) {
		printf("%d", i1[i]);
	}
}
