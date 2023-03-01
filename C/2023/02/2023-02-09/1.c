#include <stdio.h>
#include <stdbool.h>

//범위의 소수 판별 
void find_primeNumber(int m, int target) {

    bool arr[target+1]; // 숫자를 지울 배열
	
    arr[0] = true;
    arr[1] = true;

    // 2부터 특정 수의 배수에 해당하는 수를 모두 지움
    for(int i=2;i<=target;i++) {
        if(arr[i]) continue; // 이미 지워진 수라면 건너뜀

        // 이미 지워진 숫자가 아니라면, 해당 숫자의 배수를 모두 true로 만듦
        for(int j=2*i;j<=target; j+=i) {
            arr[j] = true;
        }
    }

    // 남아있는 수를 모두 출력 (배열에서 false인 index) 
    for(int i=m;i<=target;i++) {
        if(!arr[i]) printf("%d\n", i);
    }
}

int m, n;

int main(void) {
    scanf("%d %d", &m, &n);
    find_primeNumber(m, n); //120까지 
    return 0;
}
