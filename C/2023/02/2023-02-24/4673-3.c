#include <stdio.h>

// 9999 + 9 + 9 + 9 = 10035
int selfNum[10036];
int g = 1; 

int main() {
	for(int i=1; i<10000; i++){
		if(i < 10){
			g = i + i;
		}
		if(i>=10 && i<100){
			g = i + i/10 + i%10;
		}
		if(i>=100 && i<1000){
			g = i + i/100 + (i/10)%10 + i%10;
		}
		if(i>=1000 && i<10000){
			g = i + i/1000 + (i/100)%10 + (i/10)%10 + i%10;
		}
		selfNum[g] = 1;
	    g = 0;
    }

	for(int i = 1; i < 10000; i++){
		if(selfNum[i] == 0){
			printf("%d\n", i);
		}
	}

}


