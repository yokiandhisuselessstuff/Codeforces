#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define min_a(a,n) *min_element(a,a+n)
#define max_a(a,n) *max_element(a,a+n)
#define forn(i,n) for(ll i = 0;i < n;++i)
#define fornd(i,n) for(ll i = n;i >= 0;--i)
#define ins(n) insert(n)
#define pb(n) push_back(n)
#define mp make_pair
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'
#define spc " "

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,x,y,z,sx,sy,sz; 

void solve(){


}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  cin>>n;
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  forn(i,n){
    cin>>x>>y>>z;
    sx+=x; sy+=y;sz+=z;
  }
  if(sx == 0 && sy == 0 && sz == 0) cout<<"YES";
  else cout<<"NO";

  return 0;
}

