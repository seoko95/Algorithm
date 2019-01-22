//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <stdbool.h>
//
//using namespace std;
//long long D[69];
//
//int main()
//{
//	int T;
//	int i, j;
//	int n;
//	scanf("%d", &T);
//	D[0] = 1;
//	D[1] = 1;
//	D[2] = 2;
//	D[3] = 4;
//	for (i = 0; i < T; i++)
//	{
//		scanf("%d", &n);
//		for (j = 4; j < n + 1; j++)
//		{
//			D[j] = D[j - 1] + D[j - 2] + D[j - 3] + D[j - 4];
//		}
//		printf("%lld\n", D[n]);
//	}
//
//	return 0;
//
//
//}