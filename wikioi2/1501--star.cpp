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
//int width=INT_MIN;
//vector<int>vi;
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
//	int n;
//	cin >> n;
//	if(n==1){
//		cout<<1<<" "<<1;
//		return 0;
//	}
//	node nd[n + 1];
//	vi.resize(n,0);
//	for (int i = 1; i <= n; i++) {
//		int leftid, rightid;
//		cin >> leftid >> rightid;
//		nd[i].id = i;
//		nd[i].parent = NULL;
//		nd[i].left = (leftid == 0 ? NULL : &nd[leftid]);
//		if (nd[i].left != NULL) {
//			nd[i].left->parent = &nd[i];
//		}
//		nd[i].right = (rightid == 0 ? NULL : &nd[rightid]);
//		if (nd[i].right != NULL) {
//			nd[i].right->parent = &nd[i];
//		}
//	}
//	node root;
//	for (int i = 1; i <= n; i++) {
//		if (nd[i].parent == NULL) {
//			root = nd[i];
//			break;
//		}
//	}
////	for (int i = 1; i <= n; i++) {
////		cout << nd[i].id << " ";
////		if (nd[i].left != NULL) {
////			cout << "left="<<nd[i].left->id << " ";
////		}
////		if (nd[i].right != NULL) {
////			cout << "right="<<nd[i].right->id << " ";
////		}
////		if (nd[i].parent != NULL) {
////			cout << "parent="<<nd[i].parent->id << " ";
////		}
////		cout << endl;
////	}
//	process(&root, 1);
//	cout<<*max_element(vi.begin(),vi.end())<<" "<<height;
//	return 0;
//}
