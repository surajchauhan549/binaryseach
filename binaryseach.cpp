/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key ){
int start= 0 ; 
int end= size -1 ; 
int mid = (start+end)/2;

while(start<=end){
if(arr[mid]==key){
   return mid;
}
if(key>arr[mid]){
   start = mid+1;
}
else{
   end= mid-1;
}
mid= (start+end)/2;
}
return -1;
}
int main()
{ ;
   int even[6]= {2,4,6,8,12,18};
   int odd[5]= {3,5,8,11,15};
   int evenIndex= binarysearch(even,6,18);
   cout<<"index of 18 is ="<<evenIndex<<endl ;
   int oddIndex =  binarysearch(odd,5,3);
   cout<<"Index of 3 "<<oddIndex<<endl;
return 0 ;
}