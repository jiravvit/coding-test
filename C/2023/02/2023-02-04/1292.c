#include <stdio.h> 

int arr[1005];
int a, b;
int sum;

int main() {
    scanf("%d %d", &a, &b);
    
    int j = 1;
    for (int i = 0; i < 1000;) {        
        for (int k = 0; k < j; k++){
            arr[i] = j;     
            i++;     
            if (i > 1000) break;  
        }
        j++;
    }

    for (int i = a-1; i <= b-1; i++) {
        sum += arr[i];
    }
    
    printf("%d\n", sum); 
}
