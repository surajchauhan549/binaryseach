// 
#include<iostream>
using namespace std;
int first(int arr[],int size,int key ){
   int s  = 0 ;
   int e = size - 1  ;
   int mid =(s+e)/2;
   int ans  = -1 ;
   while (s<=e){
      if(arr[mid]==key ){
         ans  = mid  ; 
         e = mid-1 ; 
      }
      else if (arr[mid] >key ){
       e = mid-1;
      }
      else if(arr[mid]<key){
         s= mid +1 ;
      }
      mid = (s+e)/2;
   }
   return ans   ;
}
int last(int arr[],int size, int key ){
    

   int s  = 0 ;
   int e = size - 1  ;
   int mid =(s+e)/2;
   int ans  = -1 ;
   while (s<=e){
      if(arr[mid]==key ){
         ans  = mid  ; 
         s= mid+1 ; 
      }
      else if (arr[mid] >key ){
       e = mid-1;
      }
      else if(arr[mid]<key){
         s= mid +1 ;
      }
      mid = (s+e)/2;
   }
   return ans   ;
}
int main()
{
   int even[] = {1,2,3,3,5};
//   	int size = sizeof(arr) / sizeof(int);
// int  x= 3;
   cout<<"first  occ index "<<first(even,5,3)<<endl ;
      cout<<"first  occ index "<<last(even,5,3)<<endl ;

return 0 ;
}