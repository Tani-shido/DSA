#include <bits/stdc++.h>
using namespace std;


/*
//Void function using parameters
void printName(string name) {
    cout << name << " Mahaan Hai" << endl;
}

int main () {
    string name;
    cin >> name;
    printName(name);
    return 0;
}
*/

/*
//Take two numand print its sum
//Return function

int sum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res;
    return 0;
}
*/

/*

// Pass by value: Orignal stays in int main for function parameter sends a copy 

void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
*/

/**/
//Pass by reference: Orignal value gets in the parameter

void doSomething(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}