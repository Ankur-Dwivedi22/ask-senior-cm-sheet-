// HARE RAM HARE KRISHNA

#include <bits/stdc++.h>
using namespace std;
#define int long long
const double PI = 3.14159265358979323846;
#define INF (int)1e18
#define f first
#define s second
#define pb(a) push_back(a)
#define Ankur_Dwivedi()                   \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

#define couty cout << "YES" << endl
#define coutn cout << "NO" << endl
#define cout(a) cout << a << endl

#define ain(i, arr, n)          \
    ;                           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
#define aout(i, arr, n)         \
    ;                           \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

string binary(int x)
{
    string s = "";
    for (int i = 31; i >= 0; i--)
    {
        int a = ((x >> i) & 1);
        if (a == 1)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
    }
    return s;
}

bool SieveOfEratosthenes(int n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    if (prime[n])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    string s;
    cin >> s;
    string a, b, c;
    string start = s.substr(0, 2);
    int n = s.size();
    if (start == "aa" || start == "bb" || start == "ba")
    {
        c = s.substr(2, n - 2);
        cout << s[0] << " " << s[1] << " " << c << "\n";
    }
    else
    {
        int loc = -1;
        for (int i = 2; i < n; i++)
        {
            if (s[i] == 'a')
            {
                loc = i;
                break;
            }
        }
        if (loc == -1)
        {
            a = s.substr(0, n - 2);
            cout << a << " " << s[n - 2] << " " << s[n - 1] << "\n";
        }
        else
        {
            b = s.substr(1, loc - 1);
            c = s.substr(loc);
            cout << s[0] <<" "<< b << " " << c << "\n";
        }
    }
}

int32_t main()
{
    Ankur_Dwivedi();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    // solve();
}