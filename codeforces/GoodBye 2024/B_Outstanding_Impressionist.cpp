#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define INF 100000000

bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (ll i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
bool isSorted(const vector<ll> &v){
   if(is_sorted(v.begin(), v.end())){return true;}
   else{return false;}
}

//--------------START CODING HERE--------------
void Solution() {
    int n; cin>>n;
	string ans1="";
	set<int>st;
	map<int,int>mp;
 
	vector<pair<int,int>>vec(n);
	for(int i=0;i<n;i++)
	{
	    cin>>vec[i].first>>vec[i].second;
	}
 
	for(int i=0;i<n;i++)
	{
	    if(vec[i].first==vec[i].second)
	    {
	        st.insert(vec[i].first);
	        mp[vec[i].first]++;
	    }
	}
 
	vector<int>ans;
	for(auto it=st.begin();it!=st.end();it++)
	{
	    ans.push_back(*it);
	}
 
	for(int i=0;i<n;i++)
	{
	    int l=vec[i].first;
	    int r=vec[i].second;
 
	    if(l==r)
	    {
	        if(mp[l]>1)
	        {
	            ans1.push_back('0');
	        }
	        else
	        {
	            ans1.push_back('1');
	        }
				 
	        continue;
	    }
 
	    int lower=lower_bound(ans.begin(),ans.end(),l)-ans.begin();
	    int upper=lower_bound(ans.begin(),ans.end(),r+1)-ans.begin();
	    int len=(upper-1)-lower+1;
 
	    if(len==r-l+1)
	    {
	        ans1.push_back('0');
	    }
	    else
	    {
	        ans1.push_back('1');
 
	    }
	}
 
	cout<<ans1<<endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}