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
 
    int t=0, n=0, x=0, i=1, prov=0;
    bool flag = 0;
 
    cin >> t;
 
    while(t--){
        cin >> n >> x;  //n es el apartamento buscado
        //x es el numero de apartamentos en cada piso
        prov=0;
        if(n==1 || n==2){
            cout << 1 << endl;
        }
        else if(x==1){
            
            cout << n - 1  << endl;
        }
        else{
            /*flag=0;
            i=0;
            while(flag==0){
 
                if(n<=(x*i+2) && n >= (x*i-(n-1)+2) ){
                    cout << i+1 << endl;
                    flag=1;
                }
                else{
                    i++;
                }
 
                
            }*/
            if( (n-2) % x == 0 && x>2){
                cout << n/x + 1 << endl;
            }
            else if(x==2){
                cout << ceil(double(n)/double(x))  << endl;
            }
            else{
                prov = n + (x - ((n-2)%x) ); //
                cout << (prov-2)/x + 1 << endl;
            }
        }
 
    }
    
 
 
    return 0;
}
