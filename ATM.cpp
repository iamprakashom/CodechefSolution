#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int withdraw;
    float amount;
    cin>>withdraw;
    assert(withdraw >0);
    cin>>amount;
    assert(amount > 0);
    if(withdraw % 5 == 0 && withdraw <= amount){
            if(amount - (withdraw+0.50) > 0){
            amount -=withdraw;
            cout<<std::fixed<<std::setprecision(2)<<amount-0.50<<endl;
            }
            else goto x;
    }
    else
    x:    cout<<std::fixed<<std::setprecision(2)<<amount<<endl;
    return 0;
}
