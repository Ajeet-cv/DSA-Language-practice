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
 void stringreverse( char str[]){
    Initialize();
    int i=0;
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }
    i=0;
    while(!Isempty()){
        char x;
        x=pop();
        str[i]=x;
        i++;
    }
    str[i]='\0';
    cout<<str;
    cout<<endl;
    
 }
/***********************************/
 void palindrom( char str[]){
    Initialize();
    int i=0;
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }
    int y=i;
    i=0;
    while(!Isempty()){
        char x;
        
        if(stacktop()==str[i]){
            pop();
            i++;
        }
        else
        {
            break;
        }
    }
    if(y==i)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    
 }
/*********************************/



 int main(){
    Initialize();
    char str[100];
    cin>>str;
    stringreverse(str);
    palindrom(str);
   return 0;
 }

