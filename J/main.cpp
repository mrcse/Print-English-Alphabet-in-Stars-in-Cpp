#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=12;j++)
        {
            if((i==1 || i==2) && (j>=7 && j<=12)  )
                cout<<"*";
            else if((i==11 || i==12) && (j>=4 && j<=7)  )
                cout<<"*";
            else if((i>=3 && i<=10) && (j==9 || j==10)  )
                cout<<"*";
            else if((i==9 || i==10) && (j==1 || j==2)  )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
