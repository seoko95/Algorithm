#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <stdbool.h>

using namespace std;
bool door[101];
int n;
int T;


int main()
{
	int i, j, k, l;

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		int count = 0;
		scanf("%d", &n);
		for (j = 1; j < n + 1; j++)
		{
			if (j == 1)
			{
				for (k = 1; k < n + 1; k++)
				{
					door[k] = true;
				}
			}
			else
			{
				for (k = 1; (k*j) <= n; k++)
				{
					if (door[k*j] == true)
						door[k*j] = false;
					else
						door[k*j] = true;
				}
			}
		}
		for (l = 1; l < n + 1; l++)
		{
			if (door[l] == true)
				count++;
		}
		printf("%d\n", count);

	}

	return 0;
}
