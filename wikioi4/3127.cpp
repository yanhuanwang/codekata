//#include<cstdio>
//const int maximum=1000000;
//int steps[maximum+1];
//int step(long k)
//{
//	if (k==1) return 0;
//    if (k>maximum)
//        return (k%2==0?step(k/2)+1:step(3*k+1)+1);
//    if (steps[k]==0)
//        steps[k]=(k%2==0?step(k/2)+1:step(3*k+1)+1);
//    return steps[k];
//}
//int main()
//{
//	int k,a;
//	scanf("%d",&k);
//	for(int i=1;i<=k;++i)
//    {
//        scanf("%d",&a);
//    	printf("%d\n",step(a));
//    }
//    return 0;
//}
