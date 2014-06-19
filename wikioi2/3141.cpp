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
//int main() {
//	int n;
//	cin >> n;
//	int i = 0, j = 0;
//	i = n / 2;
//	j = (n-1) / 2;
//	int cnt = 1;
//	int a[n][n];
//	a[i][j] = cnt;
//	for (int k = 1; k <= n; k++) {
//		for (int o = 1; o <= k&&cnt<=n*n; o++) {
//			j++;
//			cnt++;
////			cout<<cnt<<" ";
//			a[i][j] = cnt;
//		}
////		cout<<endl;
//		for (int o = 1; o <= k&&cnt<=n*n; o++) {
//			i--;
//			cnt++;
////			cout<<cnt<<" ";
//			a[i][j] = cnt;
//		}
////		cout<<endl;
//		k++;
//		if(k>n){
//			break;
//		}
//		for (int o = 1; o <= k&&cnt<=n*n; o++) {
//			j--;
//			cnt++;
////			cout<<cnt<<" ";
//			a[i][j] = cnt;
//		}
////		cout<<endl;
//		for (int o = 1; o <= k&&cnt<=n*n; o++) {
//			i++;
//			cnt++;
////			cout<<cnt<<" ";
//			a[i][j] = cnt;
//		}
////		cout<<endl;
//	}
////	cout<<endl;
//	int sum=0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			sum+=a[i][j];
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout<<sum;
//	return 0;
//}
