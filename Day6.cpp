#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

bool EvenOdd(int n)
{
    if(n%2 == 0) return true;
    else return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;

    string Word[T];
    for (int i=0;i<T;i++)
    {
        cin>>Word[i];

    }
    for (int i=0;i<T;i++)
    {
        for(int j =0; j<Word[i].size() ; j++ )/* don't use sizeof() here
        When sizeof() is used with the data types such as int, float, char… etc it simply returns the amount of memory is allocated to that data types
*/
        {
            if(EvenOdd(j) ) cout<<Word[i][j];  //when j will be odd, odd indexed character will be printed
        }
        cout <<" "; //a space between even and odd printings

        for(int j =0; j<Word[i].size() ; j++ )
        {
            if( !EvenOdd(j) ) cout<<Word[i][j];  //when j will be even, even indexed character will be printed
        }
        cout<<endl;

    }
    return 0;
}
