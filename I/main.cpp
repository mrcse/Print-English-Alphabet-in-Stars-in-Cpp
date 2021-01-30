#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=12;i++)
    {
        for (int j=1;j<=12;j++)
        {
            if((i==1 || i==2) && (j>=3 && j<=8)  )
                cout<<"*";
            else if((i==11 || i==12) && (j>=3 && j<=8)  )
                cout<<"*";
            else if((i>=3 && i<=10) && (j==5 || j==6)  )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
