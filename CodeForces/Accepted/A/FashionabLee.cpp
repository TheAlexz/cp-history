#include <bits/stdc++.h>
 
using namespace std; //biblioteca estandar de c++ para que las que la usen no ocupen
 
//Macros
#define watch(x) cout << (#x) << " es: " << x << endl;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
//Type names
typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<long long int> vlli;
const lli MAX = 1e9+7;//primo mas grande que cabe en un int, int es 2^31 -1
 
//usar double en vez de float por más precision
 
int main(){
 
    fastIO
 
    ulli t=0, n=0;
 
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2==0){
            if((n/2)%2==0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
        else{
            cout << "NO" << endl;
        }
    }
 
 
    return 0;
}
