#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define endl                        '\n'
#define fastIO()                    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FO(i, b)                    for (int i = 0; i < (b); i++)
#define FOR(i, a, b)                for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)               for (int i = (a); i > (b); i--)
#define TR(v, arr)                  for (auto& (v) : (arr))
#define debug(x)                    cout << #x << " = "; _debug(x); cout << endl;
#define pb                          push_back
#define mp                          make_pair
#define F                           first
#define S                           second
#define all(x)                      x.begin(), x.end() 
#define sz(x)                       (int) x.size()
#define LB(arr, x)                  lower_bound(all(arr), x)-(arr).begin()
#define UB(arr, x)                  upper_bound(all(arr), x)-(arr).begin()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void setIO(){
    string file = __FILE__;
    file = string(file.begin(), file.end()-3);
    string in_file = file+"in";
    string out_file = file+"out";

    FILE *exist_in_file;
    exist_in_file = freopen(in_file.c_str(), "r", stdin);
    if(!exist_in_file){
        exist_in_file = freopen(in_file.c_str(), "w", stdout);
        fclose(exist_in_file);
    }

    freopen(in_file.c_str(), "r", stdin);
    freopen(out_file.c_str(), "w", stdout);
}

template <typename T>
void _debug(T& x){
    cout << x;
}

template <typename T1, typename T2>
void _debug(pair<T1, T2>& pair){
    cout << "{"; _debug(pair.F); cout << ","; _debug(pair.S); cout << "}";  
}

template <typename T>
void _debug(vector<T>& vec){
    int n = sz(vec);
    if(n == 0){cout << "[ ]"; return;}
    cout << "[";
    FO(i, n-1){
        _debug(vec[i]); cout << " ";
    }
    _debug(vec[n-1]); cout << "]";
}

void _debug(vector<string>& vec){
    int n = sz(vec);
    cout << endl;
    FO(i, n){
        cout << vec[i] << endl;
    }
}

template <typename T>
void _debug(vector<vector<T>>& A){
    int n = sz(A);
    cout << endl;
    FO(i, n){
        _debug(A[i]); cout << endl;
    }
}

template <typename T>
void print(T& x){
    cout << x << endl;
    return;
}

template <typename T>
void print(vector<T>& vec, int a=0, int b=-1){
    if(b == -1){b = sz(vec);}
    if(b == 0){return;}
    FOR(i, a, b-1){
        cout << vec[i] << " ";
    }
    cout << vec[b-1] << endl;
    return; 
}

const int N = 1e2+1;
int n; 
vi d(N);
int cache[40][1000];
 //   i    curr_height
// dp[i][height] := max height reached given we are at position i and at our height is height
int dp(int i, int curr_height){
    if(cache[i][curr_height]){return cache[i][curr_height];}
    if(i == n && curr_height == 0){return 0;}
    if(i == n || curr_height != 0){return INF;}

    int go_up = dp(i+1, curr_height+d[i]);
    int go_down = dp(i+1, curr_height-d[i]);

    cache[i][curr_height] = max(curr_height, min(go_up, go_down));
    return cache[i][curr_height];
}

void solve(){
    cin >> n;
    FO(i, n) cin >> d[i];
    FO(i, N) FO(j, 1000) {cache[i][j] = 0;}
    int ans = dp(0, 0);
    if(ans == INF){print("IMPOSSIBLE"); return;}
    int curr_height = 0;
    FO(i, n){
        if(dp(i+1, curr_height+d[i]) < dp(i+1, curr_height-d[i])){
            cout << "U";
            curr_height = curr_height+d[i];
        }
        else{
            cout << "D";
            curr_height = curr_height-d[i];
        }
    }
    cout << endl;
    return;
}

int main()
{
    fastIO();
    if(getenv("LOCAL")){setIO();}
    int T; cin >> T;
    FO(tc, T){
        // cout << "Case #" << tc+1 << ":";
        solve();
    }	
    return 0;
}