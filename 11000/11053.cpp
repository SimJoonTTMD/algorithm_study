#include <iostream>
#include <vector>
using namespace std;

int N,a,ans;
vector<int> v;
int dp[1010]={1, };
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a;
		v.push_back(a);
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(v[j]<v[i]) dp[i]=max(dp[i],dp[j]+1);
		}
		ans=max(ans,dp[i]);
	}
	cout<<ans<<"\n";
	return 0;
}