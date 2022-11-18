#include<iostream>
using namespace std;


int main(){
int sum =0,term=2;
for(int i=1;i<=10;i++){
    cout<<term<<" ";
    sum+=term;
    term+=3;
}
cout<<endl;
cout<<"the sum is "<<sum<<endl;
    return 0;
}