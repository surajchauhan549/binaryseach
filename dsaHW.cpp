// #include <iostream>

// using std::cin;
// using std::cout;
// using std::endl;

// int main()
// {
//     int amount;
//     int count = 1;

//     cout << "Enter the amount \n";
//     cin >> amount;

//     switch (count)
//     {
//     case 1:
//         cout << "Number of 100 notes ";
//         cout << (amount / 100) << "\n";
//         amount = amount % 100;
//     case 2:
//         cout << "Number of 50 notes ";
//         cout << amount / 50 << "\n";
//         if (amount / 50 != 0)
//         {
//             amount = amount % 50;
//         }
//     case 3:
//         cout << "Number of 20 notes ";
//         cout << amount / 20 << "\n";
//         if (amount / 20 != 0)
//         {
//             amount = amount % 20;
//         }
//     case 4:
//         cout << "Number of 1 notes ";
//         cout << amount / 1 << endl;
//         break;
//     default:
//         break;
//     }
//     return 0;
// }
//sum of array 
#include<iostream>
using namespace std;
int sumArr(int arr[],int n ){
    int sum = 0 ;
    for(int i = 0 ; i<n;i++){
        sum +=arr[i];
    }
    return sum;

}
int main()
{
    int size ;
    cin >>size;
    int num[100];
for(int i = 0 ; i<size; i++){
cin>>num[i];
}
int ans= sumArr(num,size);
cout <<"sum of arrAY ="<<ans <<endl ;
return 0 ;
}