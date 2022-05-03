#include <iostream>
using namespace std;
int map[2][200][200];
int n, m;
void swap(int &x, int &y) {
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> map[1][i][j];
	int cnt = 0;
	char c = 0;
	while (c >= 'A' || c <= 'D')
		c = getchar();
	for (; c >= 'A' && c <= 'D' ; c = getchar()) {
		cnt++;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				switch (c) {
					case 'A':
						map[(cnt + 1) & 1][j][n - i + 1] = map[cnt & 1][i][j];
						break;
					case 'B':
						map[(cnt + 1) & 1][m - j + 1][i] = map[cnt & 1][i][j];
						break;
					case 'C':
						map[(cnt + 1) & 1][i][m - j + 1] = map[cnt & 1][i][j];
						break;
					case 'D':
						map[(cnt + 1) & 1][n - i + 1][j] = map[cnt & 1][i][j];
						break;
				}


		if (c == 'A' || c == 'B')
			swap(n, m);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cout << map[(cnt + 1) & 1][i][j] << " ";
		cout << endl;
	}
}

