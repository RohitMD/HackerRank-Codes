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
        cout<<Word[i].size()<<endl; /* don't use sizeof() here
        When sizeof() is used with the data types such as int, float, char… etc it simply returns the amount of memory is allocated to that data types
*/
    }
    for (int i=0;i<T;i++)
    {
        for(int j =0; j<Word[i].size() ; j++ ) //j=even means odd numbered word and vice verca
        {
            if(! EvenOdd(j) ) cout<<Word[i][j];  //when j will be odd, even numbered letter will be printed
        }
        cout <<" "; //a space between even and odd printings

        for(int j =0; j<Word[i].size() ; j++ ) //j=even means odd numbered word and vice verca
        {
            if( EvenOdd(j) ) cout<<Word[i][j];  //when j will be even, odd numbered letter will be printed
        }
        cout<<endl;

    }
    return 0;
}
