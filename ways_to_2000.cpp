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

int helper(vector<int> &notes,int currIndex, int n, int remMoney,vector<vector<int>> &dp){
  if(remMoney==0 and currIndex<n) return 1;
  if(currIndex>=n or remMoney<0) return 0;
  if(dp[currIndex][remMoney]!=-1) return dp[currIndex][remMoney];
  int ans=helper(notes,currIndex,n,remMoney-notes[currIndex],dp);
  ans+=helper(notes,currIndex+1,n,remMoney,dp);
  dp[currIndex][remMoney]=ans;
  return ans;

}

void countWaysTo2000(){
	int n=8,remMoney=2000;
	vector<int> notes {10, 20, 50, 100, 200, 500, 1000,2000};
    vector<vector<int>> dp(n,vector<int>(remMoney+1,-1));
  	int a=helper(notes,0,n,remMoney,dp);
  	cout<<a<<endl;
    return ;
}


int main(){
	//////////////
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
	#endif
	/////////////
	countWaysTo2000();
	return 0;
}