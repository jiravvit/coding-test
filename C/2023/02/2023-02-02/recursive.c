#include <stdio.h>

int func(int n) {
    if (n == 5) 
        return 0; 

    printf("%d\n", n);
    return func(n+1);
}   

int main() {
    func(0);
}
