#include <stdio.h>
#include <stdlib.h>




void back(int arr[], int visited[], int m, int n, int k)
{
    if(k==m)
    {
        for(int i=0;i<m;i++)
            printf("%d ",arr[i]);
        printf("\n");
        return ;

    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            arr[k] = i;
            visited[i] = 1;
            back(arr,visited,m, n, k+1);
            visited[i] = 0;
        }
    }
}

int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int* arr = (int*)malloc(sizeof(int)*m);
    int* visited = (int*)malloc(sizeof(int)*(n+1));
    back(arr,visited,m,n,0);
    free(arr);
    free(visited);

}
