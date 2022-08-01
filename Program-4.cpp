#include <bits/stdc++.h>
using namespace std;


vector<int> res;
vector<int> num={1,2,3,4,5,6,7,8,9};
void solve(vector<int> &nums)
{
    for(auto i:num)
    {
        int cnt=0;
        for(auto j:nums)
        {
            if(j%i==0)
            cnt++;
        }
        res.push_back(cnt);
    }
}
int main() {
	int n;
	cin>>n;
	vector<int> input={1,2,8,9,12,46,76,82,15,20,30};
	
	for(auto i:input)
	cout<<i<<" ";
	cout<<endl;
	solve(input);
	for(auto i:res) // if we need output in form of vector/array
	cout<<i<<" ";
	cout<<endl;
	map<int,int> mp;  // if we need output in the form of a map
	for(int i=0;i<res.size();i++)
	{
	    mp[i+1]=res[i];
	}
	
	for(auto i:mp)
	{
	    cout<<i.first<<':'<<i.second<<" ";
	}
	return 0;
}


// Sample output
// 1 2 8 9 12 46 76 82 15 20 30 
// 11 8 4 4 3 2 0 1 1 
// 1:11 2:8 3:4 4:4 5:3 6:2 7:0 8:1 9:1 
