#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,queries,subsize;
    cin>>n>>queries;
  //two dimensional vector
    vector<vector<int>> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>subsize;
        v[i].resize(subsize);
        for(int j=0;j<subsize;j++)
        {
            cin>>v[i][j];
        }
    }
    for (int iter = 0; iter < queries; iter++)
    {
        int i, j;
        cin >> i >> j;
        cout << v[i][j]<<endl;
    }    
    return 0;
}
