#include<iostream>
#include<vector>
using namespace std;
#define STACKSIZE 1000
#include<string.h>
struct skt
{
    char item[STACKSIZE];
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
 char  pop(){
    if(s.TOP==-1){
        cout<<"stack underflow";
        exit(1);
    }
    else{
        
    char y=s.item[s.TOP];
    s.TOP=s.TOP-1;
    return y; 
    }
 }
 /****************************/
 char stacktop(){
    return s.item[s.TOP];
 }
 /**************************/
 void balenceparenthesis( char str[]){
    Initialize();
    int i=0,flag=0;
    while(str[i]!='\0'){ 
        if(str[i]=='(')
        push(str[i]);
       else{
        if(!Isempty())
        pop();
        else{
            flag=1;
            break;
        }
       } 
       i++;
    }
    if(Isempty()){
        if(flag==1)
        cout<<"invalid parenthesis";
        else
        cout<<"valid parenthesis";
    }
    else{
        cout<<"invalid parenthesis";
    }
}
/***********************************/
 
/*********************************/



 int main(){
    Initialize();
    char str[100];
    cin>>str;
    balenceparenthesis(str);
   return 0;
 }

