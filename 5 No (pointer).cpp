/**
Question: Make a pointer variable P which points to an integer variable. Make another pointer variable Q which points to the pointer P. Now make another pointer variable R which points to the pointer Q. Now change the value of that integer variable by accessing pointer R.
**/
#include<bits/stdc++.h>
using namespace std;

#define Tousif_Sign_Out return 0


int main()
{
    int x = 5;

    int *p;
    p = &x;

    int *q;
    q = p;

    int *r;
    r = q;

    *r = 20;

    cout << x << endl;

    Tousif_Sign_Out;
}
