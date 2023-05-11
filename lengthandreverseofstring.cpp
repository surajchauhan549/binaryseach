#include<iostream>
using namespace std;
void reverse(char name[], int n ){
    int s = 0 ; 
    int  e  = n-1 ; 
    while (s<e){
swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int count = 0;
    for(int i = 0 ;name[i]!='\0';i++){
        count++;
    }
    return count ;
}
int main()
{
     char name[20];
    cout<<"Enter  your name:"<<endl;
    cin>>name;
    cout<<"Your Name is :"<<endl ;
    cout<<name<<endl ;
    int  le=getlength(name);
    cout <<"Length is  "<<le<<endl;
    reverse(name ,le);
    cout<<"revesre  name is :";
    cout << name ;
    return 0 ;
}