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
int arr[(int)1e6];
int sum[(int)1e6];

void solve(){
  //cumulative sum fence
  int n,k;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum[i] = arr[i];
    if(i) sum[i] += sum[i-1];
  }
  int mini = 1e9;
  int idx = 0;
  /*
  7 3
  1 2 6 1 1 7 1
  */
  for (int i = k-1; i < n; i++)
  {
    int r = i;
    int l = r - (k-1);
    int ans = sum[r];
    if(l) ans = ans - sum[l-1];
    if(ans < mini){
      mini = ans;
      idx = l;
    }
  }
  cout << idx + 1 << "\n";
  
  
  
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
