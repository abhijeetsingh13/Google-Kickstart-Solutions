#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lld;
#define pll pair<ll,ll>
#define vll vector<ll>
#define  ln "\n"
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define be begin
#define ub upper_bound
#define lb lower_bound
#define bi binary_search
#define sll set <ll>
#define msll multiset <ll>
#define vpll vector <pair<ll,ll>>
#define mll  map <ll,ll>
#define all(v) v.begin(),v.end()
#define mem1(a)  memset(a,-1,sizeof(a))
#define mem0(a)  memset(a,0,sizeof(a))
#define i1(x) cin>>x
#define i2(x1,x2) cin>>x1>>x2
#define i3(x1,x2,x3) cin>>x1>>x2>>x3
#define i4(x1,x2,x3,x4) cin>>x1>>x2>>x3>>x4
#define o1(x) cout<<x<<ln
#define o2(x1,x2) cout<<x1<<" "<<x2<<ln
#define o3(x1,x2,x3) cout<<x1<<" "<<x2<<" "<<x3<<ln
#define o4(x1,x2,x3,x4) cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<ln
#define rep(i,s,e) for(ll i=s;i<e;i++)
#define rrep(i,s,e) for(ll i=s-1;i>=e;i--)
#define geta(a,n) for(ll i=0;i<n;i++)cin>>a[i];
const ll mod = 1e9 + 7;
int val=0;
void dfs(ll u,vector <ll> adj[],vll &visited)
{
	val++;
	visited[u]=1;
	for(auto i:adj[u])
	{
		dfs(i,adj,visited);
	}
}
void solve()
{
	ll n;
	i1(n);
	vll a(n+1);
	rep(i,0,n)
	{
		i1(a[i+1]);
	}
	vector <ll> adj[n+5];
	rep(i,0,n-1)
	{
		ll k1,k2;
		i2(k1,k2);
		if(a[k1]<a[k2])
		{
			adj[k2].push_back(k1);
		}
		else if(a[k2]<a[k1])
		{
			adj[k1].push_back(k2);
		}
	}
	ll ans=0;
	ll node=0;
	rep(i,1,n+1)
	{
		vll visited(n+1,0);
		val=0;
		dfs(i,adj,visited);
		ll count=val;
		
		//o2(count,i);
		if(count>ans)
		{
			ans=count;
			node=i;
		}
	}
	o1(ans);

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t = 1;
	cin >> t;

	srand(time(0));
	for (ll i = 1; i <= t; i++)
	{

		cout << "Case #" << i << ": ";

		solve();

	}
	return 0;
}