 #include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
	// Complete the program
    string a,b;
        
    cin>>a>>b;
    
    int len1=a.size();
    int len2=b.size();
    
    cout<<len1<<" "<<len2<<endl;
    
    cout<<a+b<<endl;
    
    char char1 = a[0];
    char char2 = b[0];
    a[0]=char2;
    b[0]=char1;
    cout<<a<<" "<<b;
    return 0;
}
