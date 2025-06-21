#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n; ";
    cin>>n;
    int a=1;
    int k=1;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int k=1;k<=a;k++){
                if(k%2!=0)cout<<0;
                else cout<<1;
     
            }
            cout<<endl;
            a++;
        }
       else{for(int p=1;p<=a;p++){
        if(p%2!=0)cout<<1;
        else cout<<0;
        
       }
        cout<<endl;
        a++;
       } 
       
    }
}