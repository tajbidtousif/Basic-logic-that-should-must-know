/**
Question: Make a function named count_zero() which will take a binary string (Binary string is a string which is consist of only 0 and 1) as parameter and count how many 0’s are there in that string

**/

#include<bits/stdc++.h>
using namespace std;

#define Tousif_Sign_Out return 0

float count_zero()
{
    int cnt = 0; //counting
    string st;

    cout << "Enter the Binary String : " << endl;
    cin >> st;

    for(int i=0; i<st.size(); i++)
    {
        if(st[i] == '0')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
   int zero = count_zero();

    cout << "The total zero is: " << zero << endl;
    Tousif_Sign_Out;
}


