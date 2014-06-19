//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<queue>
//
//using namespace std;
//
//struct mouse {
//	int score;
//	int time;
//	friend bool operator<(mouse a, mouse b) {
//		return a.score < b.score;
//	}
//};
//
//priority_queue<mouse> heap;
//
//int main() {
//	int n;
//	cin >> n;
//	mouse a[10001];
//	for (int i = 1; i <= n; i++)
//		cin >> a[i].time;
//	for (int i = 1; i <= n; i++)
//		cin >> a[i].score;
//	int maxt = -1;
//	for (int i = 1; i <= n; i++)
//		maxt = max(maxt, a[i].time);
//	int res = 0;
//	for (int i = maxt; i >= 1; i--) {
//		for (int j = 1; j <= n; j++)
//			if (a[j].time == i)
//				heap.push(a[j]);
//		if (!heap.empty())
//			res += heap.top().score;
//		if (!heap.empty())
//			heap.pop();
//	}
//	cout << res << endl;
//	return 0;
//}
