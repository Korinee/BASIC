#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

// 단어 정렬 - 백준 1181번 문제
/*
string a[20000];
int n;

bool compare(string a, string b)
{
	// 길이가 짧은 순서 우선
	if (a.length() < b.length())
	{
		return 1;
	}
	else if (a.length() > b.length())
	{
		return 0;
	}
	// 길이가 같은 경우라면
	else
	{
		return a < b; // 사전순으로 정렬
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n, compare);
	for (int i = 0; i < n; i++)
	{
		if (i > 0 && a[i] == a[i - 1])
		{
			continue;
		}
		else
		{
			cout << a[i] << '\n';
		}
	}

	return 0;
}*/

// 시리얼 번호 - 백준 1431번 문제
/*
string a[20000];
int n;

int getSum(string a)
{
	int length = a.length(), sum = 0;
	for (int i = 0; i < length; i++)
	{
		// 숫자인 경우에만 더합니다.
		if (a[i] - '0' <= 9 && a[i] - '0' >= 0)
		{
			sum += a[i] - '0';
		}
	}

	return sum;
}

bool compare(string a, string b)
{
	// 길이가 짧은 순서 우선
	if (a.length() < b.length())
	{
		return 1;
	}
	else if (a.length() > b.length())
	{
		return 0;
	}
	// 길이가 같은 경우라면
	else
	{
		int aSum = getSum(a);
		int bSum = getSum(b);

		// 글자에 포함된 숫자의 합이 다르다면
		if (aSum != bSum)
		{
			return aSum < bSum;
		}
		else
		{
			return a < b;
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n, compare);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\n';
	}

	return 0;
}*/

// 수 정렬하기 3 - 백준 10989번 문제
int n;
int a[10001];

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	for (int i = 0; i < 10001; i++)
	{
		while (a[i] != 0)
		{
			printf("%d\n", i);
				a[i]--;
		}
	}

	return 0;
}
