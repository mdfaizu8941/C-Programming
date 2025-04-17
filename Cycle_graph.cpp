 #include<iostream>
#include<vector>
using namespace std;
bool dfs(int i,vector<vector<int>>&graph ,vector<bool>&visited,vector<bool>&stack)
{
  visited[i]=true;
  stack[i]=true;
  for(int j:graph[i])
  {
    if(!visited[j])
    {
      if(dfs(j,graph,visited,stack))
        return true;
    }
    else if(stack[j])
      return true;
  }
  stack[i]=false;
  return false;
}
bool cycle(vector<vector<int>>&graph,int ver)
{
  vector<bool>visited(ver,false);
  vector<bool>stack(ver,false);
  for(int i=0;i<ver;i++)
  {
    if(!visited[i])
    {
      if(dfs(i,graph,visited,stack))
        return true;

    }
  }
  return false;
}

}

int main()
{
  int ver,edg;
  cout<<"Input  number of vertices:";
  cin>>ver;
  cout<<"Input number of Edges:";
  cin>>edg;
  int u,v;
  vector<vector<int>>graph(ver);
  cout<<"enter Edges"<<endl;
  for(int i=0;i<edg;i++)
  {
    cin>>u>>v;
    graph[u].push_back(v);//directed
  }
  for(int i=0;i<ver;i++)
  {
    cout<<"node "<<i<<" is connected to: ";
    for(int j:graph[i])
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
  if(cycle(graph,ver))
    cout<<"Cycle detected"<<endl;
  else cout<<"No Cycle detected"<<endl;

  return 0;
}
