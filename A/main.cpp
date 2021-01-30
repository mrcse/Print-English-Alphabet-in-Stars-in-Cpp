#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=i;j<=12;j++)
        {
            if(i==1 && j==6)
                cout<<" ";
            else
                cout<<" ";
        }
        for (int k=1;k<=2*i-1;k++)
        {
            if(k==1 || k==2*i-1)
                cout<<"**";
            else if(i==7 || i==8 || k==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
