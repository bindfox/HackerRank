#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,pos,start,end;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    cin>>pos>>start>>end;
    
    v.erase(v.begin()+pos-1);
    v.erase(v.begin()+start-1,v.begin()+end-1);
    
    n=v.size();
    cout<<n<<endl;
    
    for (int i=0; i<n; i++) {
    cout<<v[i]<<" ";
    }
    return 0;
}
