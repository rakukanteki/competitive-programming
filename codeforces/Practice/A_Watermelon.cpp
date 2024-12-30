#include <iostream>
using namespace std;

int main()
{
    int weight, i;
    cin>>weight;
    int parts[weight];

    if(weight>2 && weight%2==0)
    {   
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}