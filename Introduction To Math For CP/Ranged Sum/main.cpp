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
const int sz = 1e6+10;
int arr[sz];
void solve(){
  int n,t;cin>>n>>t;
  while (t--)
  {
    int l,r,v;
    cin >> l >> r>>v;
    arr[l]+=v;
    arr[r+1]-=v;
  }
  for (int i = 1; i <= n; i++)
  {
    arr[i] += arr[i-1];
  }
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  
  
   /*
    2 4 => 1 3
    0 0 0 0 0 0
    0 1 0 0 -1 0
    1 4 => 0 3
    1 1 0 0 -2 0
    -------------
    1 1 0 0 -2 0 
    1 2 2 2 0 0

   */
  
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
