#include<iostream>
using namespace std;

int main()
{   
    long long int n, m, a;
    cin>>n>>m>>a;

    long long int width_tiles = m/a;
    long long int length_tiles = n/a;
    
    if(m%a != 0)
    {
        width_tiles = width_tiles + 1;
    }
    if(n%a != 0)
    {
        length_tiles = length_tiles + 1;
    }

    cout<<length_tiles*width_tiles<<endl;

    return 0;
}