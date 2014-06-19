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
//
//double process(int R, int C, int M) {
//
//}
//
//int main() {
//	int k = 0;
//	int n = 0;
//	int comb = (1 << k) - 1;
//	while (comb < 1 << (n)) {
//		int x = comb & -comb, y = comb + x;
//		comb = ((comb & ~y) / x >> 1) | y;
//	}
//	float a = 1999.19990;
////cout<<"a"<<a<<endl;
//	int Case = 1;
//	int T;
//	char tmp[10000];
//	int p[100];
//	double res;
//	vector<string> names;
//	scanf("%d", &T);
////	getchar();
//	while (T--) {
//		int R, C, M;
//		scanf("%d%d%d", &R, &C, &M);
////		printf("%lf %lf %lf\n",C,F,X);
//		cout << R << " " << C << " " << M << " " << endl;
//		res = process(R, C, M);
//		printf("Case #%d: %s\n", Case++, res);
//	}
//	return 0;
//}
