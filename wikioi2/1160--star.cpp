////简单的模拟，从中间开始填，向四个方向填时很容易发现每次填1,1,2,2,3,3个。。。。。按此规律轻松AC
//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int f[1000][1000],s,l=1,i,j,k=1;
//int main(){
//    int n;
//    cin>>n;
//    i=n+1>>1;j=n+1>>1;
//    f[n+1>>1][n+1>>1]=l;
//    while (l<=n*n){
//           for(int a=1;a<=k;a++)f[i][++j]=++l;
//           for(int a=1;a<=k;a++)f[--i][j]=++l;
//           k++;
//           for(int a=1;a<=k;a++)f[i][--j]=++l;
//           for(int a=1;a<=k;a++)f[++i][j]=++l;
//           k++;
//           }
//    for(int a=1;a<=n;a++) {
//    for(int b=1;b<=n;b++) {
//            if(b!=n)cout<<f[a][b]<<" ";else cout<<f[a][b];
//            if(a+b==n||a==b)s+=f[a][b];
//            }
//            cout<<endl;
//            }
//    cout<<s<<endl;
//    cin>>n;
//    return 0;
//}
