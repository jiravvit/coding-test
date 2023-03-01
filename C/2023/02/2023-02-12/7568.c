#include <stdio.h>

int n;
int kg, cm;

int main() {
    scanf("%d", &n);
    int arr[n][3];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &kg, &cm);
        arr[i][0] = kg;
        arr[i][1] = cm;
        arr[i][2] = 1; // score
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((arr[i][0] < arr[j][0]) && (arr[i][1] < arr[j][1])) {
                arr[i][2] += 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][2]);
    }
}
