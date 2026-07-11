#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define Bismillah int main()
#define all(x) (x).begin(), (x).end()
#define rall(a) (a).rbegin(), (a).rend()
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define ONE cout << 1 << endl;
#define ZERO cout << 0 << endl;
#define small(x) transform(x.begin(), x.end(), x.begin(), ::tolower);
#define capital(x) transform(x.begin(), x.end(), x.begin(), ::toupper);
#define lpi(x, y) for (ll i = x; i < y; i++)
#define lpj(x, y) for (ll j = x; j < y; j++)
#define rlpi(x, y) for (ll i = y - 1; i >= 0; i--)
#define rlpj(x, y) for (ll j = y - 1; j >= 0; j--)
#define test while (t--)
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define endl '\n'
#define mem(arr, value) memset(arr, value, sizeof(arr))
#define vl vector<ll>
#define dbg2(x)            \
    for (auto it : x)      \
    {                      \
        cout << it << " "; \
    }                      \
    cout << endl;
#define dbg1(x) cout << x << endl;
#define dbg3(x)                                       \
    for (auto it : x)                                 \
    {                                                 \
        cout << it.first << " " << it.second << endl; \
    }                                                 \
    cout << endl;
#define pb push_back
#define mod 1000000007
#define EPS 1e-6

ll factorial(ll n)
{
    ll i, ans = 1;
    for (i = n; i > 1; i--)
    {
        ans *= i;
    }
    return ans;
}

ll gcd(ll num1, ll num2)
{
    ll a, b, r;
    a = num1;
    b = num2;
    r = a % b;
    while (r > 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

ll lcm(ll num1, ll num2) { return (num1 * num2) / gcd(num1, num2); }

bool primes(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll modd(ll num1, ll num2) { return ((num1 % num2) + num2) % num2; }

/// All Sub strings ///
void allss(string s, int n)
{
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}

/// Integer To Binary ///
string itob(ll num)
{
    string str;
    while (num)
    {
        if (num & 1)
            str += '1';
        else
            str += '0';
        num >>= 1;
    }
    reverse(str.begin(), str.end());
    return str;
}

///  Binary To Integer ///
ll btoi(string str)
{
    string n = str;
    ll val = 0;
    ll temp = 1;
    ll len = n.length();
    for (ll i = len - 1; i >= 0; i--)
    {
        if (n[i] == '1')
        {
            val += temp;
        }
        temp = temp * 2;
    }
    return val;
}

/// Check sub string ///
ll sstring(string s1, string s2)
{
    for (int i = 0; i + s2.size() - 1 < s1.size(); i++)
    {
        string tmp = s1.substr(i, s2.size());
        if (tmp == s2)
        {
            return 1;
        }
    }
    return -1;
}

/// Kadane s Algorithm ///
/// max sub array sum ///
ll mxSS(vector<ll> &a, ll n)
{
    ll mf = INT_MIN, me = 0;
    for (int i = 0; i < n; i++)
    {
        me = me + a[i];
        if (mf < me)
            mf = me;
        if (me < 0)
            me = 0;
    }
    return mf;
}

ll sumdigit(string s)
{
    ll x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        x += (s[i] - 48);
    }
    return x;
}

/// Comparator sort ///
/// first will be max to min , if two first are same then second will be min to max ///
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first < p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second > p2.second);
    return 0;
}

/// Sieve of Eratosthenes ///

const ll MX = 1e8;

bitset<MX> is_prime;
vector<ll> prime;

void primeGen(ll n)
{
    for (ll i = 3; i <= n; i += 2)
        is_prime[i] = 1;

    ll sq = sqrt(n);
    for (ll i = 3; i <= sq; i += 2)
    {
        if (is_prime[i] == 1)
        {
            for (ll j = i * i; j <= n; j += (i + i))
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back(2);

    for (ll i = 3; i <= n; i += 2)
    {
        if (is_prime[i] == 1)
            prime.push_back(i);
    }
}

/// Prime Factorization // vector<ll> tmp = primeFactors(n); ///

vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for (auto p : prime)
    {

        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                factors.push_back(p);
                n /= p;
            }
        }
    }
    if (n > 1)
    {
        factors.push_back(n);
    }

    return factors;
}

/// Big Sorting or String sort /// sort(all(v) , bigsort); ///

bool bigsort(string s, string str)
{
    ll n = s.size();
    ll m = str.size();
    if (n == m)
    {
        return s < str;
    }
    return n < m;
}

ll power(ll base, ll n)
{
    ll result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % mod;
            n--;
        }
        else
        {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return result % mod;
}

ll bigMod(ll a, ll p, ll m)
{
    ll ans = 1;
    a = a % m;
    while (p)
    {
        if (p & 1)
            ans = (ans * a) % m;
        a = (a * a) % m;
        p /= 2;
    }
    return ans;
}

ll MOD(ll num) { return ((num % mod + mod) % mod); }

ll MOD(ll num, ll md) { return ((num % md + md) % md); }

ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }

ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }

ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }

ll modDiv(ll a, ll b) { return modMul(a, bigMod(b, mod - 2, mod)); }

bool isPowerOfTwo(ll n) { return n > 0 && !(n & (n - 1)); }

bool coPrime(ll a, ll b) { return __gcd(a, b) == 1; }

bool isEqual(double a, double b) { return abs(a - b) < EPS; }

bool isGreater(double a, double b) { return a >= b + EPS; }

bool isGreaterEqual(double a, double b) { return a > b - EPS; }

ll LOG2(ll n)
{
    ll v = 1, c = 0;
    while (v <= n)
        c++, v *= 2;
    return c - 1;
}
ll LOGX(ll x, ll n)
{
    ll v = 1, c = 0;
    while (v <= n)
        c++, v *= x;
    return c - 1;
}

ll NOD(ll n)
{
    ll nod = 1;
    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                n /= p;
                cnt++;
            }
            cnt++;
            nod *= cnt;
        }
    }
    if (n > 1)
    {
        nod *= 2;
    }
    return nod;
}

ll snod(ll n) /// 1 to n numbers divisor sum ///
{
    ll snd = 0;
    ll sq = sqrt(n);
    for (ll i = 1; i <= sq; i++)
    {
        ll val = (n / i) - i;
        snd += val;
    }
    snd *= 2;
    snd += sq;
    return snd;
}

ll SOD(ll n) /// Divisor Sum of a number
{
    ll sod = 1;
    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            ll sum = 1;
            ll a = 1;
            while (n % p == 0)
            {
                a *= p;
                sum += a;
                n /= p;
            }
            sod *= sum;
        }
    }
    if (n > 1)
    {
        sod *= (n + 1);
    }
    return sod;
}

ll PHI(ll n) /// i to n , total numbers that will give gcd(i , n)  = 1 // sqrt(n) / ln(sqrt(n)) ///
{
    ll phi = n;
    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n /= p;
            }
            phi /= p;
            phi *= (p - 1);
        }
    }
    if (n > 1)
    {
        phi /= n;
        phi *= (n - 1);
    }
    return phi;
}

bool myPrime(long long n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;

    long long limit = sqrt(n);
    for (long long i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

/// Euler Phi Divisor Extension Theorem
/// PHI(n/d) = 1 to n koyta val 'a' acche jenno gcd(a,n) = d
/// Euler Divisor Sum Theorem
/// Sum of PHI(d) = N , Sum of PHI of all divisor of N is N
/// Sum of Coprimes of a integer is { (PHI(n)/ 2 ) * n }

Bismillah
{
    /// fast ();
    ll t = 1;
    cin >> t;

    /// Particular Test Case
    /*
    */

    test
    {
        ll n; 
        cin>>n; 

        vector<ll>v(n); 

        for(int i = 0 ; i < n  ; i++)
        {
            cin>>v[i]; 
        }


        vector<ll>ans ; 

        for(int i = 0 ; i < n  ; i++)
        {
            ll x = abs ( v[i] - (i + 1)); 
            if(x>0)
            {
                ans.push_back(x); 
            }
        }


        ll gc = ans[0]; 
        for(int i = 1 ; i < ans.size() ; i++)
        {
            gc = gcd(gc , ans[i]); 
        }

        //cout<<"LOOp"<<endl; 

        //dbg2(ans)

        cout<<gc<<endl ; 
       
    }


    return 0;
}

/// Test Case ( Start )

/// INPUT
/*
7
3
3 1 2
4
3 4 1 2
7
4 2 6 7 5 3 1
9
1 6 7 4 9 2 3 8 5
6
1 5 3 4 2 6
10
3 10 5 2 9 6 7 8 1 4
11
1 11 6 4 8 3 7 5 9 10 2
*/
/// OUTPUT
/*
1
2
3
4
3
2
3
 */
/// My Output
/*
1
2
3
4
3
2
3
 */

/// Test Case ( End )
