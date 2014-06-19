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
//void process(node* root) {
////	if (root->left == NULL && root->right == NULL) {
////		cout << root->id << " ";
////		return;
////	}
//	if (root == NULL) {
//		return;
//	}
//	cout << root->id << " ";
//	process(root->left);
//	process(root->right);
//}
//void process2(node* root) {
////	if (root->left == NULL && root->right == NULL) {
////		cout << root->id << " ";
////		return;
////	}
//	if (root == NULL) {
//		return;
//	}
////	cout<<"we are not at="<<root->id<<endl;
//	process2(root->left);
//	cout << root->id << " ";
//	process2(root->right);
//}
//void process3(node* root) {
////	if (root->left == NULL && root->right == NULL) {
////		cout << root->id << " ";
////		return;
////	}
//	if (root == NULL) {
//		return;
//	}
//	process3(root->left);
//	process3(root->right);
//	cout << root->id << " ";
//}
//void move2right(char a[], int i, int m) {
//	char b[m];
//
//	if (i == 0) {
//		return;
//	}
//	for (int j = 0; j < m; j++) {
//		int k = (j + i) % m;
//		b[k] = a[j];
//	}
//	for (int j = 0; j < m; j++) {
//		a[j] = b[j];
//	}
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	char a[26];
//	for (int i = 0; i < 26; i++) {
//		a[i] = 'A' + i;
////		cout << a[i];
//	}
//	cout << endl;
//	for (int i = 1; i < n; i++) {
////		move2right(a, 1,m);
//		for (int k = m - 1; k >= i; k--) {
//			a[k] = a[k - 1];
//		}
//		for (int k = i - 1; k >= 0; k--) {
//			a[k] = a[i] + (i - k)%26;
//		}
//		for (int j = 0; j < m; j++) {
//			cout << a[j];
//		}
//		cout << endl;
//	}
//	return 0;
//}
