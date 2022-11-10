#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define S second
#define F first
#define MP make_pair
#define endl "\n"
using namespace std;
// bool isPrime(ll n)
// {
//     if (n <= 1)
//         return false;
//      for (int i = 2; i < n; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }
// ll gcd(ll a,ll b){
//     while (b!=0)
//     {
//         ll temp = a;
//         a = b;
//         b =temp%a;
//     }
//     return a;
// }
// ll lcm(int a,int b){
//     return (a*b)/__gcd(a,b);
// }
// ll calc(ll a1,ll an , ll n){
//   return ((a1+an)*n)/2;
// }
// bool isPower2(ll n){
//   while (n!=1)
//   {
//     if(n%2!=0)
//       return 0;
//     n /= 2;
//   }
//   return 1;
// }
int arr[200005];
void solve(){
  ll n , k , q;
  cin >> n >> k >> q;
  for (int i = 0; i < n; i++)
  {
    int l,r;
    cin >> l >>r ;
    arr[l]++;
    arr[r+1]--;
  }
  for (int i = 1; i <= 200005; i++)
  {
    arr[i] += arr[i-1];//ranged sum
  }
  for (int i = 1; i <= 200005; i++)
  {
    arr[i] >= k ? arr[i] =1 : arr[i] =0 ;
  }
  for (int i = 1; i <= 200005; i++)
  {
    arr[i] += arr[i-1];//ranged sum again to make array from zeros and ones
  }
  //now take questions and 
  for (int i = 0; i < q; i++)
  {
    int l,r;
    cin >> l >> r;
    if(l) cout << arr[r] - arr[l-1] << "\n";
    else cout << arr[r]<< "\n";
  }
  
}   
void init() {
    IOS;
}
int main()
{   
init();
int t = 1;
// cin>>t;
while (t--)
  solve();
    
}   
