#include <stdio.h>

char str[16];
int c=0;

int main(void)
{
	scanf("%s", str);


	for (int i = 0; i < 15; i++)
	{
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
		{
			c = c + 3;
		}
		if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
		{
			c = c + 4;
		}
		if (str[i] =='G' || str[i] == 'H' || str[i] == 'I') {
			c = c + 5;
		}
		if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
		{
			c = c + 6;
		}
		if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
		{
			c = c + 7;
		}
		if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
		{
			c = c + 8;
		}
		if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
		{
			c = c + 9;
		}
		if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
		{
			c = c + 10;
		}
	}
	
    printf("%d\n", c);
	
}
