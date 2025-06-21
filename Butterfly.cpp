#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n; ";
cin>>n;
int a=1,z=2*n-1,b=z;

for(int i=1;i<=n;i++){
    cout<<endl;
  
    for(int j=1;j<=2*n-1;j++){
       if(j>a && j<b){
        {cout<<"  ";}}
   
        else {cout<<"* ";}
       


    }a++;b--;
}
 a=(z/2)+1,z=2*n-1,b=(z/2)+1;

for(int i=1;i<=n;i++){
    cout<<endl;
  
    for(int j=1;j<=2*n-1;j++){
     if(j>=a && j<=b)cout<<"  ";
     else cout<<"* ";
       


    }
    a--;b++;
}


    return 0;
}