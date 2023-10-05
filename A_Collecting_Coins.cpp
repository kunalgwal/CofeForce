# include <iostream>
# include <algorithm>
using namespace std;
 
 
 
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int Big=-1111;
        Big=max(a,b);
        Big=max(Big,c);
        int ans=Big;
        int A=ans-a;
        int B=ans-b;
        int C=ans-c;
        int d=A+B+C;
 
        if(d<=n){
        int e=n-d;
        if(e%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}