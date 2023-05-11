// #include<iostream>
// using namespace std;
// int factorial(int n ){
//     int fact = 1;
//     for(int i = 1; i<=n ; i++){
//         fact = fact *i;
//     }
//     return fact ;
// }
// int nCr(int n , int r ){
//     int num = factorial(n);
//     int denom = factorial(r) *factorial(n-r);
//     int ans = num /denom;
//     return  ans ;
// }


// int main()
// {
//     int n , r; 
//     cin >> n >> r ;
//     cout << "Answer is :"<<nCr(n,r)<<endl;

// return 0 ;
// }
//COUNTING NUMBER 
// #include<iostream>
// using namespace std;
// void printCounting(int n ){
//     for (int i = 1 ; i <=n ;i++){
//         cout << i << " ";
//     }
// }
// int main()
// {
//     int n ;
//     cin>>n ;
//     printCounting(n);
// return 0 ;
// }
// PRIME NUMBER 
#include<iostream>
using namespace std;
bool isPrime(int n ){
    for (int i = 2;i<n ; i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1 ;
}
int main()
{
    int n ;
    cin >> n ;
    if (isPrime(n)){
        cout <<"is Prime Number :"<<n<<endl ;
        cout << "Not a prime :"<<n<<endl ;
    }
return 0 ;
}
