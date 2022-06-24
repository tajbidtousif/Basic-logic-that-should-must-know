/**
Question: Make a function named check_array() which will take an array of integers and the size of that array N. It will return a boolean type whether this array has all values from 1 to N or not.
**/


#include<bits/stdc++.h>
using namespace std;

#define Tousif_Sign_Out return 0

bool compare_array(int a[], int b[], int s)
{
    for(int i=0; i<s; i++)
    {
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main()
{
    int s;

    cout << "Enter the size of an array : ";
    cin >> s;

    int arr1[s];

    cout << "Enter the elements of first array : ";
    for(int i=0; i<s; i++)
    {
        cin >> arr1[i];
    }

    int arr2[s];

    cout << "Enter the elements of second array : ";
    for(int i=0; i<s; i++)
    {
        cin >> arr2[i];
    }

    compare_array(arr1, arr2, s);

    if(compare_array(arr1, arr2, s)) cout << "Yes! The array are equal!" << endl;

    else{
        cout << "No! The array are not equal!" << endl;
    }

    Tousif_Sign_Out;
}


