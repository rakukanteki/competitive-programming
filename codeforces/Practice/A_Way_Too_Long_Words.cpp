#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string text;
        cin>>text;
        int length = text.length();
        int count = 0;
        int lastIndex = length-1;
        int firstIndex = 0;
        for(int i=firstIndex+1; i<lastIndex; i++)
        {
            count++;
        }
        if(length>10)
        {
            cout<<text[firstIndex]<<count<<text[lastIndex]<<endl;
        }
        else
        {
            cout<<text<<endl;
        }
    }
    
    return 0;
}