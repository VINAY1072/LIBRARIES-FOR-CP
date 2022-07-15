#ifndef USEFULLLIBRARY_H_
#define USEFULLLIBRARY_H_

#include <bits/stdc++.h>
using namespace std;

void remove_duplicates(vector<int> &Array)
{
    vector<int>::iterator ip;
    sort(Array.begin(), Array.end());
    ip = unique(Array.begin(), Array.end());
    Array.resize(distance(Array.begin(), ip));
}

void remove_duplicates(vector<double> &Array)
{
    vector<double>::iterator ip;
    sort(Array.begin(), Array.end());
    ip = unique(Array.begin(), Array.end());
    Array.resize(distance(Array.begin(), ip));
}

void remove_duplicates(vector<char> &Array)
{
    vector<char>::iterator ip;
    sort(Array.begin(), Array.end());
    ip = unique(Array.begin(), Array.end());
    Array.resize(distance(Array.begin(), ip));
}

void remove_duplicates(vector<string> &Array)
{
    vector<string>::iterator ip;
    sort(Array.begin(), Array.end());
    ip = unique(Array.begin(), Array.end());
    Array.resize(distance(Array.begin(), ip));
}

int Even_count(vector<int> &Array)
{
    int eve = 0;
    for (int i = 0; i < Array.size(); i++)
    {
        if (Array[i] % 2 == 0)
        {
            eve++;
        }
    }
    return eve;
}

int Odd_count(vector<int> &Array)
{
    int odd = 0;
    for (int i = 0; i < Array.size(); i++)
    {
        if (Array[i] % 2 != 0)
        {
            odd++;
        }
    }
    return odd;
}

int __lcm(int a, int b)
{
    return ((a * b) / __gcd(a, b));
}

int Array_XOR(vector<int> &Array)
{
    int c = 0;
    for (int i = 0; i < Array.size(); i++)
    {
        c = c ^ Array[i];
    }
    return c;
}

#endif