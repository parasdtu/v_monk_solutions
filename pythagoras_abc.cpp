#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull unsigned long long int
#define inf INT_MAX
#define SINF 1e18
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define PI 3.1415926535897932384626433832795

void helper(){
 	int sum = 1000;
    ll a;
    for(a=1;a<=sum/3;a++){
        ll b;
        for (b=a+1;b<=sum/2;b++){
            ll c = sum-a-b;
            if (a*a+b*b==c*c)
               {cout<<a*b*c;return;}
        }
    }
    return ;
}


int main(){
	//////////////
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
	#endif
	/////////////
	helper();
	return 0;
}