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
// bool isPower2(ll n){
//   while (n!=1)
//   {
//     if(n%2!=0)
//       return 0;
//     n /= 2;
//   }
//   return 1;
// }
// ll calc(ll a1,ll an , ll n){
//   return ((a1+an)*n)/2;
// }
dd calc_an(dd a , dd r ,dd n){
  return (a*pow(r,n-1));
}
// dd calc_sn(dd a , dd r ,dd n){
//   return ((a*(1-pow(r,n)))/(1-r));
// }
void solve(){
  //A. IQ Test
  dd a1,a2,a3,a4;
  cin>>a1>>a2>>a3>>a4;
  if((a1-a2)==(a2-a3)&&(a2-a3)==(a3-a4)){
    dd d = a1-a2;
    dd an = a4 - d;
    if((an - int(an)) != 0)
      cout << 42 << "\n";
    else 
      cout << an << "\n";
  }else if((a2/a1)==(a3/a2) && (a3/a2)==(a4/a3)){
    dd r = (a2/a1);
    dd an = a4*r;
    if((an - int(an)) != 0)
      cout << 42 << "\n";
    else 
      cout << an << "\n";
  }else {
    cout << 42 << "\n";
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
