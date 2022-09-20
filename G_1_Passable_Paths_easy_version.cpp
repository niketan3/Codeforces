#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
vector<vector<int>> ans;
void solve1(bool *visited, vector<vector<int>> graph, int arr[], int n, int t)
{
    
    multiset<int> m;
    for (int i = 0; i < n; i++)
    {
        m.insert(arr[i]);
    }
   
    visited[arr[0]] = 1;
     
    for (auto x : graph[t])
    {
        auto it = m.find(x);
        if (it != m.end() and visited[x] == 0)
        {
            cout<<x<<endl;
            visited[x] = 1;
            solve1(visited,graph,arr,n,x);
        }
        else
        {
            solve1(visited,graph,arr,n,x);
        }
    }
}
// void solve(vector<vector<int>> graph, int arr[], int n)
// {

//     bool visited[200005] = {0};

//     int flag = 1;
//     solve1(visited, graph, arr, n,arr[0]);
    
//     for(int i=0;i<n;i++)
//     {
//         if(visited[arr[i]]==1)
//         {
//             cout<<"No"<<'\n';
//             flag=0;
//             break;
//         }
//     }
//     if(flag)
//     {
//         cout<<"YES"<<endl;
//     }
// }
bool mainflag=0;
void solve(vector<vector<int>> graph,int arr[],int n,bool *visited,int j,int count=1)
{
    if(visited[j]==0)
    {
        // cout<<j<<endl;
        visited[j]=1;
        // cout<<count<<endl;
        int flag=0;
        for(auto x:graph[j])
        {
            if(visited[x]==0)
            {
                auto it=lower_bound(arr,arr+n,x);
                cout<<x<<" "<<*it<<endl;
                if(*it==x)
                {
                    // cout<<count<<endl;
                    solve(graph,arr,n,visited,x,count++);
                    flag=1;
                }
                else
                {
                     solve(graph,arr,n,visited,x);
                     flag=1;
                }
            }


        }
       
        if(flag==1)
        {
            auto it=lower_bound(arr,arr+n,j);
            cout<<count<<endl;
            if(*it==j)
            {
                count++;
            }
            //   cout<<count<<endl;
            
                if(count==n)
                {
                    mainflag=1;
                }

        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int ver;
        cin >> ver;
        int arr[ver];
        bool visited[n+1]={0};
        for (int i = 0; i < ver; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+ver);
        for(int i=0;i<ver;i++)
        {
            solve(graph, arr, ver ,visited,arr[i]);
            cout<<endl;
            if(mainflag)
            {
                break;
            }
        }
        if(mainflag)
        {
            cout<<"YES"<<endl;
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
        mainflag=0;
    }
}
