#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll, ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define alll(x) ((x).begin() + 1), (x).end()
#define clean(v) (v).resize(distance((v).begin(), unique(all(v))));
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define mod mod
#define endl '\n'
const ll mod = 998244353;
const ll N_Max = 1e9 + 7;
const int Nax = 15;
const int LOG = 18;
const int BITS = 30;
const int ALPHA = 26;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll inv(ll N)
{
    if (N == 1)
        return 1;
    return (mod - ((mod / N) * inv(mod % N)) % mod) % mod;
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// Sort the vector by the second element of each pair (the values)
// sort(v.begin(), v.end(), [](const pair<int, int> &x, const pair<int, int> &y)
//      { return x.second < y.second; });

void test_case()
{
    // You can add test case-specific code here if needed
}
ll get(char c)
{
    return c - 'a';
}

ll mex(set<ll> const &A, ll result)
{

    while (A.count(result))
        ++result;

    return result;
}
int findPowerOfTwo(int x)
{

    double log2_x = log2(x);
    if (floor(log2_x) == log2_x)
    {
        return static_cast<int>(log2_x);
    }
    return -1;
}
int binarySearch(vector<int> &arr, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return arr[mid];

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}
int maxSubArraySum(vector<int> &arr, int k)
{
    int maxSum = 0, windowSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        windowSum += arr[i];
        if (i >= k - 1)
        {
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[i - (k - 1)];
        }
    }
    return maxSum;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    string task;
    vector<char> res;
    cin >> task;
    for (int i = 0; i < task.length(); i++)
    {
        if (isalpha(task[i]))
        {
            res.push_back(tolower(task[i]));
        }
    }

    int l = 0;
    int r = res.size() - 1;

    while (r <= l)
    {
        if (res[l] != res[r])
        {
            cout << "false" << endl;
            return;
        }
        l++;
        r--;
    }
    cout << "true" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}