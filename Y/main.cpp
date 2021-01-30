#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=12;i++)
    {
        for(int j=1;j<=12;j++)
        {
            if((i==j || j==13-i) && i<=6)
                cout<<"**";
            else if(j==7 && i>6)
                cout<<"**";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
