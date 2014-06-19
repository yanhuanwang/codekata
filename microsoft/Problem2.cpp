//#include <cstdio>
//#include <cstdlib>
//#include <memory.h>
//#include <algorithm>
////#include <string>
////#include <map>
////#include <unordered_map>
////#include <unordered_set>
////#include <set>
////#include <vector>
//#include <cmath>
//#include <climits>
////#include <queue>
//#include <cassert>
//#include <iostream>
//#include <sstream>
//#include <utility>
////#include <bitset>
//using namespace std;
////#define PI 3.14159265358979323846264338327950288
////vector<string> Tokenize(string s, string ch) {
////	vector<string> ret;
////	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
////		p2 = s.find_first_of(ch, p);
////		if (p2 == -1)
////			p2 = s.size();
////		if (p2 - p > 0)
////			ret.push_back(s.substr(p, p2 - p));
////	}
////	return ret;
////}
////int my_abs(int a) {
////	int i = a >> 31;
////	return ((a ^ i) - i);
////}
////
////vector<int> TokenizeInt(string s, string ch) {
////	vector<int> ret;
////	vector<string> p = Tokenize(s, ch);
////	for (int i = 0; i < p.size(); i++)
////		ret.push_back(atoi(p[i].c_str()));
////	return ret;
////}
//typedef long long ll;
//ll process(ll n) {
//	ll res = 0;
//	ll p = 1000000007, N = 500000004, JSB, t;
//	JSB = (1ll * (n % p) * ((n + 1) % p) * N % p) % p;
//	if (JSB + 2 - 2 * n < 0) {
//		t = (-JSB - 2 + 2 * n) / p + 1;
//	}
//	res = (1ll * JSB * JSB) % p * ((JSB + 2 - 2 * n + t * p) % p) % p;
//	return res;
//}
//ll process2(ll n) {
//	ll res = 0;
//
//	return res;
//}
//int main() {
//	float a = 1999.19990;
////cout<<"a"<<a<<endl;
//	int Case = 1;
//	int T;
//	char tmp[10000];
//	int p[100];
//	ll res;
////	vector<string> names;
//	scanf("%d", &T);
////	getchar();
//	while (T--) {
//		ll N;
//		scanf("%d", &N);
////		printf("%lf %lf %lf\n",C,F,X);
////		cout<<C<<" "<<F<<" "<<X<<" "<<endl;
//		res = process(N);
//		printf("Case #%d: %I64d\n", Case++, res);
//	}
//	return 0;
//}
