/**
Question: Make a function named make_average() which will take an array of integers and the size of that array and return the average of those values.
**/

#include<bits/stdc++.h>
using namespace std;

#define Tousif_Sign_Out return 0

float make_average()
{
    int s;
    float arr[105], sum = 0.0;

    cout << "Enter the sizee of an arrayy : ";
    cin >> s;

    cout << "Enter the value in the array : ";
    for(int i=0; i<s; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = sum/s;
    return avg;
}

int main()
{
    float avg = make_average();

    cout << "Average is : " << avg << endl;

    Tousif_Sign_Out;
}


