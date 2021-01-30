#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=10;i++)
    {
        for (int j=1;j<=12;j++)
        {
            if(j==i+1 || (j==1 || j==2 || j==11 || j==12))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
