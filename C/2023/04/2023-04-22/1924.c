#include <stdio.h>

int m, d;

int main() {
    scanf("%d %d", &m, &d);
    int date = 0;

    if (m != 1) {
        for (int i = 1; i < m; i++) {
            if (i == 2) {
                date += 28;
            } else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                date += 31;
            } else {
                date += 30;
            }
        }
    }
    
    for (int i = 1; i <= d; i++) {
        date += 1;
    }

    /*printf("%d\n", date);*/


    if (date % 7 == 1) {
        printf("MON\n");
    } else if (date % 7 == 2) {
        printf("TUE\n");
    } else if (date % 7 == 3) {
        printf("WED\n");
    } else if (date % 7 == 4) {
        printf("THU\n");
    } else if (date % 7 == 5) {
        printf("FRI\n");
    } else if (date % 7 == 6) {
        printf("SAT\n");
    } else { 
        printf("SUN\n");
    }
}
