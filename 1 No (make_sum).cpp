
/**
Question: Make a function named make_sum() which will take two floating values as parameters and return their sum.

**/



#include<bits/stdc++.h>
using namespace std;

#define Tousif_Sign_Out return 0

float make_sum(float a, float b)
{
    float ans = a+b;
    return ans;
}

int main()
{
    float a, b, ans;

    cout << "Enter Two Floating Numbers: ";
    cin >> a >> b;

    ans = make_sum(a,b);

    cout << "Sum is: " << ans << endl;

    Tousif_Sign_Out;
}

