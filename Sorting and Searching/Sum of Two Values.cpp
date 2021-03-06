/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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
#define MAX 1000000007
#define MIN -1
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
#define pq priority_queue
#define sort(v) sort(v.begin(), v.end())
#define _sort(v) sort(v.rbegin(), v.rend())
#define pll pair<ll, ll>
ll BinarySearch(vector<pll>&arr, ll xx)
{
	ll left = 0;
	ll right = arr.size() - 1;
	while (left <= right)
	{
		ll mid = (left + right) / 2;
 
		if (arr[mid].first == xx)
			return mid;
		if (arr[mid].first > xx)
			right = mid - 1;
		if (arr[mid].first < xx)
			left = mid + 1;
	}
	return -1;
}
void SolveProblem()
{
	ll n, x;
	cin >> n >> x;
	vector<pll>a(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a);
	bool flag = false;
	for (ll i = 0; i < n; i++)
	{
		if (a[i].first < x && BinarySearch(a, x - a[i].first) != -1 && a[i].second != a[BinarySearch(a, x - a[i].first)].second)
		{
			flag = true;
			cout << a[i].second + 1 << " " << a[BinarySearch(a, x - a[i].first)].second + 1;
			break;
		}
	}
	if (!flag)
		cout << "IMPOSSIBLE";
}	
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
