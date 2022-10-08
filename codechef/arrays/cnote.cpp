/*
Chef likes to write poetry. Today, he has decided to write a X pages long poetry, but unfortunately his notebook has only Y pages left in it. Thus he decided to buy a new CHEFMATE notebook and went to the stationary shop. Shopkeeper showed him some N notebooks, where the number of pages and price of the ith one are Pi pages and Ci rubles respectively. Chef has spent some money preparing for Ksen's birthday, and then he has only K rubles left for now.

Chef wants to buy a single notebook such that the price of the notebook should not exceed his budget and he is able to complete his poetry.

Help Chef accomplishing this task. You just need to tell him whether he can buy such a notebook or not. Note that Chef can use all of the Y pages in the current notebook, and Chef can buy only one notebook because Chef doesn't want to use many notebooks.
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t;
	cin>>t;
	int x, y, k, n;
	vector<int> p, c;
	vector<string> ans(t, "UnluckyChef");
	for (int i = 0; i < t; i++){
	    cin>>x>>y>>k>>n;
	    p.resize(n);
	    c.resize(n);
	    for (int j = 0; j< n; j++){
	        cin >> p[j] >> c[j];
	        if(c[j] <= k and p[j] >= x-y)
	        ans[i] = "LuckyChef";
	    }	
	   }
	for(int i = 0; i<t; i++){
	    cout << ans[i] << "\n";
	}
	return 0;
}
/*
Input
The first line of input contains an integer T, denoting the number of test cases. Then T test cases are follow.

The first line of each test case contains four space-separated integers X, Y, K and N, described in the statement. The ith line of the next N lines contains two space-separated integers Pi and Ci, denoting the number of pages and price of the ith notebook respectively.

Output
For each test case, Print "LuckyChef" if Chef can select such a notebook, otherwise print "UnluckyChef" (quotes for clarity).

Link:https://www.codechef.com/problems/CNOTE
*/