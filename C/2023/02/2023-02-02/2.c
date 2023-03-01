#include <stdio.h>
 
int N,M;
int result[1000];
int checklist[1000];
 
void DFS(int L)
{
    int i;
    
    if(L==M)
    {
        for(i=0;i<M;i++)
            printf("%d ",result[i]);
        printf("\n");
    }
    else
    {
        for(i=1 ; i<=N ; i++)
        {
            if(checklist[i]==0)
            {
                result[L] = i;
                checklist[i]=1;
                DFS(L+1);
                checklist[i]=0;
            }
        }
    }
}    
    
 
int main(void) {
    scanf("%d %d",&N,&M);
    DFS(0);
} 
