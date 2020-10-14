#include<iostream>
using namespace std;
int main()
{
double n1,n2,ans;
char oper ,ch;
do{
    cout<<"enter first nummber operator,second number";
    cin>>n1>>oper>>n2;
    switch(oper)
    {
        case '+':
        ans=n1+n2;
        break;
        case '-':
        ans=n1-n2;
        break;
        case '*':
        ans=n1*n2;
        break;
        case '/':
        ans=n1/n2;
        break;
        default :
        ans=0;
        break;
    }
    cout<<"answer"<<ans;
    cout<<"\ndo another(y/n)";
    cin>>ch;
    
}while (ch=='y' || ch=='Y');
    return 0;
}