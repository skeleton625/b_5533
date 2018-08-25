#include <cstdio>

int p[200], n[200][3], c, t;
bool f;
int main() {
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
		scanf_s("%d %d %d", &n[i][0], &n[i][1], &n[i][2]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < t; j++) {
			for (int k = 0; k < t; k++) {
				if (j == k) continue;
				else if (n[j][i] == n[k][i]) {
					f = true;
					break;
				}
			}
			if(!f) p[j] += n[j][i];
			f = false;
		}
		c = 0;
	}
	for (int i = 0; i < t; i++) printf("%d\n", p[i]);
	return 0;
}