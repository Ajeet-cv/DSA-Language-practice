#include<iostream>
#include<vector>
#include<math.h>
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
 int pop(){
   int y;
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
/*********************************/
 int Evaluate(int x,int y,char symbol){
    switch(symbol){
        case '+': return x+y;
        case '*': return x*y;
        case '/': return (x/y);
        case '-': return (x-y);
        case '^': return pow(x,y);
    }     
    
 }
/*********************************/
void postfixevaluation( char Postfix[])
{
    int i=0;
    Initialize();
    while(Postfix[i]!='\0'){
           char symbol=Postfix[i];
           if(symbol>='0'&& symbol<='9'){
            push(symbol-'0');
           }
           else
           {
            int y=pop();
            int x=pop();
            int value=Evaluate(x,y,symbol);
            push(value);
           }
        i++;   
    }
  cout<<pop<<endl;
}
/*******************************************/


 int main(){
    Initialize();
    char expression[100];
    cout<<"enter the expression:";
    
    cin>>expression;
    
    postfixevaluation( expression);
    return 0;
 }

