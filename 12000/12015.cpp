#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int mx=1e9+1,a,ans;
vector<int> v;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin>>N;
	v.push_back(-mx);
	for(int i=0;i<N;i++){
		cin>>a;
		if(v.back()<a) v.push_back(a),ans++;
		else{
			int x = lower_bound(v.begin(),v.end(),a)-v.begin();
			v[x]=a;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
