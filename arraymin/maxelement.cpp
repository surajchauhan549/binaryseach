#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n ){
    int min = INT_MAX;
    
        for(int i = 0 ; i<n;i++){
            if(num[i]<min){
                num[i]= min ;
            }
    }
    return min;
}

int getMax(int num[], int n ){
    int max = INT_MIN;
    
        for(int i = 0 ; i<n;i++){
            if(num[i]>max){
                num[i]= max ;
            }
    }
    return max;
}
int main()

{

int size ; 
cin >>size ;
int num[100]; 
for(int i = 0 ; i<size;i++){
    cin >>num[i];
}
cout<<"Maxi"<<getMax(num, size)<<endl;
cout<<"Min"<<getMin(num, size)<<endl;

return 0 ;
}