#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p;
    //two method insert
    p=make_pair(10,20);
    cout<<p.first<<" "<<p.second<<"\n";
    //or
    p.first=30;
    p.second=40;
     cout<<p.first<<" "<<p.second<<"\n";
   pair<string,pair<int,string>>q;
   q.first="ajeet";
   q.second.first=10;
   q.second.second=20;
   //or
   q=make_pair("ajeet",make_pair(10,20));
   cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<"\n";
   pair<pair<int,int>,pair<string,string>>s;
   s=make_pair(make_pair(10,100),make_pair("ajeet","ajeet"));
   cout<<s.first.first<<" "<<s.first.second<<" "<<s.second.first<<" "<<s.second.second<<"\n";
    
}