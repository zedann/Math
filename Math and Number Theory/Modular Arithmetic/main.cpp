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
ll add (ll a , ll b , ll c){
    //(a+b)%c = ((a%c)+(b%c))%c
    return ((a%c)+(b%c))%c ;
}
ll sub (ll a , ll b , ll c){
    //(a-b)%c = ((a%c)-(b%c)+c)%c
    return ((a%c)-(b%c)+c)%c ;
}
ll mul (ll a , ll b , ll c){
    //(a*b)%c = ((a%c)*(b%c))%c
    return ((a%c)*(b%c))% c ;
}
void solve(){
  int n;
  int c;
  cin >> n >> c;
  for (int i = 0; i < n; i++)
  {
    cout << i << "---->" << i%c << "\n";
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
