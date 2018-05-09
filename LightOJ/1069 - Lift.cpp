#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int p,l;
    for(int i=1; i<=T; i++)
    {
        cin>>p>>l;


        if(p>l)
        {
            int resul=5*2+4*((p-l)+p)+3*3;
            cout<<"Case "<<i <<": "<<resul<<endl;
        }
        else
        {
            int result=5*2+4*l+3*3;
            cout<<"Case "<<i <<": "<<result<<endl;
        }
    }

    return 0;
}
