#include <bits/stdc++.h>
using namespace std;

// Recursion is a stack overflowing happening due to multiple pending func calls
// which happens because of open functions to solve it we add a condition which is called base condition/case
// void recursion1(int n){
//     if(n > 4) return;
//     else{
//         cout << n;
//         n++;
//         recursion1(n);
//     }
// }

// Basic Recursion questions
// Printing name n times using recursion
// void recursion2(int i ,int n){
    // if(i > n) return;
    // else{
        // cout << "Tanishq" << endl;;
        // 
        // recursion2(i+1, n);
    // }
// 
// }

// Print linearly from 1 to n
// void recursion3(int i, int n){
//     if (i > n) return;
//     else{
//         cout << i << endl;
//         recursion3(i+1 , n);
//     }
// }

// Print from n to 1
// void recursion4(int i, int n){
    // if(i < 1) return;
    // else{
        // cout << i << endl;
        // recursion4(i-1, n);
    // }
// 
// }

// Print from 1 to n by backtracking
// void recursion5(int i, int n){
    // if (i < 1)return;
    // else{
        // recursion5(i-1, n);
        // cout << i << endl;
    // }
// }

// Print from n to 1 by backtracking
// void recursion6(int i, int n){
//     if(i > n) return;
//     else{
//         recursion6(i+1, n);
//         cout << i << endl;
//     }
// }

// Print sum of first n numbers using parameterized way
// void recursion7(int i, int sum){
//     if(i < 1){
//         cout << sum << endl;
//         return;
//     }
//     recursion7(i - 1, sum + i);
// }

// Print sum of first n numbers using functional way
// int recursion8(int n){
    // if(n == 0){
        // return 0;
    // }else{
        // return n + recursion8(n-1);
    // }
// }

// Print factorial of first n numbers parameterized way
// void recursion9(int i,int n, long long fact){
//     if (i > n) {
//         cout << "fact is: " << fact;
//         return;
//     }
//     recursion9(i+1, n, fact*i);
// }

// Print factorial of first n numbers functional way
// int recursion9(int n){
//     if(n == 0) return 1;
//     else{
//         return n * recursion9(n-1);
//     }
// }



int main(){
    int n ;
    cin >> n;
    recursion10(n);
    return 0;
}