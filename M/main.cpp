#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=15;j++)
        {
            if((i==1) && (j==1 || j==2 || j==14 || j==15))
                cout<<"*";
            else if((i==2) && (j==1 || j==2 || j==4 || j==12 || j==14 || j==15))
                cout<<"*";
            else if((i==3) && (j==1 || j==2 || j==5 || j==11 || j==14 || j==15))
                cout<<"*";
            else if((i==4) && (j==1 || j==2 || j==6 || j==10 || j==14 || j==15))
                cout<<"*";
            else if((i==5) && (j==1 || j==2 || j==7 || j==9 || j==14 || j==15))
                cout<<"*";
            else if((i==6) && (j==1 || j==2 || j==8 || j==14 || j==15))
                cout<<"*";
            else if((i>=6 && i<=10) && (j==1 || j==2 || j==14 || j==15))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
