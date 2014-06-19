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
//
//struct invalid {
//};
//
//#define MOD 1000000007
//bool is_prime(int n) {
//	if (n < 2) {
//		return false;
//	}
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main(int argc, const char **argv) {
//	string s;
//	cin >> s;
//	map<char, int> m;
//	int maxm = INT_MIN, minm = INT_MAX;
//	for (int i = 0; i < s.size(); i++) {
//		m[s[i]]++;
//		maxm = max(maxm, m[s[i]]);
////		if (m[s[i]] > 0) {
////		minm = min(minm, m[s[i]]);
////		}
//	}
//	for(map<char,int>::iterator it=m.begin();it!=m.end();it++){
//		minm=min(minm,it->second);
//	}
//	if (is_prime(maxm - minm)) {
//		cout << "Lucky Word" << endl;
//		cout << maxm - minm;
//	} else {
//		cout << "No Answer" << endl;
//		cout << 0;
//	}
//}
