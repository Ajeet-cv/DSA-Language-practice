#include<stdlib.h>
#include"headerfiles/myheaderfile.h"
/****************************/
int Mergell(node**start,node**start1){
    node *p,*q,*start2;
    p=(*start);
    q=(*start1);
    start2=NULL;
    while(p!=NULL && q!=NULL){
        if(p->info<q->info){
            Insbeg(&start2,p->info);
            p=p->next;
        }
        else
        {
            Insbeg(&start2,q->info);
            q=q->next;
        }
    }
    while(p!=NULL){
        Insbeg(&start2,p->info);
        p=p->next;
    }
    while(q!=NULL){
        Insbeg(&start2,q->info);
        q=q->next;
    }
    reverse(start2);
    return 0;
}
/****************************/
int main(){
    struct node *start=NULL;
    struct node*start1=NULL;

orderedinsertion(&start,'c');
orderedinsertion(&start,'g');
orderedinsertion(&start,'a');
orderedinsertion(&start,'b');
orderedinsertion(&start,'d');
orderedinsertion(&start,'l');
traverse(start);
cout<<endl;
orderedinsertion(&start1,'f');
orderedinsertion(&start1,'e');
orderedinsertion(&start1,'l');
orderedinsertion(&start1,'n');
orderedinsertion(&start1,'m');
orderedinsertion(&start1,'o');
traverse(start1);
cout<<endl;
Mergell(&start,&start1);
     
}