#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 백준 2252번 줄세우기
/*
#define MAX 32001

int n, inDegree[MAX], result[MAX];
vector<int> a[MAX];

void topologySort() {
	queue<int> q;

	// 진입 차수가 0인 노드를 큐에 삽입
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0) {
			q.push(i);
		}
	}

	// 정렬이 완전히 수행되려면 정확히 n개의 노드를 방문
	for (int i = 1; i <= n; i++) {
		int x = q.front();
		q.pop();
		result[i] = x;
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j];

			// 새롭게 진입차수가 0인 된 정점을 큐에 삽입
			if (--inDegree[y] == 0) {
				q.push(y);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", result[i]);
	}
}

int main() {
	int m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		a[x].push_back(y);
		inDegree[y]++;
	}
	topologySort();

	return 0;
}*/

// 백준 1516번 게임 개발

#define MAX 501

int n, inDegree[MAX], time[MAX], result[MAX];
vector<int> a[MAX];

void topologySort() {
	queue<int> q;

	// 진입 차수가 0인 노드를 큐에 삽입
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0) {
			result[i] = time[i];
			q.push(i);
		}
	}

	// 정렬이 완전히 수행되려면 정확히 n개의 노드를 방문
	for (int i = 1; i <= n; i++) {
		int x = q.front();
		q.pop();
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j];
			result[y] = max(result[y], result[x] + time[y]);

			// 새롭게 진입차수가 0인 된 정점을 큐에 삽입
			if (--inDegree[y] == 0) {
				q.push(y);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d\n", result[i]);
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &time[i]);
		while (1) {
			int x;
			scanf("%d", &x);
			if (x == -1) break;
			inDegree[i]++;
			a[x].push_back(i);
		}
	}
	topologySort();

	return 0;
}
