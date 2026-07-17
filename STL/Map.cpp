#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
It store data in key-value pair
Key should be unique
It uses Red-block Tree or AVL for implementation
Insertion,deletion and search operation have logrithmic the complexity
O(log n) ,making them fast for most use cases.
*/
int main(){
 map<int,int>m;
 m.insert(make_pair(10,20));
 m.insert(make_pair(20,300));
 m.insert(make_pair(30,200));
 m.insert(make_pair(40,400));
 m.insert(make_pair(50,500));
 m[100]=60;// it can create and update also.
 m[20]=70;
 m.erase(40);
 for(auto i=m.begin();i!=m.end();i++){
    cout<<i->first<<" "<<i->second<<"\n";
 }

 cout<<"\n";
 if(m.count(20))
 cout<<m[20]<<" ";
  multimap<int,int>m1;
 m1.insert(make_pair(10,20));
 m1.insert(make_pair(20,300));
 m1.insert(make_pair(30,200));
 m1.insert(make_pair(40,400));
 m1.insert(make_pair(50,500));
 //m1[100]=60;// it can create and update also.
 //m1[20]=70;
 m1.erase(40);
 for(auto i=m1.begin();i!=m1.end();i++){
    cout<<i->first<<" "<<i->second<<"\n";
 }
 cout<<"\n";
/*
Unique keys are persent, duplicate keys are not allowed
Not neccessary it should be in sorted form
Hashing
Insert,search,delete constant time execution*/

 unordered_map<int,int>m2;
 m2.insert(make_pair(10,20));
 m2.insert(make_pair(20,300));
 m2.insert(make_pair(30,200));
 m2.insert(make_pair(40,400));
 m2.insert(make_pair(50,500));
 m2[100]=60;// it can create and update also.
 m2[20]=70;
 m2.erase(40);
 for(auto i=m2.begin();i!=m2.end();i++){
    cout<<i->first<<" "<<i->second<<"\n";
 }
}