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
 void push(char x){
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
 char pop(){
   char y;
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
bool prcd(char op1,char op2){
    if(op1=='^' ||op1=='*' ||op1=='/' ||op1=='%' ){
        if(op2=='^')
        return false;
        else
        return true;

    }
    else if(op1=='+' ||op1=='-' ){
         if(op1=='+' ||op1=='-' ) 
             return true;
            else
            return false; 
    }
}
/*******************************************/


 int main(){
    Initialize();
     int i=0;
     char infix[1000];
     vector<char>postfix;
     cout<<"enter the infix";
     cin>>infix;
     while(infix[i]!='\0'){
        char symbol=infix[i];
        if(symbol>='a'&& symbol<+'z'){
            postfix.push_back(symbol);
        }
        else
        {
            while(!Isempty() && prcd(stacktop(),symbol)){
                char x=pop();
             postfix.push(x);
            }

        }
     }

 }

