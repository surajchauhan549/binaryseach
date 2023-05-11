#include<iostream>
using namespace std;
bool search(int arr[],int key , int size ){
for(int i = 0; i<size;i++){
    if(arr[i]==key);
    return 1 ;
}
return 0 ;
}
int main()
{
    int arr[10]= { 1,2,4,45,-2, 5,6,0, 3,7};
    cout<<"Enter the value of key:"; 
    int key ;
    cin>>key ;
bool found = search(arr,10, key);
if (found){
    cout<<"key is found "<<endl ; 
}
else{
    cout <<"key is not found "<<endl ;

}

return 0 ;
}