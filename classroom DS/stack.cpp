#include<iostream>
#include<vector>
using namespace std;
#define STACKSIZE 10
struct skt
{
    int item[STACKSIZE];
    int TOP;
};
struct skt s;
/*******************************/
void Initialize(){
    s.TOP=-1;
}
/*******************************/
 bool Isempty(){
  if(s.TOP==-1)
  return true;
  else
  return false;
 }
 /***************************/
 void push(int x){
    if(s.TOP==STACKSIZE-1){
        cout<<"stack overflow :"<<endl;
        exit(1);
    }
    else{
        s.TOP=s.TOP+1;
        s.item[s.TOP]=x;
    }
 }
 /**************************/
 int pop(int y){
    if(s.TOP==-1){
        cout<<"stack underflow";
        exit(1);
    }
    else{
    y=s.item[s.TOP];
    s.TOP=s.TOP-1;
    return y; 
    }
 }
 /****************************/
 int stacktop(){
    return s.item[s.TOP];
 }
 /**************************/
 int decimaltobinary(int n){ 
    
    Initialize();
    int r,x;
    while(n!=0){
         r=n%2;
        n=n/2;
        push(r);
    }
    while(!Isempty()){
       x=pop(r);
       cout<<x<<" ";
    }
    cout<<endl;
 }
 /*************************/
 int decimaltooctal(int n){
    Initialize();
    int r,x;
    while(n!=0){
         r=n%8;
        n=n/8;
        push(r);
    }
    while(!Isempty()){
       x=pop(r);
       cout<<x<<" ";
    }
    cout<<endl;
 }
 /**************************/
 int decimaltohexadecimal(int n){
  Initialize();
    int r,x;
   char DAT[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    while(n!=0){
         r=n%16;
        n=n/16;
        push(r);
    }
    while(!Isempty()){
       x=pop(r);
       cout<<DAT[x]<<" ";
    }
    cout<<endl;
}
/***********************************/
 int decimaltoanybase(int n,int b){
  Initialize();
    int r,x;
   char DAT[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    while(n!=0){
         r=n%b;
        n=n/b;
        push(r);
    }
    while(!Isempty()){
       x=pop(r);
       cout<<DAT[x]<<" ";
    }
    cout<<endl;
}
/*********************************/



 int main(){
    Initialize();
//     push(100);
//     push(200);
//     push(400);
//     push(500);
//     push(600);
//     push(700);
//    for(int i=0;i<STACKSIZE;i++){
//     cout<<s.item[i]<<"  "<<endl;
//    }
    decimaltobinary(10);
    decimaltooctal(10);
    decimaltohexadecimal(10);
    decimaltoanybase(10,2);
    decimaltoanybase(10,8);
  decimaltoanybase(10,16);
   
 }

