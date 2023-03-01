#include <stdio.h>

int n, k;

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*int partition(int arr[], int low, int high) {*/
    /*int pivot = arr[low+high/2];*/
    /*int i = low-1;*/
    /*int j = high+1;*/

    /*while (1) {*/
        /*while (arr[++i] < pivot);*/
        /*while (pivot < arr[--j]);*/
        /*if (i >= j) {*/
            /*break;*/
        /*}*/
        /*swap(&arr[i], &arr[j]);*/
    /*}*/

    /*return i;*/
/*}*/

int quick_select(int arr[], int low, int high, int k) {
    if (low == high) return arr[low];
    
    int pivot = arr[(low+high)/2];
    int i = low-1;
    int j = high+1;
    
    while (1) {
        while (arr[++i] < pivot);
        while (pivot < arr[--j]);
        if (i >= j) {
            break;
        }
        swap(&arr[i], &arr[j]);
    }

    if (i == j && i == k) return pivot;
    if (k < i) return quick_select(arr, low, i-1, k);
    else return quick_select(arr, j+1, high, k);
}

int qsearch(int arr[], int lo, int hi, int k) {
	int i, j, p;
	
	if (lo==hi){
		return arr[lo];
	}
	
	i=lo-1;
	j=hi+1;
	p=arr[(lo+hi)/2];
	while(1){
		while(arr[++i]<p);
		while(p<arr[--j]);
		if(i>=j){
			break;
		}
		swap(&arr[i], &arr[j]);
	}
    
	if (i == j && i == k){
		return p;
	}
	
	if(k<i){
		return qsearch(arr, lo, i-1, k);
	}
	else{
		return qsearch(arr, j+1, hi, k);
	}
}

int main() {
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     
    printf("%d\n", quick_select(arr, 0, n-1, k-1));
    /*printf("%d\n", qsearch(arr, 0, n-1, k-1));*/
}
