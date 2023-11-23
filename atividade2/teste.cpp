#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct no{
int item;
struct no *prox;
}No;
int main(){
No v[4]={{3,v+2},{4,NULL},{10,v+1}};
for (No *p=v;p!=NULL;p=p->prox){
cout<<p->item<<endl;
}
}