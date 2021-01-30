#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=12;j++)
        {
            if((i==1 || i==2) && (j==1 || j==2 || j==10 || j==11))
                cout<<"*";
            else if((i==3 || i==4) && (j==1 || j==2 || j==8 || j==9))
                cout<<"*";
            else if((i==5) && (j==1 || j==2 || j==6 || j==7))
                cout<<"*";
            else if((i==6 || i==7) && (j>=1 && j<=6))
                cout<<"*";
            else if((i==8) && (j==1 || j==2 || j==6 || j==7))
                cout<<"*";
            else if((i==9 || i==10) && (j==1 || j==2 || j==8 || j==9))
                cout<<"*";
            else if((i==11 || i==12) && (j==1 || j==2 || j==10 || j==11))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
