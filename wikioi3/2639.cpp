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
//#define MAXN 5005
//int father[MAXN]; /* father[x]��ʾx�ĸ��ڵ�*/
//int val[MAXN]; /* rank[x]��ʾx����*/
///* ��ʼ������*/
//void Make_Set(int x) {
//	father[x] = x; //����ʵ�����ָ���ĸ��ڵ�ɱ仯
//	val[x] = 0;   //����ʵ�������ʼ����Ҳ�����仯
//}
///* ����xԪ�����ڵļ���,����ʱѹ��·��*/
//int Find_Set(int x) {
////	int res = x;
//	if (x != father[x]) {
//		father[x] = Find_Set(father[x]); //�������ʱ��ѹ��·���Ǿ���
//	}
//	return father[x];
//}
///*
// ���Ⱥϲ�x,y���ڵļ���
// ������Ǹ�if else�ṹ���Ǿ��Եģ������������仯
// ���ǣ���ּ�ǲ���ļ������Ⱥϲ���ʵʱ�����ȡ�
// */
//void Union(int x, int y) {
//	x = Find_Set(x);
//	y = Find_Set(y);
//	if (x == y)
//		return;
//	if (val[x] > val[y]) {
//		father[y] = x;
//	} else {
//		if (val[x] == val[y]) {
//			val[y]++;
//		}
//		father[x] = y;
//	}
//}
//void Union2(int x, int y) {
//	x = Find_Set(x);
//	y = Find_Set(y);
//	if (x == y)
//		return;
//	father[x] = y;
//}
//
//int main() {
//	int n, m, p;
////	cin >> n >> m >> p;
//	scanf("%d%d%d\n", &n, &m, &p);
//	map<string, int> m_name;
//	string name[n];
//	for (int i = 0; i < n; i++) {
////		string a;
//		char t[20];
//		scanf("%s\n", t);
////		cin >> name[i];
//		name[i] = (string) t;
//		m_name[name[i]] = i;
//		Make_Set(i);
//	}
//	for (int i = 0; i < m; i++) {
////		string a, b;
////		cin >> a >> b;
//		char t1[20], t2[20];
//		scanf("%s%s\n", t1, t2);
//		string a = (string) t1;
//		string b = (string) t2;
//		Union(m_name[a], m_name[b]);
//	}
////	for (int i = 0; i < n; i++) {
////		cout << father[i] << endl;
////	}
////	cout<<endl;
//	for (int i = 0; i < p; i++) {
//		char t1[20], t2[20];
//		scanf("%s%s\n", t1, t2);
//		string a = (string) t1;
//		string b = (string) t2;
////		cout << m_name[a] << endl;
//		int x = 0;
////		x = Find_Set(m_name[a]);
//		x = father[m_name[a]];
//		int y = 0;
////		y = Find_Set(m_name[b]);
//		y = father[m_name[b]];
//		if (x == y) {
//			cout << "safe" << endl;
//		} else {
//			cout << "cc cry" << endl;
//		}
//	}
//	return 0;
//}
//
