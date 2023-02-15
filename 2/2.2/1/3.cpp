// Exercise 2.2.1.3*: Suppose you are given an unsorted array S of n 32-bit signed integers.
// Solve each of the following tasks below with the best possible algorithms that you can think of
// and analyze their time complexities. Let’s assume the following constraints: 1  n  100K
// so that O(n2) solutions are theoretically infeasible in a contest environment.
// 1. Determine if S contains one or more pairs of duplicate integers.
// 2*. Given an integer v, find two integers a, b 2 S such that a + b = v.
// 3*. Follow-up to Question 2: What if the given array S is already sorted?
// 4*. Print the integers in S that fall between a range [a..b] (inclusive) in sorted order.
// 5*. Determine the length of the longest increasing contiguous sub-array in S.
// 6. Determine the median (50th percentile) of S. Assume that n is odd.
// 7*. Find the item that appears > n/2 times in the array.

// Code 1:
#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]!=0)
        {
            cout<<"Duplicate Exist"<<endl;
            return 0;
        }
        m[a[i]]++;
    }
    cout<<"No Duplicates Exist"<<endl;
    return 0;
}
 
int main() 
{
    ll t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}

// Code 2:
#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int sol()
{
    int n;
    cin>>n;
    int v;
    cin>>b;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        if(m[v-a[i]]!=0)
        {
            cout<<a[i]<<" "<<v-a[i]<<endl;
            return 0;
        }
        m[a[i]]++;
    }
    cout<<"No Pairs Exist"<<endl;
    return 0;
}
 
int main() 
{
    ll t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}
