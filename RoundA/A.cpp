///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <memory.h>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <unordered_map>
//#include <unordered_set>
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
//#define PI 3.14159265358979323846264338327950288
//vector<string> Tokenize(string s, string ch) {
//	vector<string> ret;
//	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
//		p2 = s.find_first_of(ch, p);
//		if (p2 == -1)
//			p2 = s.size();
//		if (p2 - p > 0)
//			ret.push_back(s.substr(p, p2 - p));
//	}
//	return ret;
//}
//int my_abs(int a) {
//	int i = a >> 31;
//	return ((a ^ i) - i);
//}
//
//vector<int> TokenizeInt(string s, string ch) {
//	vector<int> ret;
//	vector<string> p = Tokenize(s, ch);
//	for (int i = 0; i < p.size(); i++)
//		ret.push_back(atoi(p[i].c_str()));
//	return ret;
//}
//void helper(vector<string>&initflow, vector<string>&requiredflow, int j,
//		int &cnt, bool& found) {
//	for (auto &x : initflow) {
//		if (x[j] == '0') {
//			x[j] = '1';
//		} else {
//			x[j] = '0';
//		}
//	}
////	for (auto x : requiredflow) {
////		if (x[j] == '0') {
////			x[j] = '1';
////		} else {
////			x[j] = '0';
////		}
////	}
//	sort(begin(initflow), end(initflow));
//	sort(begin(requiredflow), end(requiredflow));
//
////	for (auto x : initflow) {
////		cout << x << " ";
////	}
////	cout << endl;
////	for (auto x : requiredflow) {
////		cout << x << " ";
////	}
////	cout << endl;
//
//	if (initflow == requiredflow) {
//		found = true;
//		return;
//	}
//	for (int i = 0; i <= j; i++) {
//		vector<char> v1;
//		vector<char> v2;
//		for (auto x : initflow) {
//			v1.push_back(x[i]);
//		}
//		for (auto x : requiredflow) {
//			v2.push_back(x[i]);
//		}
//		if (v1 != v2) {
//			return;
//		}
//	}
//	cnt++;
//	int L = initflow[0].size();
//	for (int i = j + 1; (i < L) && (!found); i++) {
//		vector<char> v1;
//		vector<char> v2;
//		for (auto x : initflow) {
//			v1.push_back(x[i]);
//		}
//		for (auto x : requiredflow) {
//			v2.push_back(x[i]);
//		}
//		if (v1 == v2) {
//			continue;
//		} else {
//			helper(initflow, requiredflow, i, cnt, found);
//			break;
//		}
//	}
//}
//string process(vector<string> &initflow, vector<string> &requiredflow) {
//	string res = "NOT POSSIBLE";
//	sort(begin(initflow), end(initflow));
//	sort(begin(requiredflow), end(requiredflow));
//	if (initflow == requiredflow) {
//		return "0";
//	}
////	int N = initflow.size();
//	int L = initflow[0].size();
//	int cnt = 0;
////	for (int j = 0; j < L; j++) {
////		if(){}
////		helper(initflow, requiredflow, 0, cnt);
////	}
//	bool found = false;
//	for (int j = 0; j < L; j++) {
//		vector<char> v1;
//		vector<char> v2;
//		for (auto x : initflow) {
//			v1.push_back(x[j]);
//		}
//		for (auto x : requiredflow) {
//			v2.push_back(x[j]);
//		}
//		if (v1 == v2) {
////			cout << "continue:" << j;
//			continue;
//		} else {
//			cnt++;
//			helper(initflow, requiredflow, j, cnt, found);
//			if (found) {
//				stringstream ss;
//				string s;
//				ss << cnt;
//				ss >> s;
//				return s;
//			} else {
////				cout << "not found";
//				return res;
//			}
//		}
////		for (int i = 0; i < N; i++) {
////			if (initflow[i][j] != requiredflow[i][j]) {
////
////				helper(initflow, requiredflow, j, cnt + 1, found);
////				if (found) {
////					return cnt;
////				}
////				break;
////			}
////		}
//	}
//	return res;
//}
//string process2(vector<string> &initflow, vector<string> &requiredflow) {
//	string res = "NOT POSSIBLE";
//	sort(begin(initflow), end(initflow));
//	sort(begin(requiredflow), end(requiredflow));
//	for (auto x : initflow) {
//		cout << x << " ";
//	}
//	cout << endl;
//	for (auto x : requiredflow) {
//		cout << x << " ";
//	}
//	cout << endl;
//
//	if (initflow == requiredflow) {
//		return "0";
//	}
//	int L = initflow[0].size();
//	int i = 0;
//	int cnt = 0;
//	while (i < L) {
//		if (initflow == requiredflow) {
//			stringstream ss;
//			string s;
//			ss << cnt;
//			ss >> s;
//			return s;
//		}
////		for (int j = i; j < i; j++) {
////			string s1;
////			string s2;
////			for (auto x : initflow) {
////				s1+=x[j];
////			}
////			for (auto x : requiredflow) {
////				s2+=x[j];
////			}
////			if (s1 != s2) {
////				return res;
////			}
////		}
//		for (int j = i; j < L; j++) {
//			string s1;
//			string s2;
//			for (auto x : initflow) {
//				s1+=x[j];
//			}
//			for (auto x : requiredflow) {
//				s2+=x[j];
//			}
//			if (s1 != s2) {
//				cnt++;
//				cout << "before flip and sort, initflow" << endl;
//				for (auto x : initflow) {
//					cout << x << " ";
//				}
//				cout << endl;
//				for (auto &x : initflow) {
//					if (x[j] == '0') {
//						x[j] = '1';
//					} else {
//						x[j] = '0';
//					}
//				}
//				cout << "after flip and before sort, initflow" << endl;
//				for (auto x : initflow) {
//					cout << x << " ";
//				}
//				cout << endl;
//				sort(begin(initflow), end(initflow));
//				cout << "i=" << i << " j=" << j << " cnt=" << cnt << endl;
//				for (auto x : initflow) {
//					cout << x << " ";
//				}
//				cout << endl;
//				for (auto x : requiredflow) {
//					cout << x << " ";
//				}
//				cout << endl;
//				for (int k = 0; k < initflow.size(); k++) {
//					if (initflow[k][j] != requiredflow[k][j]) {
//						return res;
//					}
//				}
//				break;
//
//			}
//		}
//		i++;
//	}
//	return res;
//}
//int main() {
////	float a = 1999.19990;
////cout<<"a"<<a<<endl;
//	int Case = 1;
//	int T;
////	char tmp[10000];
////	int p[100];
//	string res;
//	vector<string> names;
//	scanf("%d", &T);
////	getchar();
//	while (T--) {
//		int N, L;
//		scanf("%d%d", &N, &L);
//		vector<string> initflow;
//		vector<string> requiredflow;
////		printf("%d %d\n", N, L);
//		for (int i = 0; i < N; i++) {
//			char tmp[L];
//			scanf("%s", tmp);
//			initflow.push_back(tmp);
//		}
//		for (int i = 0; i < N; i++) {
//			char tmp[L];
//			scanf("%s", tmp);
//			requiredflow.push_back(tmp);
//		}
////		for (auto x : initflow) {
////			cout << x << " ";
////		}
////		cout << endl;
////		for (auto x : requiredflow) {
////			cout << x << " ";
////		}
////		cout << endl;
////		cout<<C<<" "<<F<<" "<<X<<" "<<endl;
//		res = process2(initflow, requiredflow);
//		printf("Case #%d: %s\n", Case++, res.c_str());
//	}
//	return 0;
//}
//
