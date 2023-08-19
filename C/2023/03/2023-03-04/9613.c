#include <stdio.h>

int t;
long long num[101];

long long gcd(int x, int y)
{
	while (y != 0) {
		long long r = x % y;  
		x = y;
		y = r;
	}
	return x;
}


int main() {
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++) {
            scanf("%lld", &num[i]);
        }

        long long sum = 0;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                sum += gcd(i, j);
            }
        }
        printf("%lld\n", sum);

    }

}
