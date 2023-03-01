#include<algorithm>
 
int main(void){
    int n, k;
    scanf("%d %d", &n, &k);
 
    int * arr = new int[n];
    int num;
 
    //입력
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        arr[i] = num;
    }
 
    //오름차순 정렬
    sort(&arr[0], &arr[n]);
 
    //출력
    printf("%d", arr[k-1]);
 
    delete []arr;
 
    return 0;
}
