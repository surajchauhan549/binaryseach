#include<iostream>
using namespace std;
int main()
{
int  n ;
cin >>n ;
bool Isprime = 1 ;
for (int i =2 ; i<n;i++){
    if(n%i==0){
        //cout << "not prime ";
          Isprime = 0;
          break ;
    }
}
if(Isprime==0){
    cout << "not prime = "<<endl;

}
else{
    cout << " prime = "<<endl;
}
return 0 ;
}