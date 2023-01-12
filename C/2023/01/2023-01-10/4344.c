#include <stdio.h>

int n, m;

int main() {
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);

        int stu[m];
        double avg = 0;
        double cnt = 0;
        
        for (int j = 0; j < m; j++) {
            scanf("%d", &stu[j]);
            avg += stu[j];    
        }
        avg = avg/m;

        for (int k = 0; k < m; k++) {
            if (stu[k] > avg) cnt++;
        }

        printf("%0.3lf%s\n",cnt/m*100,"%");
    }
}
