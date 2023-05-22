#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,operation;
    cout<<"enter first operator= ";
    cin>>a;
    cout<<"enter second operator= ";
    cin>>b;
    cout<<"which operation you wanna use"<<endl;
    cout<<"1. ADDITION"<<endl;
    cout<<"2. SUBSTRACTION"<<endl;
    cout<<"3. MULTIPLICATION"<<endl;
    cout<<"4. DIVISION"<<endl;
    cin>>operation;
    switch(operation){
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        case 4:
            cout<<a/b;
            break;
    }
    return 0;
}
