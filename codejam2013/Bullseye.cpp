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
//#include "Integer.h"
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
//typedef unsigned __int64 ll;
////typedef Integer ll;
//ll process(ll r, ll t) {
//	ll res = 1;
//	ll sum = 0;
//	ll n = 1;
//	n = (ll) sqrt(t / 2);
////	n = (t / 3)>707106780*2?707106780*2:(t/3);
//	cout << n << endl;
//	while (((t/n)-2*n)<(2*r-1)) {
//		n += 1;
//	}
//	cout << n << endl;
//	sum = n * ((r << 1) - 3) + ((n * (n + 1)) << 1);
////	if (sum > t) {
////	cout << sum << endl;
//	if (sum == t) {
//		return n;
//	}
//	while (sum > t) {
//		n -= 1;
//		sum = n * ((r << 1) - 3) + ((n * (n + 1)) << 1);
//		if (sum <= t) {
//			return n;
//		}
//	}
//	while (sum < t) {
//		n += 1;
//		sum = n * ((r << 1) - 3) + ((n * (n + 1)) << 1);
//		if (sum >= t) {
//			return n;
//		}
//	}
////	}
////	while (1) {
////		sum = n * (2 * r - 3) + 2 * n * (n + 1);
////		if (sum > t) {
////			n--;
////		} else if (sum < t) {
////			n++;
////		} else {
////			return n;
////		}
//////		if (sum > t) {
//////			return n - 1;
//////		}
//////		n++;
////	}
//	return res;
//}
//Integer process2(ll r, ll t) {
//	Integer res;
//	return res;
//}
//int main() {
////	int k = 0;
////	int n = 0;
////	int comb = (1 << k) - 1;
////	while (comb < 1 << (n)) {
////		int x = comb & -comb, y = comb + x;
////		comb = ((comb & ~y) / x >> 1) | y;
////	}
////	float a = 1999.19990;
////cout<<"a"<<a<<endl;
//	int Case = 1;
//	int T;
//	char tmp[10000];
//	int p[100];
//	ll res;
//	vector<string> names;
//	scanf("%d", &T);
////	getchar();
//	while (T--) {
//		ll r, t;
//		scanf("%lld%lld", &r, &t);
////		cout << r << " " << t << endl;
//		res = process(r, t);
//		printf("Case #%d: %lld\n", Case++, res);
//	}
//	return 0;
//}
