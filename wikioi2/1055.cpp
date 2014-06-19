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
//	int n;
//	cin >> n;
//	map<string, int> m;
//	string s[n];
//	string t;
//	for (int i = 0; i < n; i++) {
//		cin >> t;
//		m[t]++;
//	}
//	map<int, vector<string>> mi;
//	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
//		mi[it->second].push_back(it->first);
//	}
//	cout<<m.size()<<endl;
//	for (map<int, vector<string>>::reverse_iterator it = mi.rbegin();
//			it != mi.rend(); it++) {
//		sort(it->second.begin(), it->second.end());
//		cout<<it->first<<endl;
//		for(int i=0;i<it->second.size();i++){
//			cout<<it->second[i]<<endl;
//		}
//	}
//	return 0;
//}
