// x++ => x = x+1 print then increment
// ++x => incremnet then print.
// x-- => x = x-1
// --x => decrement then print.

#include<iostream>
using namespace std;

int main()
{
    int n, X=0;
    cin>>n;

    while (n--)
    {
        string str;
        cin>>str;
        if(str == "X++" || str == "++X")
        {
            X = X + 1;
        }
        if(str == "--X" || str == "X--")
        {
            X = X - 1;
        }
        str = "";
    }
    cout<<X<<endl;
    
    return 0;
}