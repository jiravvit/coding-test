#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
    if (!s) return;
    if (*(s+1) != '\0') print_reverse(s+1);
    printf("%c", *s);
}

void get_sum(char *A, char *B, char *sum) {
    int A_idx, B_idx;
    int idx, max_idx;
    int a, b;
    int n, regroup;

    A_idx = strlen(A) - 1;
    B_idx = strlen(B) - 1;
    max_idx = A_idx > B_idx ? A_idx : B_idx;
    idx = 0;
    regroup = 0;

    while (idx <= max_idx) {
        a = A[A_idx] - '0';
        b = B[B_idx] - '0';
        n = a + b + regroup;
        if (A_idx < 0) n = b + regroup;
        if (B_idx < 0) n = a + regroup;
        sum[idx++] = (n%10) + '0';
        regroup = (n>=10) ? 1 : 0;
        A_idx--;
        B_idx--;
    }
    if (regroup == 1) sum[idx++] = regroup + '0';
    sum[idx] = '\0';
    print_reverse(sum);
}

int main() {
    char a[10001];
    char b[10001];
    char sum[10002];

    scanf("%s %s", a, b);
    get_sum(a, b, sum);
    
    printf("\n");
    return 0;
}
