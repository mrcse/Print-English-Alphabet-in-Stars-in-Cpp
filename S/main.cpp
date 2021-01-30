#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=13;j++)
        {
            if((i==1 || i==2) && (j==1 || j==2 || j==3))
                cout<<" ";
            else if( (i==1 || i==2) && (j>3 && j<=11) )
                cout<<"*";
            else if((i>=3 && i<=5) && (j==1 || j==2))
                cout<<"*";
            else if( (i==6 || i==7) && (j==1 || j==2 || j==3) )
                cout<<" ";
            else if( (i==6 || i==7) && ( j>=4 && j<=10) )
                cout<<"*";
            else if( (i>=8 && i<=10) && (j==12 || j==13) )
                cout<<"*";
            else if( (i==11 || i==12) && (j>=3 && j<=10) )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
