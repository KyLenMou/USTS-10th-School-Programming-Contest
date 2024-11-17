#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);
    map<string,int> mp;
    int n = stoi(inf.readLine());
    for (int i = 1; i <= n; i++) {
        string t = inf.readLine();
        mp[t]++;
    }
    int ans_cnt = stoi(ans.readLine());
    int cnt = stoi(ouf.readLine());
    if (ans_cnt == -1) {
        if (cnt == -1) {
            quitf(_ok, "答案正确");
            return 0;
        } else {
            quitf(_wa, "答案错误");
            return 0;
        }
    }
    int res = 0;
    for (int i = 1; i <= cnt; i++) {
        string t = ouf.readLine();
        if (t.size() != 5) {
            quitf(_wa, "01串长度不为5 %d %d",t.size(),cnt);
            return 0;
        }
        if (mp[t] <= 0) {
            quitf(_wa, "您输出的01串不在给定的01串内");
            return 0;
        }
        mp[t]--;
        int tt = 16;
        int temp = 0;
        for (int i = 0; i < 5; i++) {
            if (t[i] == '1') temp += tt;
            tt >>= 1;
        }
        if (temp & res) {
            quitf(_wa, "您输出的答案产生了进位");
            return 0;
        }
        res |= temp;
    }
    
    if (res == 31) {
        quitf(_ok, "答案正确");
        return 0;
    }
    quitf(_wa, "答案错误");
    return 0;
}