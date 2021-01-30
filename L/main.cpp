#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=12;j++)
        {
            if(i==11 || i==12 || j==1 || j==2)
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
