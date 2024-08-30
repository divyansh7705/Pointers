#include<iostream>
using namespace std;

int main() {
    int a;
    a=20;
    int *aptr;
    aptr = &a;

    cout << &a;
    cout << aptr;
    cout << *aptr;

    return 0;


}
/* OUTPUT:-
0x61ff080x61ff0820
*/
