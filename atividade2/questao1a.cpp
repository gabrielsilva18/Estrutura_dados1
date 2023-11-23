#include <iostream>

using namespace std;

int main(){
    int i=15,j,*p,*q;
    p = &i;
   *p=20;
    j= 2 * (*p);
    q=&i;
   *p=*q-1;
    q=&j;
   *p=*q-1;

    cout << "O valor de i:" << i << endl;
    cout << "O valor de j:" << j << endl;
}

