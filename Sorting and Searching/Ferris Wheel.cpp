/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <list>
#include <map>
 
using namespace std;
 
#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define MAX 1000000000
#define MIN -1
 
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
 
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
 
#define pq priority_queue
 
void SolveProblem()
{
	ll n, k, ans = 0;
	cin >> n >> k;
	vector<ll>a(n);
	stack<ll>st;
	for (ll i = 0; i < n; i++)
		cin >> a[i];
 
	pq<ll>aa(a.begin(), a.end());
	while (!aa.empty())
	{
		if (aa.top() == k)
			ans++;
		else
		{
			if (st.empty())
			{
				st.push(aa.top());
				ans++;
			}
			else
			{
				if (aa.top() + st.top() <= k)
					st.pop();
				else
				{
					st.push(aa.top());
					ans++;
				}
			}
		}
		aa.pop();
	}
	cout << ans;
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
	SolveProblem();
	return 0;
}
