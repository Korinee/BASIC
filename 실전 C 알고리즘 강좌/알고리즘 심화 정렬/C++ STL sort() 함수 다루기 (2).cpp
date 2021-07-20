#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>>a,
	pair<string, pair<int, int>>b) {
	if (a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	}
	else {
		return a.second.first > b.second.first;
	}
}

int main(void)
{
	vector<pair<string, pair<int, int> >> v;
	v.push_back(pair<string, pair<int, int> >("박경민", pair<int, int>(90, 20010829)));
	v.push_back(pair<string, pair<int, int> >("장준호", pair<int, int>(97, 20010114)));
	v.push_back(pair<string, pair<int, int> >("이정욱", pair<int, int>(95, 2001115)));
	v.push_back(pair<string, pair<int, int> >("최원준", pair<int, int>(90, 20020411)));
	v.push_back(pair<string, pair<int, int> >("유찬", pair<int, int>(88, 20010920)));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << ' ';
	}
	return 0;
}
