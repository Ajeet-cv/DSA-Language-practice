#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 list<int>l;
 l.push_back(10);
 l.push_back(20);
 l.push_back(30);
 l.push_back(40);
 cout<<l.front()<<" "<<l.back()<<"\n ";
 l.push_front(9);
 l.push_front(8);
 l.push_front(7);
 l.push_front(6);
 for(auto it=l.begin();it!=l.end();it++){
    cout<<*it<<" ";
 }
 l.pop_back();
 l.pop_front();
 cout<<"\n";
 for(auto i=l.begin();i!=l.end();i++){
    cout<<*i<<" ";
 }
 cout<<"\n";
 for(auto i=l.rbegin();i!=l.rend();i++){
    cout<<*i<<" ";
 }
}