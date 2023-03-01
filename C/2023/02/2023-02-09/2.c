#include <stdio.h>

int n, k, c, v[1001];


int main() {
	scanf("%d %d", &n, &k);

	for (int i = 2; i <= n; i++) {
		for (int j = 1; i*j <= n; j++) {
			if (!v[i*j]) c++;
			v[i*j] = 1;
			if (c == k) return !printf("%d\n", i*j);
		}
	}
    return 0;
}
