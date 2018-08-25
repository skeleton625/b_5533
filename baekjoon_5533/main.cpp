#include <iostream>
#include <string.h>
using namespace std;

int t, **n, *p, *z, c;
bool tmp[101];
int main() {
	cin >> t;
	n = new int*[t];
	p = new int[t];
	z = new int[t];
	memset(p, 0, sizeof(int)*t);
	for (int i = 0; i < t; i++) n[i] = new int[3];
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 3; j++) cin >> n[i][j];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < t; j++) {
			if (!tmp[n[j][i]]) tmp[n[j][i]] = true;
			else z[c++] = n[j][i];
		}
		for (int j = 0; j < t; j++) {
			for (int k = 0; k <= c; k++){
				tmp[n[j][i]] = false;
				if (z[k] == n[j][i]) {
					n[j][i] = 0;
					break;
				}
			}
			p[j] += n[j][i];
		}
		c = 0;
	}
	for (int i = 0; i < t; i++) cout << p[i] << endl;
}