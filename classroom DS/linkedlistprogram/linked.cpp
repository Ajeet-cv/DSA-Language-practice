#include<iostream>
#include<stdlib.h>
#include"myfirstheaderfile.h"
using namespace std;
/**********************/
void traverse(struct node *start)
{
   struct node *p;
    p = start;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }
}
/**********************/
int main(){
    
    struct node *start;
    start = NULL;

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
    cout << endl;
    cout << middlepoint(start)->info << " " << endl;
    cout << middlenode(start)->info << endl;
    delbeg(start);
    traverse(start);
    delend(start);

    traverse(start);
    
}
