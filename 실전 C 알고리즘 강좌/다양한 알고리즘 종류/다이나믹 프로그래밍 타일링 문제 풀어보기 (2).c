#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2133번 - 타일 채우기
/*
int d[1001];

int dp(int x)
{
	if (x == 0) return 1;
	if (x == 1) return 0;
	if (x == 2) return 3;
	if (d[x] != 0) return d[x];
	int result = 3 * dp(x - 2);
	for (int i = 3; i <= x; i++)
	{
		if (i % 2 == 0)
		{
			result += 2 * dp(x - i);
		}
	}
	return d[x] = result;
}

int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));

	return 0;
}*/

// 14852번 - 타일 채우기(3) - 1
/*
int d[1000001];

int dp(int x)
{
	if (x == 0) return 1;
	if (x == 1) return 2;
	if (x == 2) return 7;
	if (d[x] != 0) return d[x];
	int result = 3 * dp(x - 2) + 2 * dp(x - 1);
	for (int i = 3; i <= x; i++)
	{
		result += (2 * dp(x - i)) % 1000000007;
	}
	return d[x] = result % 1000000007;
}

int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));

	return 0;
}*/

// 14852번 - 타일 채우기(3) - 2
long long int d[1000001][2];

long long int dp(int x)
{
	d[0][0] = 0;
	d[1][0] = 2;
	d[2][0] = 7;
	d[2][1] = 1;

	for (int i = 3; i <= x; i++)
	{
		d[i][1] = (d[i - 1][1] + d[i - 3][0]) % 1000000007;
		d[i][0] = (3 * d[i - 2][0] + 2 * d[i - 1][0] + 2 * d[i][1]) % 1000000007;
	}
	return d[x][0];
}

int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));

	return 0;
}
