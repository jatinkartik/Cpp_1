#include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
using namespace std;
string decimaltohex(int n);
int main(){
  int n;
  cin>>n;
  cout<<decimaltohex(n);
return 0;
}
string decimaltohex(int n){
    int x = 1;
    string ans = "";
    int j = 1;
    while(x<=n){

        x *= 16;
        j++;
    }
    printf("\n the value is %d\n",j);
    x /= 16;
    j = 0;
    while (x>0)
    {
        int lastdigit = n/x;
         n -= lastdigit*x;
         x /= 16;
         if(lastdigit <= 9){
             ans = ans + to_string(lastdigit);
         }
         else{
             char c = 'A' + lastdigit - 10;
             ans.push_back(c);
         }
         j++;
    }
    printf("\n the value is %d\n",j);
    return ans;
    
}