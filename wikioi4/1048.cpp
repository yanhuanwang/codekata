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
//    for(int i=1;i<=t;i++){//��1��ʼ������S[i]��ȡֵ����
//        cin>>tone[i];
//        s[i]=s[i-1]+tone[i];//�Ż�s[i,j]
//    }
//    int min;
//    for(int i=t-1;i>=1;i--){       //��һ˳��
//        for(int j=i+1;j<=t;j++){
//            min=9999999;
//            for(int k=i;k<j;k++){//ע��K��ȡֵ��i��j-1��,����Խ�磬��Ϊ������k+1
//                if(min>d[i][k]+d[k+1][j]+s[j]-s[i-1]){
//                    min=d[i][k]+d[k+1][j]+s[j]-s[i-1];//ȡ��Сֵ
//                }
//            }
//            d[i][j]=min;
//        }
//    }
//    cout<<d[1][t];
//}
