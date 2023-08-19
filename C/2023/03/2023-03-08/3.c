#include <stdio.h>
#include <string.h>

int n, t, cnt;

int f(char *q, char *w) { 
    return strcmp(q, w); 
}

main() {
	scanf("%d", &n);
	
    char tmp[n][21];
    char name[21];
   
    while (n--) {
		scanf("%s", name);
		if (strcmp(name, "ENTER"))
			strcpy(tmp[t++], name);
		else if (!n || !strcmp(name, "ENTER")) {
			qsort(tmp, t, 21, f);
			for (int i = 0; i < t; i++) {
				if (!i || strcmp(tmp[i - 1], tmp[i]))
					cnt++;
            }
			t = 0;
		}
	}
	printf("%d", cnt);
}
