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
//int EditDistance(const std::string& source, const std::string& target) {
//	std::string::size_type i, j;
//	int d[101][101] = { 0 };
//
//	for (i = 0; i <= source.length(); i++)
//		d[i][0] = i;
//	for (j = 0; j <= target.length(); j++)
//		d[0][j] = j;
//
//	for (i = 1; i <= source.length(); i++) {
//		for (j = 1; j <= target.length(); j++) {
//			if ((source[i - 1] == target[j - 1])) {
//				d[i][j] = d[i - 1][j - 1]; //²»ÐèÒª±à¼­²Ù×÷
//			} else {
//				int edIns = d[i][j - 1] + 1; //source ²åÈë×Ö·û
//				int edDel = d[i - 1][j] + 1; //source É¾³ý×Ö·û
////                 int edRep = d[i - 1][j - 1] + 1; //source
//				d[i][j] = std::min(edIns, edDel);
////                 d[i][j] = std::min(std::min(edIns, edDel), edRep);
//			}
//		}
//	}
//
//	return d[source.length()][target.length()];
//}
//int helper(string src, string dst) {
//	int res = 0;
//	int i = 0, j = 0;
//	while ((j < src.size()) || (i < dst.size())) {
//		if (src[j] == dst[i]) {
//			i++;
//			j++;
//		} else if (dst[i] == dst[i - 1]) {
//			while (dst[i] == dst[i - 1]) {
//				i++;
//				res++;
//			}
//		} else {
//			while (src[j] == src[j - 1]) {
//				j++;
//				res++;
//			}
//		}
//	}
//
//	return res;
//}
//int process4(vector<string> &inputString) {
//	int res = -1;
//	map<string, int> m;
//	vector<string> vt = inputString;
//	for (auto &x : vt) {
//		x.erase(unique(begin(x), end(x)), end(x));
//		m[x] = x.size();
//	}
//	if (m.size() > 1) {
//		return res;
//	}
//	vector<vector<int>> vvi;
//	for (auto x : inputString) {
//		vector<int> vi;
//		int i = 0;
//		int cnt = 1;
//		while (i < x.size()) {
//			if (x[i] == x[i + 1]) {
//				cnt++;
//			} else {
//				vi.push_back(cnt);
//				cnt = 1;
//			}
//			i++;
//		}
//		vvi.push_back(vi);
//	}
////	for (auto x : vvi) {
////		for (auto y : x) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
//	res = 0;
//	vector<vector<int>> vvib;
//	for (int i = 0; i < vvi[0].size(); i++) {
//		vector<int> vi;
//		for (int j = 0; j < vvi.size(); j++) {
//			vi.push_back(vvi[j][i]);
//		}
//		sort(begin(vi),end(vi));
//		vvib.push_back(vi);
//	}
//
////	cout<<endl;
////	for (auto x : vvib) {
////		for (auto y : x) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
//	for (auto vi : vvib) {
//		if (vi.size() % 2 == 1) {
//			int mid = vi.size() / 2;
//			for (auto x : vi) {
//				res =res+ (abs(vi[mid] - x));
//			}
//		} else {
//			int mid = vi.size() / 2-1;
//			for (auto x : vi) {
////				cout<<"vi[mid] - x="<<vi[mid] - x<<endl;
////				cout<<"abs(vi[mid] - x)="<<abs(vi[mid] - x)<<endl;
//				res =res+ (abs(vi[mid] - x));
////				cout<<"res="<<res<<endl;
//			}
//		}
//	}
//	return res;
//}
//int process3(vector<string> &inputString) {
//	int res = -1;
//	map<string, int> m;
//	vector<string> vt = inputString;
//	for (auto &x : vt) {
//		x.erase(unique(begin(x), end(x)), end(x));
//		m[x] = x.size();
//	}
//	if (m.size() > 1) {
//		return res;
//	}
////	for (int i = 0; i < inputString.size(); i++) {
//	vector<int> v;
//	int cnt = 0, cnt1 = 0, cnt2 = 0;
//	int j = 0, k = 0;
//	while ((j < inputString[0].size()) || (k < inputString[1].size())) {
//		cnt = 0;
//		if (inputString[0][j] == inputString[1][k]) {
//			j++;
//			k++;
//		} else if (inputString[0][j] == inputString[0][j - 1]) {
//			while (inputString[0][j] == inputString[0][j - 1]) {
//				j++;
//				cnt++;
//			}
//		} else {
//			while (inputString[1][k] == inputString[1][k - 1]) {
//				k++;
//				cnt++;
//			}
//		}
//		res += cnt;
//	}
//	return res + 1;
////	}
//}
//string process2(vector<string> &inputString) {
//	map<string, int> m;
//	vector<string> v = inputString;
//	for (auto &x : v) {
//		x.erase(unique(begin(x), end(x)), end(x));
//		m[x] = x.size();
//	}
//	if (m.size() > 1) {
//		return "Fegla Won";
//	}
//	int res = INT_MAX;
//	string q = inputString[0];
//	q.erase(unique(begin(q), end(q)), end(q));
//	if (find(begin(inputString), end(inputString), q) == end(inputString)) {
//		inputString.push_back(q);
//	}
////	for(auto x:inputString){
////		cout<<x<<" "<<endl;
////	}
//
//	for (int i = 0; i < inputString.size(); i++) {
//		int sum = 0;
//		for (int j = 0; j < inputString.size(); j++) {
//			if (j == i) {
//				continue;
//			}
//			sum += helper(inputString[j], inputString[i]);
//		}
//		res = min(res, sum);
//	}
//	stringstream ss;
//	string s;
//	ss << res;
//	ss >> s;
//	return s;
//}
//string process(vector<string> &inputString) {
//	int res = INT_MAX;
//	map<string, int> m;
//	vector<string> v = inputString;
//	for (auto &x : inputString) {
//		x.erase(unique(begin(x), end(x)), end(x));
//		m[x] = x.size();
//	}
//	if (m.size() > 1) {
//		return "Fegla Won";
//	}
//	sort(begin(v), end(v));
////	v.erase(unique(begin(v), end(v)), end(v));
////	if (v.size() == 1) {
////		return "0";
////	}
//	int minLength = INT_MAX;
//	int maxLength = 0;
//	for (auto x : v) {
//		minLength = min(minLength, (int) x.size());
//		maxLength = max(maxLength, (int) x.size());
////		cout<<"minLength="<<minLength<<" maxLength"<<maxLength<<endl;
//	}
//	if (minLength == maxLength) {
//		string q = v[0];
//		q.erase(unique(begin(q), end(q)), end(q));
//		res = 0;
//		int L = q.size();
//		for (auto x : v) {
//			res += x.size() - L;
//		}
//	} else {
//		int sum = 0;
//		for (int i = 0; i < v.size(); i++) {
//			sum = 0;
//			for (int j = 0; j < v.size(); j++) {
//				if (j == i) {
//					continue;
//				}
//				if (v[j].size() > v[i].size()) {
//					sum += v[j].size() - v[i].size();
//				} else {
//					sum += v[i].size() - v[j].size();
//				}
//			}
//			res = min(res, sum);
//		}
//	}
//	stringstream ss;
//	string s;
//	ss << res;
//	ss >> s;
//	return s;
//}
//int main() {
//	vector<string> strv =
//			{
//					"vvvvvvvvnnnqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqwwwiiiiiaaooomuuuuu",
//					"vvvnnnqqqqqqwiiiiiiiiiiiiiiiiiiiiiiiiiiaaoommmmmmmmmmmmmmmmmmmmmmmmuu" };
//	vector<string> strv2 = { "aaabbb", "ab", "aabb" };
////	process4(strv2);
//	cout << process4(strv2) << endl;
////	float a = 1999.19990;
////cout<<"a"<<a<<endl;
//	int Case = 1;
//	int T;
////	char tmp[10000];
////	int p[100];
//	int res = 0;
//	vector<string> names;
//	scanf("%d", &T);
////	getchar();
//	while (T--) {
//		int N, L;
//		scanf("%d", &N);
//		vector<string> inputString;
////		printf("%d %d\n", N, L);
//		for (int i = 0; i < N; i++) {
//			char tmp[101];
//			scanf("%s", tmp);
//			inputString.push_back(tmp);
//		}
//
//		res = process4(inputString);
//		if (res == -1) {
//			printf("Case #%d: Fegla Won\n", Case++);
//		} else {
//			printf("Case #%d: %d\n", Case++, res);
//		}
//	}
//	return 0;
//}
//
