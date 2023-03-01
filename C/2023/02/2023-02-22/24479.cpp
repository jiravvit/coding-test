//#include <stdio.h>
//#include <stdbool.h>
#include <iostream> // scanf, printf ? 
#include <vector> // std::vector, std::sort    
#include <algorithm>
int n, m, r;

std::vector<int> graph[100001];
bool visited[100001];
int result[100001];
int order;

void DFS(int r) {
    if (visited[r] == true) {
        return;
    }

    visited[r] = true;
    result[r] = ++order;

    for (int i = 0; i < graph[r].size(); i++) {
        DFS(graph[r][i]);
    }
}


int main() {
    scanf("%d %d %d", &n, &m, &r);

    for (int i = 1; i <= m; i++){ 
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a].push_back(b); // (1,4) (1,2) (2,3) (2,4) (3,4)
        graph[b].push_back(a); // (4,1) (2,1) (3,2) (4,2) (4,3)
    }

    for (int i = 1; i <= n; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }

    DFS(r); // start
    for (int i = 1; i <= n; i++) {
        printf("%d\n", result[i]);
    }
}
