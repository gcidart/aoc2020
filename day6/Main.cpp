#include<bits/stdc++.h>
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define F(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define VE(i,v) for(int i = 0;i < (v).size();i++)

using namespace std;
#define trace(...) cerr<<__FUNCTION__<<":"<<__LINE__<<" "; __f(#__VA_ARGS__, __VA_ARGS__)
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
	cerr<<name<<" : "<<arg1<<endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
	const char *comma=strchr(names+1,',');
	cerr.write(names,comma-names)<<" : "<<arg1<<" | ";
	__f(comma+1,args...);
}
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef unsigned int ui;
typedef vector<ll> vl; 
typedef vector<vl> vvl; 
typedef pair<ll,ll> pll;
typedef vector<pll> vpll; 
#define MOD2 1LL<<32


	
int main()

{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T=1;
	//cin>>T;
	
	
	
	for(int tc=1; tc<=T;tc++)
	{
		int ans = 0;
		string temp;
		map<char, int> mci;
		set<char> sc;
		int cnt = 0;
		while(true) {
			cin>>temp;
			trace(temp);
			if(temp=="$$$")
			{
				int tc = 0;
				for (auto x:mci)
				{
					if(x.second==cnt)
						tc++;
				}
				ans+=tc;
				trace(tc);
				
				cnt = 0;
				mci.clear();
				
			}
			else if(temp=="###")
			{
				int tc = 0;
				for (auto x:mci)
				{
					if(x.second==cnt)
						tc++;
				}
				ans+=tc;
				trace(tc);
				
				cnt = 0;
				mci.clear();
				break;
			}
			else 
			{
				for(char c : temp)
				{
					sc.insert(c);
				}
				for(auto c:sc)
					mci[c]++;
				cnt++;
				sc.clear();
			}
		}
		cout<<ans<<"\n";












		
		





		
		//cout<<"Case #"<<tc<<": "<<"NO"<<"\n";

	}
  
 
 
	return 0;
}
 
 
