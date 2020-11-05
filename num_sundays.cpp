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
	int month=0,year=1901,weekday=1;
	int numSundays=0;
	while(year<2001){
		int dayCount;
		if(year%4==0){dayCount=365;}
		else{dayCount=364;}
		month=0;
		while(dayCount>0){
			if(weekday==6){numSundays+=1;}
			if(month==0 or month==2 or month==4 or month==6 
				or month==7 or month==9 or month==11){
				for(int i=0;i<31;i++){
					dayCount-=1;weekday+=1;weekday=weekday%7;
				}
			}
			else if(month==3 or month==5 or month==8 or month==10){
				for(int i=0;i<30;i++){
					dayCount-=1;weekday+=1;weekday=weekday%7;
				}
			}
			else if(month==1 and ((year%100==0  and year%4==0) 
				or (year%100!=0 and year%4==0))){
				for(int i=0;i<29;i++){
					dayCount-=1;weekday+=1;weekday=weekday%7;
				}
			}
			else{
				for(int i=0;i<28;i++){
					dayCount-=1;weekday+=1;weekday=weekday%7;
				}
			}
			month+=1;
		}
		year+=1;
	}
	cout<<numSundays<<endl;
	return;
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