#include<iostream>
using namespace std;
int main()
{
    // char name[20];
    // cout<<"Enter  your name:"<<endl;
    // cin>>name;
    // cout<<"Your Name is :"<<endl ;
    // cout<<name ;
     char name[20];
    cout<<"Enter  your name:"<<endl;
    cin>>name;
    name[2]= '\0';
    cout<<"Your Name is :"<<endl ;
    cout<<name ;
return 0 ;
}