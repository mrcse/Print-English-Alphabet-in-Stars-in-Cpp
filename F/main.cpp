#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=10;j++)
        {
            if(i==1 || i==2 || i==6 || i==7 || j==1 || j==10)
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
