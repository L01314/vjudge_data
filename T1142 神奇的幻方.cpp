#include<stdio.h>
int a[10000][10000]; 
int main() {
	int n;
	scanf("%d", &n);
	 int x = 1, y = n;
	for (int i = 1; i <=(2 * n - 1) * (2 * n - 1); i++) {
		if (i == 1)  {
			a[x][y] = i;
		} else {
			x -= 1;
			y += 1;
			do {
				if (a[x][y] != 0 || (x == 0 && y == 2 * n)) {
					x = x+2;
					y--;
				} else {
					if (x == 0) x = 2 * n - 1;
					if (y == 2 * n) y = 1;
				}
			} 
			while (a[x][y] != 0);
			a[x][y] = i;
		}
	}

	for (int i = 1; i <= 2 * n - 1; i++) {
		for (int j = 1; j <= 2 * n - 1; j++) {
			printf("%d ", a[i][j]);
		}
	
		printf("\n");
	}
	return 0;
}
