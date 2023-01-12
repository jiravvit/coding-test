#include <stdio.h>

int n;

struct member {
    int age;
    char name[101];
};

int compare(const struct member *mem, const struct member *mem2) {
    if (mem->age == mem2->age) return 0;
    else if (mem->age > mem2->age) return 1;
    else return -1;
}

int main() {
    scanf("%d", &n);
    struct member mem[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %101s", &mem[i].age, mem[i].name);
    }
    
    qsort(mem, n, sizeof(struct member), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", mem[i].age, mem[i].name);
    }
}
