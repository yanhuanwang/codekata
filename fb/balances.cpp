///*
// * You have a room-full of balances and weights. Each balance weighs ten pounds and is
//considered perfectly balanced when the sum of weights on its left and right sides are
//exactly the same. You have placed some weights on some of the balances, and you have placed
//some of the balances on other balances. Given a description of how the balances are arranged
//and how much additional weight is on each balance, determine how to add weight to the balances
//so that they are all perfectly balanced.
//
//There may be more than one way to balance everything, but always choose the way that places additional weight on the lowest balances.
//
//The input file will begin with a single integer, N, specifying how many balances there are.
//Balance 0 is specified by lines 1 and 2, balance 1 is specified by lines 3 and 4, etc...
//Each pair of lines is formatted as follows:
//
//WL <balances>
//WR <balances>
//
//WL and WR indicate the weight added to the left and right sides, respectively.
//<balances> is a space-delimited list of the other balance that are on that side of this balance.
//<balances> may contain zero or more elements.
//
//Consider the following input:
//
//4
//0 1
//0 2
//0
//0 3
//3
//0
//0
//0
//
//Balance 0 has balance 1 on its left side and balance 2 on its right side
//Balance 1 has balance 3 on its right side
//Balance 2 has three pounds on its left side
//Balance 3 has nothing on it
//
//Since balance 3 has nothing on it it is already perfectly balanced, and weighs a total of 10 pounds.
//Balance 2 has no other balance on it, so all we need to do is balance it by putting three pounds on its right side. Now it weighs a total of 16 pounds.
//Balance 1 has balance three on its right side, which weighs 10 pounds, so we just put 10 pounds on its left side. Balance 1 weighs a total of 30 pounds.
//Balance 0 has balance 1 on its left side (30 pounds), and balance 2 on its right side (16 pounds), we can balance it by adding 14 pounds to the right side.
//
//The output should be N lines long, with the nth line listing the weight added to the nth balance, formatted as follows:
//
//<index>: <weight added to left side> <weight added to right side>
//
//So the output for this problem would be:
//
//0: 0 14
//1: 10 0
//2: 0 3
//3: 0 0
// * */
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cstring>
//#include<sstream>
//#include<assert.h>
//#include<cmath>
//#include<vector>
//#include<string>
//#include<map>
//#include<set>
//#include<queue>
//#include<stack>
//using namespace std;
//
//struct node {
//	int weight;
//	int totalweight;
//	int left;
//	int right;
//	vector<int> leftNodes;
//	vector<int> rightNodes;
//	int toBeAddedLeft;
//	int toBeAddedRight;
//	bool balanced;
//	node() {
//		weight = 10;
//		balanced = false;
//		toBeAddedLeft = 0;
//		toBeAddedRight = 0;
//	}
//	node(int l, int r) :
//			weight(10), left(l), right(r) {
//
//	}
//
//} balance;
//map<int, node> m;
//void init(map<int, node> &m) {
//	for (auto &x : m) {
//		if ((x.second.left == x.second.right) && (x.second.leftNodes.empty())
//				&& (x.second.rightNodes.empty())) {
//			x.second.balanced = true;
//			x.second.totalweight = x.second.left + x.second.right
//					+ x.second.weight;
//		}
//	}
//	for (auto &x : m) {
//		if (!x.second.balanced) {
//			int leftTotal = x.second.left;
//			int rightTotal = x.second.right;
//			for (auto y : x.second.leftNodes) {
//				if (m[y].balanced) {
//					leftTotal += m[y].totalweight;
//				} else {
//					leftTotal = -1;
//					break;
//				}
//			}
//
//			for (auto y : x.second.rightNodes) {
//				if (m[y].balanced) {
//					rightTotal += m[y].totalweight;
//				} else {
//					rightTotal = -1;
//					break;
//				}
//			}
//			if (leftTotal != -1 && rightTotal != -1) {
//				if (leftTotal == rightTotal) {
//					x.second.balanced = true;
//					x.second.totalweight = leftTotal + rightTotal
//							+ x.second.weight;
//				} else {
//					if (leftTotal > rightTotal) {
//						x.second.toBeAddedRight = leftTotal - rightTotal;
//						x.second.balanced = true;
//						x.second.totalweight = leftTotal + leftTotal
//								+ x.second.weight;
//					} else {
//						x.second.toBeAddedLeft = rightTotal - leftTotal;
//						x.second.balanced = true;
//						x.second.totalweight = rightTotal + rightTotal
//								+ x.second.weight;
//					}
//				}
//			}
//		}
//	}
//
//}
//bool isBalanced(node &n) {
//	bool flag = false;
//	return flag;
//}
//int totalWeight(node &n) {
//	int res = -1;
//	if (isBalanced(n)) {
//
//	}
//	return res;
//}
//void process(vector<node>& v) {
//
//}
//void process2(map<int, node> &m) {
//	bool exit = true;
//	for (auto x : m) {
//		exit &= x.second.balanced;
//	}
//	if (exit) {
//		return;
//	}
//	for (auto &x : m) {
//		if (!x.second.balanced) {
//			int leftTotal = x.second.left;
//			int rightTotal = x.second.right;
//			for (auto y : x.second.leftNodes) {
//				if (m[y].balanced) {
//					leftTotal += m[y].totalweight;
//				} else {
//					leftTotal = -1;
//					break;
//				}
//			}
//
//			for (auto y : x.second.rightNodes) {
//				if (m[y].balanced) {
//					rightTotal += m[y].totalweight;
//				} else {
//					rightTotal = -1;
//					break;
//				}
//			}
//			if (leftTotal != -1 && rightTotal != -1) {
//				if (leftTotal == rightTotal) {
//					x.second.balanced = true;
//					x.second.totalweight = leftTotal + rightTotal
//							+ x.second.weight;
//				} else {
//					if (leftTotal > rightTotal) {
//						x.second.toBeAddedRight = leftTotal - rightTotal;
//						x.second.balanced = true;
//						x.second.totalweight = leftTotal + leftTotal
//								+ x.second.weight;
//					} else {
//						x.second.toBeAddedLeft = rightTotal - leftTotal;
//						x.second.balanced = true;
//						x.second.totalweight = rightTotal + rightTotal
//								+ x.second.weight;
//					}
//				}
//			}
//		}
//	}
//	process2(m);
//}
//void process(map<int, node> &m) {
//	init(m);
////	bool exit=false;
//	process2(m);
//	for (int i = 0; i < m.size(); i++) {
//		cout << i << ":" << " " << m[i].toBeAddedLeft << " "
//				<< m[i].toBeAddedRight << endl;
//	}
//}
//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	int N;
//	cin >> N;
//
//	vector<node> v;
//	char tmp[10000];
//	getchar();
//	for (int i = 0; i < N; i++) {
//		node newNode;
//		int WL;
//		fgets(tmp, 10000, stdin);
//		stringstream sin(tmp);
//		sin >> WL;
//		newNode.left = WL;
//		int nodeNum;
//		while (sin >> nodeNum) {
//			newNode.leftNodes.push_back(nodeNum);
//		}
//
//		int WR;
//		fgets(tmp, 10000, stdin);
//		stringstream sin2(tmp);
//		sin2 >> WR;
//		newNode.right = WR;
//		while (sin2 >> nodeNum) {
//			newNode.rightNodes.push_back(nodeNum);
//		}
//		v.push_back(newNode);
//		m[i] = newNode;
//	}
//	process(v);
//	process(m);
////	for (auto x : v) {
////		cout << "x.left:" << x.left << " " << "x.right:" << x.right << " "
////				<< "x.weight:" << x.weight << endl;
////		cout << "x.leftNodes:" << " ";
////		for (auto y : x.leftNodes) {
////			cout << y << " ";
////		}
////		cout << endl << "x.rightNode:" << " ";
////		for (auto y : x.rightNodes) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
////	for (auto z : m) {
////		auto x = z.second;
////		cout << "x.left:" << x.left << " " << "x.right:" << x.right << " "
////				<< "x.weight:" << x.weight << " x.balanced:" << x.balanced
////				<< " x.totalweight:" << x.totalweight << " x.leftNodes.empty():"
////				<< x.leftNodes.empty() << " x.rightNodes.empty():"
////				<< x.rightNodes.empty() << " x.totalweight" << x.totalweight
////				<< endl;
////		cout << "x.leftNodes:" << " ";
////		for (auto y : x.leftNodes) {
////			cout << y << " ";
////		}
////		cout << endl << "x.rightNode:" << " ";
////		for (auto y : x.rightNodes) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
////	for(int i=0;i<N;i++){
////cout<<i<<": "<<endl;
////	}
//	return 0;
//}
//
