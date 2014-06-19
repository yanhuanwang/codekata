//#include <iostream>
//
//using namespace std;
//
//int tone[110];
//int d[110][110];
//int s[110];
//
//int main(){
//    int t;
//    cin>>t;
//    for(int i=1;i<=t;i++){//从1开始，方便S[i]的取值计算
//        cin>>tone[i];
//        s[i]=s[i-1]+tone[i];//优化s[i,j]
//    }
//    int min;
//    for(int i=t-1;i>=1;i--){       //这一顺序
//        for(int j=i+1;j<=t;j++){
//            min=9999999;
//            for(int k=i;k<j;k++){//注意K的取值从i到j-1，,否则越界，因为下面有k+1
//                if(min>d[i][k]+d[k+1][j]+s[j]-s[i-1]){
//                    min=d[i][k]+d[k+1][j]+s[j]-s[i-1];//取最小值
//                }
//            }
//            d[i][j]=min;
//        }
//    }
//    cout<<d[1][t];
//}
