#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.erase(10);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    
}
