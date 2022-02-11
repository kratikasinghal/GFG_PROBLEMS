#include<iostream>
using namespace std;

int setbit(int n){
  if(n==0){
    return 0;
  }
  else{
  int c=1;  
for(int j=0;j<32;j++){
    if(!(n&(1<<j))){
        c++;
    }
    else
    break;
}
return c;
}
}
int main(){
int n;
n=2;
cout<<setbit(n);
}

