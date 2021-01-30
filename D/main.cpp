#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=12;j++)
        {
            if((i==1 || i==2) && (j>=1 && j<=8))
                cout<<"*";
            else if((i==3 || i==4) && (j==9 || j==10) )
                cout<<"*";
            else if((i==5 || i==6) && (j==10 || j==11 ) )
                cout<<"*";
            else if((i==7 || i==8) && (j==10 || j==11 ) )
                cout<<"*";
            else if((i==9 || i==10) && (j==9 || j==10) )
                cout<<"*";
            else if((i==11 || i==12) && (j>=1 && j<=8) )
                cout<<"*";
            else if(j==1 || j==2)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
