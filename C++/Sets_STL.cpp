#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    set<int>::iterator itr;
    int queries,x, y;
    cin>>queries;
    for(int i=0;i<queries;i++)
    {
        cin>>y>>x;
        if(y==1)
            s.insert(x);
        else if(y==2)
            s.erase(x);
        else
        {
            itr=s.find(x);
            if(itr==s.end())
            cout<<"No"<<endl;
            else 
            cout<<"Yes"<<endl;
        }        
    }
    return 0;
}



