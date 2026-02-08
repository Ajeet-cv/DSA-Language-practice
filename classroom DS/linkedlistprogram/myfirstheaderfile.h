

struct node{
    char info;
    struct node*next;
};

/************************/
node *getnode(){
    node *p;
    p=(node *)malloc(sizeof(struct node));
    return p;
}
/*************************/
void Insbeg( node**start,char x){
    node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;

}
/********************** */
// void traverse(node *start)
// {
//     node *p;
//     p = start;
//     while (p != NULL)
//     {
//         cout<<p->info<<" ";
//         p = p->next;
        
//     }
    
// }

 /**************************/
 void Insend( node**start,char x){
  node*p=getnode();
  p->info=x;
  p->next=NULL;
  if(*start==NULL){
    *start=p;
  }
  else{
  node*q=*start;
  while(q->next!=NULL){
     q=q->next;
  }
  q->next=p;
  }
 }
 /***********************/
 void Insaft(node*Q,char x){
   node*P=getnode();
   P->info=x;
   node*R=Q->next;
   Q->next=P;
   P->next=R;
 }
 /**************************/
 int countnode(node*start){
   int count=0;
   node*p=start;
   while(p!=NULL){
    count+=1;
    p=p->next;
   }
   return count;
 }
 /*************************/
 node*middlepoint(node*start){
    int c=countnode(start);
    node*p=start;
    for(int i=0;i<c/2;i++){
        p=p->next;
    }
    return p;
 }
/************************/
node*middlenode(node*start){
    node*t=start;
    node*r=start->next;
    while(r!=NULL&&r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
    }
    return t;
}
/************************/
char delbeg(node*start){
    node *p=start;
    start=start->next;
   char x=p->info;
   free(p);
   return x;
}
/************************/
char delend(node*start){
    node*p=start;
    node*q=p->next;
    while(q!=NULL){
        q=q->next;
    }
    char x=q->info;
    free(q);
    return x;
}