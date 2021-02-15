#include<bits/stdc++.h>
using namespace std;

int main(){
    int n01;
    int n02;
    cout<<"Enter the binary no 1 : ";
    cin>>n01;
    cout<<"Enter the binary no 2 : ";
    cin>>n02;
    int i = 0;
    int remainder = 0;
    int arr[20];
    while(n01>0||n02>0){
        arr[i++] = (int)(n01%2 + n02%2 + remainder)%2;
        remainder = (int)(n01%2 + n02%2 + remainder)/2;
        n01 /= 10;
        n02 /= 10;
    }
    if(remainder==1){
        arr[i++] = remainder;
    }
    i--;
    while(i>=0){
        cout<<arr[i]<<" ";
        i--;
    }

return 0;
}


//#include<bits/stdc++.h>
// using namespace std;
// int addbinarynumber(int n,int m);
// int main(){
//     int n1,n2;
//     cout<<"Enter the first Binary no : ";
//     cin>>n1;
//     cout<<"Enter the second binary no : ";
//     cin>>n2;
//     cout<<endl<<addbinarynumber(n1,n2);
// return 0;
// }
// int addbinarynumber(int n,int m){
//     int no1,no2;
//     int prevcarry = 0,ans = 0;
//     while(n>0&&m>0){

//         no1 = n%10;
//         no2 = m%10;
//         if(no1%2==0 && no2%2==0){
//             ans = ans*10 + prevcarry;
//             prevcarry = 0;
//         }
//         if((no1%2==1 && no2%2==0 )||(no1%2==0 && no2%2==1)){
//             if(prevcarry == 1){
//             ans = ans*10 + 0;
//             prevcarry = 1;
//             }
//             else if(prevcarry == 0){
//             ans = ans*10 + 1;
//             prevcarry = 0;
//             }
//         }
//         if(no1%2==1 && no2%2==1){
//             if(prevcarry == 1){
//                 ans = ans*10 + prevcarry;
//                 prevcarry = 1;
//             }
//             if(prevcarry == 0){
//                 ans = ans*10 + prevcarry;
//                 prevcarry = 1;
//             }
            
//         }
//         n /= 10;
//         m /= 10;
//     }
//     while(no1<0)
//     {
//         if(prevcarry==1){
//             if(no1%2==1){
//             ans = ans*10+0;
//             prevcarry =1;
//             }
//             if(no1%2==0){
//             ans = ans*10+1;
//             prevcarry = 0;
//             }
//         }
//         else
//         {
//             if(no1%2==1){
//                 ans = ans*10 +1;
//                 prevcarry =0;
//             }
//             if(no1%2==0){
//                 ans = ans*10 +0;
//                 prevcarry =0;
//             }
//         }
//         no1 /= 10;
//     }
//     while(no2<0)
//     {
//         if(prevcarry==1){
//             if(no2%2==1){
//             ans = ans*10+0;
//             prevcarry = 1;
//             }
//             if(no2%2==0){
//             ans = ans*10+1;
//             prevcarry = 0;
//             }
//         }
//         else
//         {
//             if(no2%2==1){
//                 ans = ans*10 +1;
//                 prevcarry =0;
//             }
//             if(no2%2==0){
//                 ans = ans*10 +0;
//                 prevcarry =0;
//             }
//         }
//         no2 /= 10;
//     }
//     if(prevcarry == 1){
//         ans = ans *10 + 1;
//     }
    
//     return ans;
// }