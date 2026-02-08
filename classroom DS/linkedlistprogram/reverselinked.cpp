#include<stdlib.h>
#include"headerfiles/myheaderfile.h"
int main(){
    struct node *start=NULL;
orderedinsertion(&start,'c');
orderedinsertion(&start,'g');
orderedinsertion(&start,'a');
orderedinsertion(&start,'b');
orderedinsertion(&start,'d');
orderedinsertion(&start,'l');
traverse(start);
return 0;        
}
