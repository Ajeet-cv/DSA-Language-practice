#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 // Only unique value will be stored 
 //Store value in sorted order(ascending)
 //Insertion,deletion and search operation have logrithmic(O(logn)),makingthem fast for most uses case.
 //Generaly Impleted using red-black tree or avl tree
 //We can sort it in descending order also using greater<type>   
 set<int>s1;
 s1.insert(10);
 s1.insert(10);
 s1.insert(120);
 s1.insert(9);
 s1.insert(12);
 s1.insert(110);
 for(auto i=s1.begin();i!=s1.end();i++){
    cout<<*i<<" ";
 }
 cout<<"\n";
 if(s1.find(12)!=s1.end())
 cout<<"persent\n";
 else
 cout<<"Absent\n";
 if(s1.count(12))
 cout<<"present\n";
 else
 cout<<"Absent\n";
 set<int,greater<int>>s;
 s.insert(10);
 s.insert(10);
 s.insert(120);
 s.insert(9);
 s.insert(12);
 s.insert(110);
 for(auto i=s.begin();i!=s.end();i++){
    cout<<*i<<" ";
 }
 cout<<"\n";
 cout<<s.count(10)<<" "<<"\n";
 //delete
 s.erase(10);
 s.insert(110);
 for(auto i=s.begin();i!=s.end();i++){
    cout<<*i<<" ";
 }
}