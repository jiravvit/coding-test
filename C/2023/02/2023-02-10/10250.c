#include <stdio.h>

int t;
int h, w, n;
int f, r;

int main() {
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) { 
        scanf("%d %d %d", &h, &w, &n);
        
        f = (n % h == 0) ? h : n % h;	
		r = n / h + 1;		
        if (n % h == 0) r--;

        printf("%d%02d\n", f, r);
    }
}
