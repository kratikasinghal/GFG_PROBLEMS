#include<iostream>
using namespace std;

int diffsetbit(int m,int n){
  int c=1;  
for(int j=0;j<32;j++){
    if(!((m^n)&(1<<j))){
        c++;
    }
    else
    break;
}
return c;
}
int main(){
int m,n;
m=52,n=4;
cout<<diffsetbit(m,n);
}

