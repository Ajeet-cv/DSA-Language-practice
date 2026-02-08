#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    char info;
    struct node *next;
};

/************************/
node *getnode()
{
    node *p;
    p = (node *)malloc(sizeof(struct node));
    return p;
}
/*************************/
void Insbeg(node **start, char x)
{
    node *p;
    p = getnode();
    p->info = x;
    p->next = *start;
    *start = p;
}
/********************** */
void traverse(node *start)
{
    node *p;
    p = start;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }
}
/**************************/
void Insend(node **start, char x)
{
    node *p = getnode();
    p->info = x;
    p->next = NULL;
    if (*start == NULL)
    {
        *start = p;
    }
    else
    {
        node *q = *start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
}
/***********************/
void Insaft(node **Q, char x)
{
    node *P = getnode();
    P->info = x;
    node *R = (*Q)->next;
    (*Q)->next = P;
    P->next = R;
}
/**************************/
int countnode(node *start)
{
    int count = 0;
    node *p = start;
    while (p != NULL)
    {
        count += 1;
        p = p->next;
    }
    return count;
}
/*************************/
node *middlepoint(node *start)
{
    int c = countnode(start);
    node *p = start;
    for (int i = 0; i < c / 2; i++)
    {
        p = p->next;
    }
    return p;
}
/************************/
node *middlenode(node *start)
{
    node *t = start;
    node *r = start->next;
    while (r != NULL && r->next != NULL)
    {
        t = t->next;
        r = r->next;
        r = r->next;
    }
    return t;
}
/************************/
char delbeg(node **start)
{
    node *p = *start;
    *start = (*start)->next;
    char x = p->info;
    free(p);
    return x;
}
/************************/
void delend(node**start){
    if (*start == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    node *p = *start;

    if (p->next == NULL) {
        cout << "Deleted: " << p->info << endl;
        free(p);
        *start = NULL;
        return;
    }

    node *q = NULL;
    while (p->next != NULL) {
        q = p;
        p = p->next;
    }

    cout << "Deleted: " << p->info << endl;
    free(p);
    q->next = NULL;
}


/**************************/
int delAft(node **q,char x)
{
    node *p = (*q)->next;
    node *r = p->next;
    (*q)->next = r;
     x = p->info;
    free(p);
    return x;
}
 /************************/
 void orderedinsertion(node**start,char x){
      node *p,*q;
      q=NULL;
      p=(*start);
      while(p!=NULL && x>=p->info){
         q=p;
         p=p->next;
      }
      if(q!=NULL){
         Insaft(&q,x);
      }
      else{
        Insbeg(start,x);
      }
 }
/************************/
int main()
{
    struct node *start,*start1;
    start = NULL;
    start1=NULL;

    //  Insbeg('A');
    //  Insbeg('B');
    //  Insbeg('c');
    // Insbeg('D');
    // Insbeg('E');
    Insend(&start, 'a');
    Insend(&start, 'b');
    Insend(&start, 'c');
    Insend(&start, 'd');
    Insend(&start, 'e');
    traverse(start);
    cout<<endl;
    Insaft(&start,'c');
    cout << endl;
    //cout << middlepoint(start)->info << " " << endl;
    //cout << middlenode(start)->info << endl;
   // delbeg(&start);
    cout<<endl;
   traverse(start);
   cout<<endl;
    delAft(&start,'c');
  cout<<endl;
    traverse(start);
    cout<<endl;
    delend(&start);
    cout<<endl;
    traverse(start);
    cout<<endl;
    orderedinsertion(&start1,'d');
    orderedinsertion(&start1,'a');
    orderedinsertion(&start1,'b');
    orderedinsertion(&start1,'g');
     orderedinsertion(&start1,'h');
     traverse(start1);
    
}