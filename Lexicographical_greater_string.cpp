#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;


int main() {
    int t;
    char a[MAX];
    cin>>t;
    while(t--)
        {
        cin>>a;
        int l;
        l=strlen(a);
        if(next_permutation(a,a+l))
            cout<<a<<endl;
        else
            cout<<"no answer"<<endl;
    }
    return 0;
}
