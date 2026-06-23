#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//A - Square
/*int main(){
    ll t{0};
    cin>> t;
    while (t--) {
        ll w,x,y,z;
        cin >> w >> x >> y >> z;
        if( w==x && x==y && y==z ){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
}*/

//B - Your Name
/*int main(){
    ll test{0};
    cin>> test;
    while (test--) {
        ll n{0};
        cin>>n;
        string s , t;
        cin >> s >> t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){cout << "YES\n";}
        else{cout << "NO\n";}
    }
    return 0;
}*/

//C - Isamatdin and His Magic Wand!
/*int main()
{
    ll test; 
    cin >> test;
    while (test--) {
        ll n;
        cin >> n;
        bool odd = false, even = false;
        int a[n];
        for (int i{0} , x; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) even = true;
            else odd = true;
        }
        if (odd and even) sort(a, a + n);
        for (int i = 0; i < n; ++i) {cout << a[i] << " \n"[i == n - 1];}
    }
}*/