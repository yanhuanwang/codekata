//#include<cstdio>
//int main() {
//	int n;
//	while (scanf("%d", &n) == 1) //�����������
//	{
//		int k = 1, s = 0;
//		for (;;) {
//			s += k;
//			if (s >= n) //�������ǵ�k���Խ��ߵĵ�����s-n��Ԫ��
//					{
//				if (k & 1) {
//					printf("%d/%d\n", s - n + 1, k - s + n);
//				} else {
//					printf("%d/%d\n", k - s + n, s - n + 1);
//				}
//				break;
//			}
//			k++;
//		}
//	}
//	return 0;
//}
