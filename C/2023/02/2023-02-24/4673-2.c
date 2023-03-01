#include <stdio.h>

int selfArr[1000];
int idx = 0;

int Is_SelfNum(int data)
{
	int n = 0; 
    int saveIdx = idx;
	
    idx = 0;

	while (selfArr[idx] != 0)
	{
		n = selfArr[idx];
		idx++;

		while (n < data && n <= 10000)
		{
            printf("%d %d\n", n, data);
			n =	n + n/1000 + (n/100) % 10 + (n/10) % 10 + n%10;
			if (data == n)
			{
				idx = saveIdx;
				return 0;
            }
		}
	}

	idx = saveIdx;
	return 1;
}

int main(void)
{
	
	for (int i = 1; i <= 10; i++)
	{
		if (Is_SelfNum(i))
		{
			printf("%d\n", i);
			selfArr[idx] = i;
			idx++;
		}
	}

	return 0;
}

