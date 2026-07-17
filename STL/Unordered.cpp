#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*it contain only unique elaements
    Search,insert and removal have constant time complex
    It uses hashing technique to achivee it
    */
    unordered_multiset<int>s;
s.insert(10);
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);
for(auto i=s.begin();i!=s.end();i++){
    cout<<*i<<" ";
}
cout<<"\n";
unordered_set<int>s1;
s1.insert(10);
s1.insert(10);
s1.insert(20);
s1.insert(30);
s1.insert(40);
for(auto i=s1.begin();i!=s1.end();i++){
    cout<<*i<<" ";
}
}