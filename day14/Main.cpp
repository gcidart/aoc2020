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
#define PI 3.14159265
vector<int> mask1, mask0, maskx;
map<ll, ll> umii;
void addm(ll address, ll value){
    for(auto b:mask1)
    {
        address |= (1LL<<b);
        if(b>35)
            return ;
    }
    set<ll > faddr;
    set<int> smx(all(maskx));
    int bit0 = address & 1;
    if(smx.count(0))
    {
        faddr.insert(0);
        faddr.insert(1);
    }
    else
    {
        faddr.insert(bit0);
    }
    for(int i =1; i<36; i++)
    {
        set<ll> tfaddr;
        ll biti = address & (1LL<<i);
        if(smx.count(i))
        {
            for(auto addr:faddr)
            {
                tfaddr.insert(addr);
                tfaddr.insert(addr | (1LL<<i));
            }
        }
        else if (biti==0)
        {
            for(auto addr:faddr)
            {
                tfaddr.insert(addr);
            }
        }
        else
        {
            for(auto addr:faddr)
            {
                tfaddr.insert(addr | (1LL<<i));
            }
        }
        faddr= tfaddr;
        
    }

    for (auto x: faddr)
    {
        umii[x] = value;
    }
}
int main()

{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T=1;
    	
	
	
	for(int tc=1; tc<=T;tc++)
	{
	    int n;
        cin>>n;
        string temp_mask = "";
        for(int line = 0; line <n; line++)
        {
            string type;
            cin>>type;
            if(type=="mask")
            {
                string am;
                cin >> am;
                temp_mask = am;
                mask1.clear();
                mask0.clear();
                maskx.clear();
                for(int i = 35; i>=0; i--)
                {
                    if(am[i]=='0')
                    {
                        mask0.pb(35-i);
                    }
                    else if(am[i]=='1')
                    {
                        mask1.pb(35-i);
                    }
                    else
                    {
                        maskx.pb(35-i);
                    }
                }
            }
            else
            {
                ll key, value;
                key = stoll(type);
                cin>> value;
                addm(key, value);

                /*for(auto b:mask1)
                {
                    value |= (1LL<<b);
                    if(b>35)
                        return 0;
                }
                for(auto b:mask0)
                {
                    value &= ~(1LL<<b);
                    if(b>35)
                        return 0;
                }
                if(value<0)
                {
                    trace(key, oval, value, temp_mask);
                    for(auto b: mask0)
                        cout<<b<<" ";
                    cout<<"\n";
                    for(auto b: mask1)
                        cout<<b<<" ";
                    cout<<"\n";
                }
                umii[key] = value;
                */
            }
        }
        ll ans = 0;
        for(auto x: umii)
        {
            //trace(x.first, x.second);
            ans+= x.second;
        }
        trace(ans);




        


        
        










		
		





		
		//cout<<"Case #"<<tc<<": "<<"NO"<<"\n";

	}
  
 
 
	return 0;
}
 
 
