#include <bits/stdc++.h>
using namespace std;


vector<int> res;
void solve(int n)
{
    int i=1;
    for(int j=1;j<=n;j++)
    {
        res.push_back(i);
        i+=2;
    }
}
int main() {
	int n;
	cin>>n;
	solve(n);
	for(auto i:res)
	cout<<i<<" ";
	return 0;
}
