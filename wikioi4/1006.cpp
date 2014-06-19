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
////=============================================================
////* code: Big Integer
////=============================================================
//class Integer {
//public:
//	//========构造函数====================================
//	Integer(int = 0);
//	Integer(const string&);
//	Integer(const Integer&);
//
//	//========赋值操作符重载===============================
//	Integer& operator =(const Integer&);
//
//	//========算术操作符重载===============================
//	friend Integer operator+(const Integer&, const Integer&);
//	friend Integer operator-(const Integer&, const Integer&);
//	friend Integer operator*(const Integer&, const Integer&);
//	friend Integer operator/(const Integer&, const Integer&);
//	friend Integer operator&(const Integer&, const Integer&);
//
//	//========比较操作符重载===============================
//	friend const bool operator ==(const Integer&, const Integer&);
//	friend const bool operator !=(const Integer&, const Integer&);
//	friend const bool operator >(const Integer&, const Integer&);
//	friend const bool operator >=(const Integer&, const Integer&);
//	friend const bool operator <(const Integer&, const Integer&);
//	friend const bool operator <=(const Integer&, const Integer&);
//
//	//========符合赋值操作符重载===========================
//	Integer& operator +=(const Integer&);
//	Integer& operator -=(const Integer&);
//	Integer& operator *=(const Integer&);
//	Integer& operator /=(const Integer&);
//	Integer& operator %=(const Integer&);
//
//	//=========自增自减操作符重载==========================
//	Integer& operator ++();
//	Integer operator ++(int); //后置
//	Integer& operator --();
//	Integer operator --(int); //后置
//
//	//=========负号操作符重载==============================
//	Integer operator -() const;
//
//	//=========输出操作符重载==============================
//	friend ostream& operator <<(ostream&, const Integer&);
//	deque<int> getData();
//
//private:
//	int sign; //判断是正号还是负号
//	deque<int> data;
//
//	//==========减法=======================================
//	void subtract(const deque<int>& temp1, const deque<int>& temp2);
//
//	//==========加法=======================================
//	void add(const deque<int>& temp1, const deque<int>& temp2);
//
//	int cmpData(const deque<int>& temp1, const deque<int>& temp2) const; //比较数据绝对值的大小
//
//	deque<int> divide(const deque<int>& temp);
//};
//
//Integer::Integer(int i) {
//	if (i == 0) {
//		sign = 0;
//		return;
//	}
//	if (i < 0) {
//		sign = -1;
//		i = -i;
//	} else
//		sign = 1;
//	while (i != 0) {
//		data.push_back(i % 10);
//		i /= 10;
//	}
//}
//
//Integer::Integer(const string& str) {
//	if (str[0] == '-')
//		sign = -1;
//	else
//		sign = 1;
//	for (int i = (str.size()) - 1; i > 0; i--) {
//		data.push_back(str[i] - '0');
//	}
//	if (sign == 1)
//		data.push_back(str[0] - '0');
//	while (!data.empty()) {
//		if (data.back() != 0) {
//			break;
//		}
//		data.pop_back();
//	}
//	if (data.empty()) {
//		sign = 0;
//	}
//}
//
//Integer::Integer(const Integer& temp) {
//	data.clear();
//	sign = temp.sign;
//	data = temp.data;
//}
//
//Integer& Integer::operator =(const Integer& temp) {
//	data.clear();
//	sign = temp.sign;
//	data = temp.data;
//	return *this;
//}
//
//const bool operator ==(const Integer& temp1, const Integer& temp2) {
//	return ((temp1.data == temp2.data) && (temp1.sign == temp2.sign));
//}
//
//const bool operator !=(const Integer& temp1, const Integer& temp2) {
//	return !(temp1 == temp2);
//}
//
//const bool operator >(const Integer& temp1, const Integer& temp2) {
//	if (temp1.sign < temp2.sign)
//		return false;
//	if (temp1.sign > temp2.sign)
//		return true;
//	if (temp1.sign == -1) {
//		if (temp1.data.size() < temp2.data.size())
//			return true;
//		if (temp1.data.size() > temp2.data.size())
//			return false;
//		for (int i = temp1.data.size() - 1; i >= 0; i--) {
//			if (temp1.data[i] > temp2.data[i])
//				return false;
//			if (temp1.data[i] < temp2.data[i])
//				return true;
//		}
//		return false;
//	} else if (temp1.sign == 1) {
//		if (temp1.data.size() > temp2.data.size())
//			return true;
//		if (temp1.data.size() < temp2.data.size())
//			return false;
//		for (int i = temp1.data.size() - 1; i >= 0; i--) {
//			if (temp1.data[i] < temp2.data[i])
//				return false;
//			if (temp1.data[i] > temp2.data[i])
//				return true;
//		}
//		return false;
//	}
//	return false;
//}
//const bool operator >=(const Integer& temp1, const Integer& temp2) {
//	if (temp1 > temp2)
//		return true;
//	if (temp1 == temp2)
//		return true;
//	return false;
//}
//const bool operator <(const Integer& temp1, const Integer& temp2) {
//	return !(temp1 >= temp2);
//}
//const bool operator <=(const Integer& temp1, const Integer& temp2) {
//	return !(temp1 > temp2);
//}
//
//// 算术运算符 {
//Integer operator +(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp += temp2;
//	return temp;
//}
//
//Integer operator -(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp -= temp2;
//	return temp;
//}
//
//Integer operator *(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp *= temp2;
//	return temp;
//}
//Integer operator /(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp /= temp2;
//	return temp;
//}
//
//Integer operator %(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp %= temp2;
//	return temp;
//}
//
//Integer Integer::operator -() const {
//	Integer temp = *this;
//	switch (temp.sign) {
//	case -1:
//		temp.sign = 1;
//		break;
//	case 1:
//		temp.sign = -1;
//		break;
//	default:
//		break;
//	}
//	return temp;
//}
//Integer& Integer::operator +=(const Integer& temp) {
//	if (temp.sign == 0)
//		return (*this);
//
//	if (sign == 0) {
//		(*this) = temp;
//		return (*this);
//	}
//
//	if (sign == temp.sign) {
//		add(deque<int>(data), temp.data);
//		return (*this);
//	}
//	if (sign != temp.sign) {
//		if (cmpData((*this).data, temp.data) == -1) {
//			subtract(temp.data, deque<int>(data));
//			sign = temp.sign;
//			return (*this);
//		} else if (cmpData((*this).data, temp.data) == 1) {
//			subtract(deque<int>(data), temp.data);
//			return (*this);
//		} else {
//			sign = 0;
//			(*this).data.clear();
//			return (*this);
//		}
//	}
//}
//
//Integer& Integer::operator -=(const Integer& temp) {
//	(*this) += (-temp);
//	return (*this);
//}
//
//Integer& Integer::operator *=(const Integer& temp_) {
//	if (sign == 0 || temp_.sign == 0) {
//		sign = 0;
//		data.clear();
//		return (*this);
//	}
//	Integer temp(1), temp1(1);
//	temp.data.clear();
//	int tmp, count = 0, sing1 = sign;
//	deque<int>::const_iterator iter1 = this->data.begin();
//	deque<int>::const_iterator iter2 = temp_.data.begin();
//	for (; iter1 != this->data.end(); ++iter1) {
//		count++;
//		temp1.data.clear();
//		tmp = 0;
//		for (iter2 = temp_.data.begin(); iter2 != temp_.data.end(); ++iter2) {
//			temp1.data.push_back((*iter1) * (*iter2) + tmp);
//			tmp = data.back() / 10;
//			data.back() %= 10;
//		}
//		if (tmp != 0)
//			temp1.data.push_back(tmp);
//		for (int i = 1; i < count; i++) {
//			temp1.data.push_front(0);
//		}
//		temp1.sign = 1;
//		temp += temp1;
//	}
//	(*this) = temp;
//	sign = sing1 * temp_.sign;
//	return (*this);
//}
//
//Integer& Integer::operator /=(const Integer& temp) {
//	if (sign == 0 || temp.sign == 0) {
//		sign = 0;
//		data.clear();
//		return *this;
//	}
//	if (cmpData(data, temp.data) == -1) {
//		sign = 0;
//		data.clear();
//		return *this;
//	}
//
//	(*this).data = divide(temp.data);
//
//	while (!data.empty()) {
//		if (data.back() != 0) {
//			break;
//		}
//		data.pop_back();
//	}
//
//	if (data.empty()) {
//		sign = 0;
//	}
//	return *this;
//}
//
//Integer& Integer::operator %=(const Integer& temp) {
//	if (sign == 0 || temp.sign == 0) {
//		return (*this);
//	}
//	if (cmpData(data, temp.data) == -1) {
//		return (*this);
//	}
//	Integer temp1(1);
//	temp1.data.clear();
//	temp1 = (*this) / temp;
//	temp1 *= temp;
//	(*this) -= temp1;
//	return (*this);
//}
//
//Integer& Integer::operator ++() {
//	*this += 1;
//	return *this;
//}
//
//Integer Integer::operator ++(int) {
//	Integer tmp(*this);
//	++(*this);
//	return tmp;
//}
//
//Integer& Integer::operator --() {
//	*this -= 1;
//	return *this;
//}
//
//Integer Integer::operator --(int) {
//	Integer tmp(*this);
//	--(*this);
//	return tmp;
//}
//
//ostream& operator <<(ostream& output, const Integer& temp) {
//	if (temp.sign == 0) {
//		output << 0;
//		return output;
//	}
//	if (temp.sign == -1)
//		output << "-";
//	deque<int>::const_reverse_iterator iter = temp.data.rbegin();
//	for (; iter != temp.data.rend(); iter++)
//		output << *iter;
//	return output;
//}
//deque<int> Integer::getData() {
//	return this->data;
//}
//void Integer::add(const deque<int>& integer1, const deque<int>& integer2) {
//	data.clear();
//	deque<int>::const_iterator iter1 = integer1.begin();
//	deque<int>::const_iterator iter2 = integer2.begin();
//
//	int tmp = 0;
//	for (; iter1 != integer1.end() && iter2 != integer2.end();
//			iter1++, iter2++) {
//		data.push_back(*iter1 + *iter2 + tmp);
//		tmp = data.back() / 10;
//		data.back() %= 10;
//	}
//	deque<int>::const_iterator iter = (iter1 == integer1.end() ? iter2 : iter1);
//	deque<int>::const_iterator iter_end = (
//			iter1 == integer1.end() ? integer2.end() : integer1.end());
//
//	for (; iter != iter_end; iter++) {
//		data.push_back(*iter + tmp);
//		tmp = data.back() / 10;
//		data.back() %= 10;
//	}
//	if (tmp != 0)
//		data.push_back(tmp);
//}
//
//void Integer::subtract(const deque<int>& integer1, const deque<int>& integer2) {
//	data.clear();
//	deque<int>::const_iterator iter1 = integer1.begin();
//	deque<int>::const_iterator iter2 = integer2.begin();
//
//	int tmp = 0;
//	for (; iter2 != integer2.end(); iter1++, iter2++) {
//		if (((*iter1) - tmp) >= (*iter2)) {
//			data.push_back((*iter1) - (*iter2) - tmp);
//			tmp = 0;
//		} else {
//			data.push_back((*iter1) + 10 - (*iter2) - tmp);
//			tmp = 1;
//		}
//	}
//	deque<int>::const_iterator iter = (iter1 == integer1.end() ? iter2 : iter1);
//	deque<int>::const_iterator iter_end = (
//			iter1 == integer1.end() ? integer2.end() : integer1.end());
//
//	for (; iter <= iter_end - 1; iter++) {
//		if ((*iter) - tmp >= 0) {
//			data.push_back((*iter) - tmp);
//			tmp = 0;
//		} else {
//			data.push_back((*iter) + 10 - tmp);
//			tmp = 1;
//		}
//	}
//
//	deque<int>::const_reverse_iterator iter3 = data.rbegin();
//	for (; iter3 != data.rend();) {
//		if ((*iter3) == 0) {
//			data.pop_back();
//			iter3 = data.rbegin();
//		} else {
//			break;
//		}
//	}
//	if (data.empty())
//		sign = 0;
//}
//
////比较绝对值的大小
//int Integer::cmpData(const deque<int>& temp1, const deque<int>& temp2) const {
//	if (temp1.size() < temp2.size())
//		return -1;
//	if (temp1.size() > temp2.size())
//		return 1;
//
//	deque<int>::const_iterator iter1 = temp1.end() - 1;
//	deque<int>::const_iterator iter2 = temp2.end() - 1;
//	for (int i = 0; i != temp1.size(), i != temp2.size(); i++) {
//		if ((*(iter1 - i)) > (*(iter2 - i)))
//			return 1;
//		if ((*(iter1 - i)) < (*(iter2 - i)))
//			return -1;
//	}
//	return 0;
//}
//
//deque<int> Integer::divide(const deque<int>& divisor) {
//	deque<int> quotients;
//
//	if (cmpData(data, divisor) == -1) {
//		return quotients;
//	}
//
//	Integer tmp;
//	tmp.sign = 1;
//	while (cmpData(tmp.data, divisor) == -1) {
//		tmp.data.push_front(data.back());
//		data.pop_back();
//	}
//
//	quotients.push_front(0);
//	while (cmpData(tmp.data, divisor) != -1) {
//		tmp.subtract(deque<int>(tmp.data), divisor);
//		quotients.front()++;}
//
//	while (!data.empty()) {
//		tmp.data.push_front(data.back());
//		data.pop_back();
//		quotients.push_front(0);
//		while (cmpData(tmp.data, divisor) != -1) {
//			tmp.subtract(deque<int>(tmp.data), divisor);
//			quotients.front()++;}
//		}
//	data = tmp.data;
//	return quotients;
//}
//
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
//void move(int&a, int&b) {
//	a -= b;
//	b <<= 1;
//}
////struct node{
////
////};
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y;
//};
//int main() {
//	int n;
//	cin >> n;
//	int a[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	if (a[0] == a[n - 1]) {
//		printf("%d\n", n);
//		return 0;
//	}
////	vector<int> diff;
//	int cnt = 1, res = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			int diff = a[j] - a[i];
//			int p = i, q = j;
//			for (int k = j; k < n; k++) {
//				if (a[k] - a[p] == diff) {
//					p = k;
//					cnt++;
//				}
//			}
//			res = max(cnt, res);
//			cnt = 1;
//		}
//	}
//	cout << res;
//	return 0;
//}
//
