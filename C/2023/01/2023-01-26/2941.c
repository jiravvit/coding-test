#include <stdio.h>

char str[100];
int cnt;

int main() {
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'c') {
            if (str[i+1] == '=') {
                cnt++;
                i++;
            } else if (str[i+1] == '-') {
                cnt++;
                i++;
            } else {
                cnt++;
            }
        } else if (str[i] == 'd') {
            if (str[i+1] == 'z') {
                if (str[i+2] == '=') {
                    cnt++;
                    i++;
                    i++;
                } else {
                    cnt++;
                }
            } else if (str[i+1] == '-') {
                cnt++;
                i++;
            } else {
                cnt++;
            }
        } else if (str[i] == 'l') {
            if (str[i+1] == 'j') {   
                cnt++;
                i++;   
            } else {
                cnt++;
            }
        } else if (str[i] == 'n') {
            if (str[i+1] == 'j') {
                cnt++;
                i++;
            } else {
                cnt++;
            }
        } else if (str[i] == 's') {
            if (str[i+1] == '=') {
                cnt++;
                i++;
            } else {
                cnt++;
            }
        } else if (str[i] == 'z') {
            if (str[i+1] == '=') {
                cnt++;
                i++;
            } else {
                cnt++;
            }
        } else {
            cnt++;
        }
    }

    printf("%d\n", cnt);
}