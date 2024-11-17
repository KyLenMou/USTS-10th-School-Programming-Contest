#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    int len = inf.readInt();
    
    vector<int> a;
    set<int> s;
    for (int i = 1; i <= len; i++) {
        try {
            int t = ouf.readInt();
            a.push_back(t);
            s.insert(t);
        } catch (const exception& e) {
            quitf(_wa, "Error reading input: %s", e.what());
        }
    }
    
    if (s.size() != len || !s.count(0) || !s.count(len-1)) {
        quitf(_wa, "Set size is not equal to len, or set does not contain 0 or len-1");
    }
    
    for (int i = len; i < n; i++) {
        try {
            int t = ouf.readInt();
            if (t != a[i % len]) {
                quitf(_wa, "Answer mismatch at position %d", i);
            }
        } catch (const exception& e) {
            quitf(_wa, "Error reading input: %s", e.what());
        }
    }
    
    quitf(_ok, "答案正确");
    return 0;
}
