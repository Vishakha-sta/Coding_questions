#include <bits/stdc++.h>
using namespace std;
int AutoBiographical(char *n){
    bool isAuto = false;
    int ans =0;
    int len = strlen(n);
    vector<int>  count(len,0);
    vector<bool> digitCount(len,false);
    for(int i=0;i<len;i++){
        count[n[i]-'0']++;
        if(!digitCount[n[i]-'0']){
            digitCount[n[i]-'0']=true;
            ans++;
        }
    }
    for(int i=0;i<len;i++){
        if(!(n[i]-'0' == count[i]))
        isAuto =  false;
    }
    isAuto = true;
    
    if(isAuto){
        return ans;
    }
    return 0;
}

int main() {
    char str[] = "3211000";
    cout<<AutoBiographical(str);
    return 0;
}
