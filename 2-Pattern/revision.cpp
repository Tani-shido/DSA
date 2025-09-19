#include <bits/stdc++.h>
using namespace std;

// Pattern 1
// void pattern1(int n){
//     for (int i = 0; i < n; i++){
//         for (int j = 1; j <= n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Pattern 2
// void pattern2(int n){
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Pattern 3
// void pattern3(int n){
//     for (int i = 1; i < n; i++){
//         for (int j = 1; j <= i+1; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// Pattern 4
// void pattern4(int n){
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j < i+1; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// Pattern 5
// void pattern5(int n){
//     for (int i = 1; i <= n; i++){
//         for (int j = 0; j < n-i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Pattern 6
// void pattern6(int n){
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= n-i+1; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// Pattern 7
// void pattern7(int n){
//     for (int i = 1; i <= n; i++){
        // for(int j = 1; j <= n-i+1; j++){
        //     cout << " ";
        // }
        // for (int j = 1; j <= i*2-1; j++){
        //     cout << "*";
        // }
//         cout << endl;
//     }
// }

// Pattern 8
// void pattern8(int n){
//     for (int i = 0; i < n; i++){
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         for (int j = 0; j < 2*(n-i)-1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// Pattern 9
// void pattern9(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 0; j <= n-i; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < i*2-1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < 2*(n-i)+1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// Pattern 10
// void pattern10(int n){
//     for (int i = 1; i <= 2*n-1; i++){
//         int stars = i;
//         if (i > n) stars = 2*n-i; 
//         for(int j = 1; j <= stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// pattern 11
// void pattern11(int n){
//     int start = 1;
//     for(int i = 1; i <= n; i++){
//         if(i % 2 == 0) start = 0;
//         else start = 1;
//         for(int j = 1; j <= i; j++){
//             cout << start;
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }

// pattern 12
// void pattern12(int n){
//     int space = 2*(n-1);
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         for (int j = 1; j <= space; j++){
//             cout << " ";
//         }
        // for(int j = i; j >= 1; j--){
        //     cout << j;
        // }
//         cout << endl;
//         space -= 2;
//     }
// }

// Pattern 13
// void pattern13(int n){
//     int num = 1;
//     for(int i = 1; i <= n; i++){
//         for(int j = 0; j < i; j++){
//             cout << num << " ";
//             num = num + 1;
//         }
//         cout << endl;
//     }
// }

// Pattern 14
// void pattern14(int n){
//     for(int i = 0; i < n; i++){
//         for (char ch = 'A'; ch <= 'A' + i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// Pattern 15
// void pattern15(int n){
//     for (int i = 0; i < n; i++){
//         for (char ch = 'A'; ch <= 'A' + n-i-1; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// Pattern 16
// void pattern16(int n){
//     for(int i = 0; i < n; i++){
//         char ch = 'A' + i;
//         for(int j = 0; j <= i; j++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// Pattern 17
// void pattern17(int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= n-i-1; j++){
//             cout << " ";
//         }
//         char ch = 'A';
//         for(int j = 0; j <= i; j++){
//             cout << ch;
//             ch++;
//         }
//         char ch2 = 'A' + i - 1;
//         for(int j = 0; j < i; j++){
//             cout << ch2;
//             ch2--;
//         }
//         cout << endl;
//     }
// }

// pattern 18
// void pattern18(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = i; j >= 1; j--){
//             char ch = 'A' + n - j;
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

// Pattern 19
// void pattern19(int n){
//         for(int i = 0; i < n; i++){    
//             for(int j = 0; j < n-i; j++){
//                     cout << "*";
//             }
//             for(int j = 0; j < i; j++){
//                 cout << "&&";
//             }
//             for(int j = 0; j < n-i; j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j <= i; j++){
//                 cout << "*";
//             }
//             for(int j = 1; j < n-i; j++){
//                 cout << "&&";
//             }
//             for(int j = 0; j <= i; j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
// }

// Pattern 20
// void pattern20(int n){
//         for(int i = 0; i < n; i++){
//                 for(int j = 0; j <= i; j++){
//                         cout << "*";        
//                 }
//                 for(int j = 1; j < n-i; j++){
//                         cout << "  ";
//                 }
//                 for(int j = 0; j <= i; j++){
//                         cout << "*";
//                 }
//                 cout << endl;
//         }
//         for(int i = 1; i < n; i++){
//                 for(int j = 0; j <= n-i-1; j++){
//                         cout << "*";
//                 }
//                 for(int j = 0; j < i; j++){
//                         cout << "  ";
//                 }
//                 for(int j = 0; j < n-i; j++){
//                         cout << "*";
//                 }
//                 cout << endl;
//         }
// }

// Pattern 21
// void pattern21(int n){
//         for(int i = 0; i < n; i++){
//                 for(int j = 0; j < n; j++){
//                         if(i == 0 || j == 0 || i == n-1 || j == n-1){
//                                 cout << "*";
//                         }
//                         else cout << " ";
//                 }
//                 cout << endl;
//         }
// }

// Pattern 22
// void pattern22(int n){
//         for(int i = 0; i < n*2-1; i++){
//                 for(int j = 0; j < n*2-1; j++){
//                         int top = i;
//                         int bottom = j;
//                         int right = (2*n - 2) - j;
//                         int left = (2*n - 2) - i;
//                         cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
//                 }
//                 cout << endl;
//         }
// }

// int main(){
//     int n;
//     cin >> n;
//     pattern22(n);
//     return 0;
// }

