#include <stdio.h>
#include <vector>

std::vector<int> vec;
std::vector<int> vec2[3];

int main() {
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(6);
    
    for (int i = 0; i < vec.size(); i++) {
        printf("%d\n", vec[i]);
    }
    printf("%d %d\n\n", *vec.begin(), *(vec.end()-1));
    
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++) {
        printf("%d\n", vec[i]);
    }
    printf("%d %d\n\n", *vec.begin(), *(vec.end()-1));

    /* vec2[][] */
    vec2[0].push_back(5);
    vec2[0].push_back(7);
    vec2[0].push_back(4);
    vec2[0].push_back(6);

    vec2[1].push_back(4);
    vec2[1].push_back(3);
    vec2[1].push_back(6);
    vec2[1].push_back(5);

    std::sort(vec2[0].begin(), vec2[0].end());
    std::sort(vec2[1].begin(), vec2[1].end());

    for (int i = 0; i < vec2[0].size(); i++) {
        printf("%d\n", vec2[0][i]);
    }
    printf("\n");
    for (int i = 0; i < vec2[1].size(); i++) {
        printf("%d\n", vec2[1][i]);
    }
    
}
