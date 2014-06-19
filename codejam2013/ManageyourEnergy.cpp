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
//#include <iomanip>
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
//typedef long long ll;
//ll processHelper(int limit, int R, int init, vector<int>&values, int start) {
//	ll res = 0;
//	if (start == values.size()) {
//		return 0;
//	}
//	if (init > limit) {
//		init = limit;
//	}
//	for (int i = 0; i <= init; i++) {
//		ll t = processHelper(limit, R, R + init - i, values, start + 1);
//		res = max(res, i * values[start] + t);
//	}
//	return res;
//}
//ll process(int E, int R, vector<int> &values) {
//	ll res = 0;
////	cout << E << " " << R << " " << endl;
//	if (E <= R) {
//		res = (ll) accumulate(begin(values), end(values), 0) * E;
//		return res;
//	}
//	if (values.size() == 1) {
////		cout << values[0] << endl;
////		cout << (ll) E * (values[0]) << endl;
//		return (ll) E * (values[0]);
//	}
//	for (int i = R; i <= E; i++) {
//		res = max(res,
//				(ll) (i * values[0])
//						+ processHelper(E, R, R + E - i, values, 1));
//	}
//	return res;
//}
//int strStr(string source, string target) {
//	int res = -1;
//	int i, j;
//	for (i = 0; i < source.size(); i++) {
//		for (j = 0; j < target.size(); j++) {
//			if (target[j] != source[i + j]) {
//				break;
//			}
//		}
//		if (j == target.size()) {
//			return i;
//		}
//	}
//	return res;
//}
//vector<vector<int>> permutation(vector<int> v) {
//	vector<vector<int>> res;
//	sort(begin(v), end(v));
//	res.push_back(v);
//	while (next_permutation(begin(v), end(v))) {
//		res.push_back(v);
//	}
//	return res;
//}
//int main() {
//	string a = "asdasdasdasdddd";
//	string b = "";
//	vector<int> v={1,2,3};
//	vector<vector<int>>v2=permutation(v);
//	for(auto x:v2){
//		for(auto y:x){
//			cout<<y<<" ";
//		}
//		cout<<endl;
//	}
//	cout << strStr(a, b);
//	int Case = 1;
////	int a = 9350183;
////	int b = 5340254;
////cout<<(ll)a*b<<endl;
//	int T;
////	char tmp[10000];
////	int p[100];
//	ll res = 0;
////	vector<string> names;
//	scanf("%d", &T);
//	getchar();
//	while (T--) {
//		string s;
////		getline(cin, s);
//		getline(cin, s);
//		vector<int> NaomiBlocks = TokenizeInt(s, " ");
//		int E = NaomiBlocks[0];
//		int R = NaomiBlocks[1];
//		int N = NaomiBlocks[2];
//		getline(cin, s);
//		vector<int> values = TokenizeInt(s, " ");
////		for (auto x : NaomiBlocks) {
////			cout << x << " ";
////		}
////		cout << endl;
////		for (auto x : values) {
////			cout << x << " ";
////		}
////		cout << endl;
//		res = process(E, R, values);
//		printf("Case #%d: %lld\n", Case++, res);
////		cout << "Case #" << Case++ << ": " << res << endl;
//	}
//	return 0;
//}
