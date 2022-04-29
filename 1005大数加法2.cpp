#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <cstdlib>
#define rep(i,o,u) for(int i = o;i < u; i++)
typedef long long ll;
using namespace std;
char a[10010], b[10010];
char c[10010];
int main(){
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(c));
	memset(c, 0, sizeof(c));
	cin >> a >> b;
	if (a[0] != '-'&&b[0] != '-'){
		int len1 = strlen(a);
		int len2 = strlen(b); 
		if (len1 < len2) swap(a, b), swap(len1, len2);
		reverse(a,a+len1);
		reverse(b,b+len2);
		rep(i, 0, len2){
			c[i] = c[i] + a[i] + b[i] - '0';
			if (c[i] > '9') c[i + 1]++, c[i] -= 10;
		}
		rep(i, len2, len1){
			c[i] = c[i] + a[i];
			if (c[i] > '9') c[i + 1]++, c[i] -= 10;
		}
		if (c[len1] != 0) c[len1] += '0', cout << c[len1];
		for (int i = len1-1; i >= 0; i--){
			cout << c[i];
		}
		cout << endl;
	}else if (a[0] == '-'&&b[0] == '-'){
		int len1 = strlen(a);
		int len2 = strlen(b);
		if (len1 < len2) swap(a, b), swap(len1, len2);
		reverse(a + 1, a + len1);
		reverse(b + 1, b + len2);
		rep(i, 1, len2){
			c[i] = c[i] + a[i] + b[i] - '0';
			if (c[i] > '9') c[i + 1]++, c[i] -= 10;
		}
		rep(i, len2, len1){
			c[i] = c[i] + a[i];
			if (c[i] > '9') c[i + 1]++, c[i] -= 10;
		}
		cout << "-";
		if (c[len1] != 0) c[len1] += '0', cout << c[len1];
		for (int i = len1 - 1; i > 0; i--){
			cout << c[i];
		}
		cout << endl;
	}
	else{
		if (a[0] == '-') swap(a, b);
		int len1 = strlen(a); int len2 = strlen(b);
		if (len1 > len2 - 1){
			reverse(a, a + len1); reverse(b + 1, b + len2);
			rep(i, 0, len2-1){
				c[i] = c[i] + a[i] - b[i + 1] + '0';
				if (c[i] < '0') c[i] += 10, c[i + 1]--;
			}
			rep(i, len2-1, len1){
				c[i] = c[i] + a[i];
				if (c[i] < '0') c[i] += 10, c[i + 1]--;
			}
			int flag = 0;
			for (int i = len1 - 1; i >= 0; i--){
				if (c[i] != '0') flag = 1;
				if (flag) cout << c[i];
			}
			cout << endl;
		}else if (len1 < len2 - 1){
			reverse(a, a + len1); reverse(b + 1, b + len2);
			rep(i, 0, len1){
				c[i] = c[i] + b[i + 1]- a[i] + '0';
				if (c[i] < '0') c[i] += 10, c[i + 1]--;
			}
			rep(i, len1, len2-1){
				c[i] = c[i] + b[i+1];
				if (c[i] < '0') { c[i] += 10;c[i + 1]--; }
			}
			int flag = 0;
			cout << '-';
			for (int i = len2 - 2; i >= 0; i--){
				if (c[i] != '0') flag = 1;
				if (flag) cout << c[i];
			}
			cout << endl;
		}else{
			int flag = strcmp(a, b + 1);
			if (flag == 0)
				cout << 0 << endl;
			else if (flag > 0){
				reverse(a, a + len1); reverse(b + 1, b + len2);
				rep(i, 0, len2 - 1){
					c[i] = c[i] + a[i] - b[i + 1] + '0';
					if (c[i] < '0') c[i] += 10, c[i + 1]--;
				}
				rep(i, len2 - 1, len1){
					c[i] = c[i] + a[i];
					if (c[i] < '0') c[i] += 10, c[i + 1]--;
				}
				int flag = 0;
				for (int i = len1 - 1; i >= 0; i--){
					if (c[i] != '0') flag = 1;
					if (flag) cout << c[i];
				}
				cout << endl;
			}else{
				reverse(a, a + len1); reverse(b + 1, b + len2);
				rep(i, 0, len1){
					c[i] = c[i] + b[i + 1] - a[i] + '0';
					if (c[i] < '0') c[i] += 10, c[i + 1]--;
				}
				rep(i, len1, len2 - 1){
					c[i] = c[i] + b[i + 1];
					if (c[i] < '0') { c[i] += 10; c[i + 1]--; }
				}
				int flag = 0;
				cout << '-';
				for (int i = len2 - 2; i >= 0; i--){
					if (c[i] != '0') flag = 1;
					if (flag) cout << c[i];
				}
				cout << endl;
			}
		}
	}
	return 0;
}
