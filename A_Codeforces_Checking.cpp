# include <iostream>
 
# include <string>
 
 
using namespace std;
 
 
 
int main (){
    int t;
    cin>>t;
    while(t--){
        string c;
        cin>>c;
        string t="codeforces";
 
        bool b=0;
        for(int i=0;i<t.length();i++){
        if(t[i]==c[0]){
            b=1;
            break;
        }
        else{
            b=0;
  
        }
        }
        if(b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
 
    }
    return 0;
 }