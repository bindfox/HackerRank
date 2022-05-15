#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
/*Write the class AddElements here*/

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';
//The above code must be used before implementinn the class as it enhances the speed of compilation

template  <class T>
    
class AddElements{
    T first;
    public:
    //Actual arguments are passed or taken input
    AddElements (T &ar){ first =ar;}
    inline T add(T &sec){ first+=sec; return first; }
};

template <>
class AddElements<string>{
    string one;
    public:
    AddElements(string &on){one=on;}
    inline string concatenate(string &sec)
    { string s=one+sec; return s;}
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
