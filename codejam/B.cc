//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//typedef vector<int> VI;
//typedef vector<VI> VVI;
//typedef vector<string> VS;
//
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
//
//vector<int> TokenizeInt(string s, string ch) {
//	vector<int> ret;
//	vector<string> p = Tokenize(s, ch);
//	for (int i = 0; i < p.size(); i++)
//		ret.push_back(atoi(p[i].c_str()));
//	return ret;
//}
//
//VS Pname;
//VI Pc;
//
//main() {
//	int N, prob = 1;
//	string s;
//	getline(cin, s);
//	for (N = atoi(s.c_str()); N--;) {
//		getline(cin, s);
//		Pname = Tokenize(s, " ");
//		getline(cin, s);
//		Pc = TokenizeInt(s, " ");
//		int mn = 100;
//		string mns = "";
//		for (int i = 0; i < (1<<Pname.size()); i++) {
//			int last = -1, j;
//			int n = Pname.size();
//			for (j = 0; j < Pc.size(); j++) if (!(i&(1<<j))) {
//				if (Pc[j] <= last) break;
//				n--;
//				last = Pc[j];
//			}
//			if (j < Pc.size()) continue;
//			if (n > mn) continue;
//			VS v;
//			for (j = 0; j < Pc.size(); j++) if (i&(1<<j)) v.push_back(Pname[j]);
//			sort(v.begin(), v.end());
//			s = "";
//			for (j = 0; j < v.size(); j++) {
//				if (j) s += " ";
//				s += v[j];
//			}
//			if (n < mn || n == mn && s < mns) {
//				mn = n; mns = s;
//			}
//		}
//		cout << "Case #" << prob++ << ": " << mns << endl;
//	}
//}
