#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0) break;

        int t=1,b=6,n1=2,s1=5,w1=3,e1=4;
        string c;

        while(n--){
            cin >> c;
            if(c=="north"){
                int a=t; t=s1; s1=b; b=n1; n1=a;
            } else if(c=="south"){
                int a=t; t=n1; n1=b; b=s1; s1=a;
            } else if(c=="west"){
                int a=t; t=e1; e1=b; b=w1; w1=a;
            } else if(c=="east"){
                int a=t; t=w1; w1=b; b=e1; e1=a;
            }
        }
        cout << t << "\n";
    }
}
