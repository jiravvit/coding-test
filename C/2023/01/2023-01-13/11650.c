#include <stdio.h>
#include <stdlib.h>

int n;

struct xy {
    int x;
    int y;
};

int compare(const struct xy *a, const struct xy *b) {
    if (a->x > b->x) {
        return 1;
    } else if (a->x < b->x) {
        return -1;
    } else if (a->x == b->x) {
        if (a->y > b->y) return 1;
        else return -1;
    } else return 0;
}

int main() {
    scanf("%d", &n);
    
    struct xy arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, n, sizeof(arr[0]), compare);

    for (int j = 0; j < n; j++) {
        printf("%d %d\n", arr[j].x, arr[j].y);
    }
}
