#include <bits/stdc++.h>
using namespace std;

// Basic Math: EXTRACTION OF DIGITS 
// Print number 
// void BasicMath(int n){
    // while (n > 0){
        // int lastDigit = n % 10;
        // cout << lastDigit << " " << endl;
        // n = n/10;
    // }
// }

// Print number in count format
// void countNum(int n){
//     int cnt = 0;
//     while (n>0){
//         cnt = cnt + 1;
//         n = n/10;
//     }
//     cout << cnt;
// }

// Print number in reverse format without 0
// void reverseNum(int n){
//     int revNum= 0;
//     while (n > 0){
//         int lastDigit = n % 10;
//         revNum = (revNum * 10) + lastDigit;
//         n = n/10;
//     }
//     cout << revNum << endl;
// }

// Print number in palindrome (after reverting should stay same) format
// void PalindromeNum(int n){
    // int dup = n;
    // int revNum = 0;
    // while(n > 0){
        // int lastdigit = n % 10;
        // revNum = (revNum * 10) + lastdigit;
        // n = n/10;
    // }
    // cout << revNum << " " << endl;
    // if(revNum == dup) cout << "true";
    // else cout << "false";
// }

// Amstrong Number (Even after cube and adding numbers comes the orignal number
// ex: 1634 - 1^3+ 6^3 + 3^3 + 4^3 = 1634)
// void AmsNum(int n){
//     int dup = n;
//     int sum = 0;
//     while (n > 0){
//         int lastDigit = n % 10;
//         sum = sum + (lastDigit*lastDigit*lastDigit);
//         n = n / 10;
//     }
//     if (sum == dup) cout << "true";
//     else cout << "false";
// }


//Print all divisions 
// void divisiors(int n){
//     // Method 1
//     // for(int i = 1; i <= n; i++){
//     //     if(n % i == 0){
//     //         cout << i << " ";
//     //     }
//     // }
//     // Method 2 (more optimal)
//     vector<int>ls;
//     for(int i = 1; i*i <= n; i++){
//         if(n % i == 0){
//             ls.push_back(i);
//             if((n/i) != i){
//                 ls.push_back(i);
//             }    
//         }    
//     }
//     sort(ls.begin(), ls.end());
//     for(auto it : ls) cout << it << " ";
// }

// Print Chaeck for Prime Number
// void prime(int n){
//     int cnt = 0;
//     for (int i = 1; i*i <= n; i++){
//         if(n % i == 0){
//             cnt++;
//             if((n/i) != i){
//                 cnt++;
//             }
//         }
//     }
//     if (cnt == 2) cout << "true";
//     else cout << "false";
// }


// GCD (Greatest Common Divisor) or HCF (Highest Common Factor)



int main(){
    int n;
    cin >> n;
    // prime(n);
    return 0;
}