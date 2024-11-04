#include<iostream>
using namespace std;
int main(){
  int Frist=0,Second=1,Usercounter,sum;
  cout<<"Enter Number For Fibonacci : ";
  cin>>Usercounter;
  for(int i=0;i<Usercounter;i++){
    cout<<"-----------\n";
    sum=Frist+Second;
    cout<<"|"<<Frist<<" + "<<Second<<" = "<<sum<<"|\n";
    cout<<"-----------\n";
    Frist=Second;
    Second=sum;
  }
}