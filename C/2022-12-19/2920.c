#include <stdio.h>

int arr[8];

int main() {
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    
    int asc = 0;
    int des = 0;
    int mix = 0;
    for (int i = 0; i < 8; i++) {
        if (arr[i] == i+1) asc++;
        else if (arr[i] + i+1 == 9) des++;
        else mix++;
    }
    
    if (asc == 8) printf("ascending\n");
    else if (des == 8) printf("descending\n");
    else printf("mixed\n");

}     
