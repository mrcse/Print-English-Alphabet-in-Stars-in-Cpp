#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=12;i++)
    {
        for(int j=1;j<=13;j++)
        {
            if(((i==1 || i==2 || i==11 || i==12) && j<7 ) || ((j==13-i) && i>2))
                cout<<"**";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
