//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <algorithm>
//#include <numeric>
//#include <functional>
//#include <vector>
//#include <set>
//#include <list>
//#include <stack>
//#include <map>
//#include <queue>
//using namespace std;
//map<string, string > mm;
//string FindFather(string str)
//{
//	if(mm[str] == str)
//		return str;
//	else
//		return FindFather(mm[str]);
//}
//int main()
//{
//	int n, m, p;
//	scanf("%d%d%d", &n, &m, &p);
//	char str1[22], str2[22];
//	for(int i = 0; i < n; i++)
//	{
//		scanf(" %s", str1);
//		mm[str1] = str1;
//	}
//	for(int i = 0; i < m; i++)
//	{
//		scanf(" %s %s", str1, str2);
//		if(FindFather(str1) != FindFather(str2))
//			mm[FindFather(str1)] = FindFather(str2);
//	}
//	for(int i = 0; i < p; i++)
//	{
//		scanf(" %s %s", str1, str2);
//
//		if(FindFather(str1) == FindFather(str2))
//			printf("safe\n");
//		else
//			printf("cc cry\n");
//	}
//	return 0;
//}
///*
//3 2 1
//AAA
//BBB
//CCC
//AAA CCC
//BBB CCC
//AAA BBB
//*/
