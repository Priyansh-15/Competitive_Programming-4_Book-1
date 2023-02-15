// Exercise 2.2.1.1*: Sort the following array of N elements. Use built-in library if possible.
// 1. N tuples (integer age ", string last name # (descending order), string first name ").
// 2*. N fractions ( numerator/denominator) in " (ascending order).

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
 
struct PSIN{
    int age;
    string last_name;
    string first_name;
    PSIN(int a,string f,string l)
    {
        age=a;
        first_name=f;
        last_name=l;
    }
};

bool comp1(PSIN* &a,PSIN* &b)
{
    return (a->age<=b->age);
}

bool comp2(PSIN* &a,PSIN* &b)
{
    if(a->age==b->age)
        return (a->first_name<=b->first_name);
    return false;
}

bool comp3(PSIN* &a,PSIN* &b)
{
    if(a->age==b->age and a->first_name==b->first_name)
        return (a->last_name>b->last_name);
    return false;
}

void sort_age(vector<PSIN*>&a)
{
    //increasing
    sort(a.begin(),a.end(),comp1);
}

void sort_fname(vector<PSIN*>&a)
{
    //increasing
    sort(a.begin(),a.end(),comp2);
}

void sort_lname(vector<PSIN*>&a)
{
    //decreasing
    sort(a.begin(),a.end(),comp3);
}

int sol()
{
    int n;
    cin>>n;
    vector<PSIN*>a;
    for(int i=0;i<n;i++)
    {
        int ag;
        cin>>ag;
        string f,l;
        cin>>f>>l;
        PSIN *temp=new PSIN(ag,f,l);
        a.push_back(temp);
    }
    sort_age(a);
    sort_fname(a);
    sort_lname(a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]->age<<" "<<a[i]->first_name<<" "<<a[i]->last_name<<endl;
    }
    return 0;
}
 
int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}
