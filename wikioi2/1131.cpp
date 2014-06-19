//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <map>
//using namespace std;
////int f[1000][1000], s, l = 1, i, j, k = 1;
//int main() {
//	string word, arti;
////	cin >> word >> arti;
//	getline(cin,word);
//	getline(cin,arti);
////	cout<<word<<' '<<arti;
//	transform(word.begin(), word.end(), word.begin(), ::toupper);
//	transform(arti.begin(), arti.end(), arti.begin(), ::toupper);
////cout<<word<<' '<<arti;
//	int len = word.length();
//	int p, p0 = 0, cnt = 0;
//	int start = -1;
////	int p=arti.find(word,p0);
////	if(){
////
////	}
//	p = arti.find(word, p0);
////	cout<<p;
//	while (p != -1) {
//		if (p == 0 && p + len < arti.size() && arti[p + len] == ' ') {
//			cnt++;
////			p0 = p + len;
//			start = p;
//		}
//		else if (p + len < arti.size() && arti[p + len] == ' '
//				&& arti[p - 1] == ' ') {
//			cnt++;
////			p0 = p + len;
//			if (start == -1) {
//				start = p;
//			}
//		}
//		p0=p+len;
//		p = arti.find(word, p0);
//	}
//	if (start != -1) {
//		cout << cnt << " " << start << endl;
//	} else {
//		cout << start << endl;
//	}
//	return 0;
//}
