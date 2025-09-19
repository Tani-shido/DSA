// Pairs

#include <bits/stdc++.h>
using namespace std;

// void Pair(){
//     pair<int , int> p = {1 , 3};
//     cout << p.first << " " << p.second;
//     cout << endl;
//     pair<int , pair<int , int>> q = {1, {2, 3}};
//     cout << q.first << " " << q.second.second;
//     cout << endl;
//     pair<int, int> arr[] = {{1,2} , {3,3} , {4,5} , {1,5} , {3,4}};
//     cout << arr[2].first;
// }

// 1 Container: Vector
// void Vectors(){
// At this point, v is empty. v = {}
    // vector<int> v;
// Adds the integer 1 to the end of the vector 'v'.
// 'push_back' copies the value into the vector.
// v is now {1}
    // v.push_back(1);
//  Adds the integer 2 to the end of the vector 'v'.
// 'emplace_back' constructs the value directly inside the vector.
// For simple types like int, it's very similar to push_back.
// For complex objects, emplace_back can be more efficient.
// v is now {1, 2}
    // v.emplace_back(2);


//     // --- Vector of Pairs ---
// // Declared a vector ve where every element it in a pair of integers
//     vector<pair<int , int>>ve;
//     // this adds a pair of int
//     ve.push_back({1,2});
//     // this adds a pair of int too, more efficiently
//     ve.emplace_back(1,2);

    // --- Different Ways to Initialize a Vector ---
// vector 'w' and initializes it with 5 elements each value is 100. w={100,100,100,100,100}
    // vector<int>w(5, 100);

// vector 'w' and initializes it with 5 elements each valueis 0. w = {0,0,0,0,0}
    // vector<int> w(5);

// vector 'w1' and initializes it with 5 elements each value 20. w1 = {20, 20, 20, 20, 20}
    // vector<int>w1(5,20);

// //vector 'w2' and initializes it as a copy of vector 'w1'. w2 will also be {20, 20, 20, 20, 20}
//     vector<int> w2(w1);

    // ----------------ITERATORS--------------
// Iterator means it points to the memory address 
// Data Structure - Data Type - iterator - name - address

// vector of integers named 'x'.
//     vector<int>x(5 , 100);
// // Declares an iterator 'it' and makes it point to the beginning of vector 'x'.
//     vector<int>::iterator it = x.begin();
// // iterator one position forward
//     it++;
// // to get the value it points to
//     cout << *(it) << " ";
// // iterator two more positions forward
//     it = it + 2;
// // print the iterator value
//     cout << *(it) << endl;

// creates a second vector named 'y'.
    // vector<int>y(5 , 100);
    // vector<int>::iterator ot = y.end();
    // vector<int>::iterator ot = y.rend();
    // vector<int>::iterator ot = y.rbegin();
    // cout << "First element (using []): " << y[0];
    // cout << endl;
    // cout << "First element (using .at()): " << y.at(0);
    // cout << endl;
    // cout << "Last element (using .back()): " << y.back();
    // cout << endl;

// Itereator with loop in vector
// to print all the elements of the vector
// for (vector<int>::iterator iter = y.begin(); iter != y.end(); iter++){
//     cout << "For loop printing elements of vector 'v': " << *(iter) << " " << endl;;
// }
// to print all the elements of vector
// for (auto iter = y.begin(); iter != y.end(); iter++){
//     cout << "For loop printing elements of vector 'v' using auto: " << *(iter) << " " << endl;;
// }
// for (auto iter : y){
//     cout << "For loop printing elements of int data type 'v': " << iter << " " << endl;;
// }

// Deletion in a vector
// erase.(address-of-iter);
// y.erase(y.begin()+1);
// cout << "After erasing begin + 1, vector is: " << y[4];
// cout << endl;
// y.erase(y.begin()+1, y.begin()+3);
// cout << "After erasing in bulk, vector is: " << y[2];
// cout << endl;

// // Insert 
// vector<int>z(2, 20);
// z.insert(z.begin(), 300);
// z.insert(z.begin()+2, 200);
// z.insert(z.begin()+3, 3, 60);
// vector<int>p(2, 30);
// z.insert(z.end(), p.begin(), p.end());
// z.pop_back();
// // v1= {1,2} v2= {3,4}
// // v1.swap.(v2); //v2= {1,2} v1= {3,4} 
// p.clear();
// cout << "After inserting: " << z.size();
// }

// 2 Container: List
// void List(){
//     list<int> ls;
//     ls.push_back(2);
//     ls.emplace_back(4);
//     ls.push_front(1);
//     // rest functions are same as vector:
//     // begin, end, rbegin, rend, clear, insert, size, swap
// }

// 3 Container: Deque
// void Deque(){
//     deque<int>dq;
//     dq.push_back(2);
//     dq.emplace_back(4);
//     dq.push_front(1);
//     // rest functions are same as vector:
//     // begin, end, rbegin, rend, clear, insert, size, swap
// }

// 4 Container: Stack
// void Stack(){
//     // LIFO: Last in First out
//     stack<int>st;
//     st.push(2);
//     st.push(4);
//     st.push(1);
//     st.push(8);
//     st.push(3);
//     st.emplace(6);
//     cout << st.top() << endl;
//     st.pop();
//     cout << st.top() << endl;
//     cout << st.size() << endl;
// }

// 5 Container: Queue
// void Queue(){
//     // FIFO: First in First Out
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(5);
//     q.emplace(8);
//     q.back() += 2;
//     cout << q.back() << endl;
//     cout << q.front() << endl;;
//     q.pop();
//     cout << q.front() << endl;
// }

// 6 Container: Priority Queue
// void PQ(){
    // High: Max-Heap
    // priority_queue<int>pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(4);
    // pq.push(6);
    // pq.emplace(2);
    // cout << "Priority Queue: High Priority queue top(): " << pq.top() << endl;
    // pq.pop();
    // cout << "Priority Queue: High Priority queue pop(): " << pq.top() << endl;
    // Low: Min-Heap
    // priority_queue<int, vector<int>, greater<int>>lpq;
    // lpq.push(1);
    // lpq.push(2);
    // lpq.push(4);
    // lpq.push(6);
    // lpq.emplace(2);
    // cout << "Priority Queue: Low Priority queue top(): " << lpq.top() << endl;
    // lpq.pop();
    // cout << "Priority Queue: Low Priority queue pop(): " << lpq.top() << endl;
// }

// 7 Container: Set
// void Set(){
    // everything sorted, unique
//     set<int>s;
//     s.insert(1);
//     s.insert(4);
//     s.insert(2);
//     s.emplace(3);
//     s.insert(5);
//     auto it = s.find(3);
//     s.erase(5);
//     int cnt = s.count(1);
//     auto it = s.find(4);
//     s.erase(it);
//     auto it1 = s.find(2);
//     auto it2 = s.find(4);
//     s.erase(it1, it2);
// }

// 8 Container: MultiSet
// void MulitSet(){
//     // Sorted, Not unique
//     multiset<int>ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);
//     // ms.erase(1); will erase all 1's
//     int cnt = ms.count(1); //Count the num of 1's
//     ms.erase(ms.find(1)); //definig address deletes only that guy
//     ms.erase(ms.find(1), ms.find(1));
// }

// 9 Container: UnorderedSet
// void UnOderedSet(){
//     unordered_set<int>unos;
// }

// 10 Container: Map
// void Map(){
//     // map stores unique values in key in sorted order: val format (where key or val can be anything).
//     map<int, int>mp;
//     mp[1] = 1;
//     mp.emplace(2, 3);
//     mp.insert({3,4});
//     map<int, pair<int, int>>mp2;
//     map< pair<int, int>, int>mp3;
//     mp3[{4,5}] = 2;
//     for(auto it : mp) {
//         cout << it.first << " " << it.second << endl;
//     }
//     cout << mp[1];
//     cout << mp[5] << endl;
// }

// 11 COntainer: Mutlimap
// void Mulmp(){
//     // Multi-map stores any values in key but int sorted order: val format (where key or val can be anything).
//     multimap<int , int>mulmp;
// }

// 12 COntainer: Unorderedmap
// void unOrderedMap(){
//     // unordered-map stores any values in key in any order: val format (where key or val can be anything).
//     unordered_map<int , int>mulmp;
// }

// int main (){
//     unOrderedMap();
//     return 0;
// }