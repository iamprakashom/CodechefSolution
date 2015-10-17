#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t, a, b, c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+b+c == 180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
