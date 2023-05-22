#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1,x;
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    for(int i=0;i<5;i++)
    {
        int x=a+b;
        vec.push_back(x);
        a=b;
        b=x;
    }
    for(int i=0;i<5;i++)
        { cout<<vec[i]<<" ";}
   return 0;
}
