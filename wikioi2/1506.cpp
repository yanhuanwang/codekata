//#include <cstdio>
//#include <cstdlib>
//#include <memory.h>
//#include <algorithm>
//#include <string>
//#include <map>
////#include <unordered_map>
////#include <unordered_set>
//#include <set>
//#include <vector>
//#include <cmath>
//#include <climits>
//#include <queue>
//#include <cassert>
//#include <iostream>
//#include <sstream>
//#include <utility>
//#include <bitset>
//using namespace std;
//int f[11];
//int getint() {
//	int n;
//	scanf("%d", &n);
//	return n;
//}
//void move(int n, char s, char d, char m) {
//	if (n == 1)
//		printf("%d from %c to %c\n", n, s, d);
//	else {
//		move(n - 1, s, m, d);
//		printf("%d from %c to %c\n", n, s, d);
//		move(n - 1, m, d, s);
//	}
//}
//struct node {
//	int id;
//	node* left;
//	node* right;
//	node* parent;
//};
//map<int, node> m;
//int height = INT_MIN;
//int width = INT_MIN;
//vector<int> vi;
////int level=0;
//void process(node* root, int level) {
//	if (root == NULL) {
//		return;
//	}
//	vi[level]++;
////	cout << root->id << " ";
//	height = max(height, level);
//	process(root->left, level + 1);
//	process(root->right, level + 1);
//}
//void process2(node* root) {
//	if (root == NULL) {
//		return;
//	}
//	process2(root->left);
//	cout << root->id << " ";
//	process2(root->right);
//}
//void process3(node* root) {
//	if (root == NULL) {
//		return;
//	}
//	process3(root->left);
//	process3(root->right);
//	cout << root->id << " ";
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	map<int, vector<int> > mv;
//	int a, b;
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b;
//		mv[a].push_back(b);
//	}
////	for (auto x : mv) {
////		cout << x.first << ": ";
////		for (auto y : x.second) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
//	for (map<int, vector<int> >::iterator it = mv.begin(); it != mv.end();
//			it++) {
//		sort(it->second.begin(), it->second.end());
//		it->second.erase(unique(it->second.begin(), it->second.end()),
//				it->second.end());
//	}
////	for (auto x : mv) {
////		cout << x.first << ": ";
////		for (auto y : x.second) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
//	for (int i = 1; i <= n; i++) {
//		queue<int> q, p;
//		set<int> visited;
//		q.push(i);
//		visited.insert(i);
//		while (!q.empty()) {
//			while (!q.empty()) {
//				int a = q.front();
//				q.pop();
//				for (int j = 0; j < mv[a].size(); j++) {
//					if (mv[a][j] == i) {
//						cout << 'T' << endl;
//						goto out;
//					}
//					if (!visited.count(mv[a][j])) {
//						p.push(mv[a][j]);
//						visited.insert(mv[a][j]);
//					} else {
////						cout << 'F' << endl;
//					}
//				}
//			}
//			swap(q, p);
//		}
//		cout << 'F' << endl;
//		out: ;
//	}
//	return 0;
//}
