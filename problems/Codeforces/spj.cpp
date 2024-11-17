#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);
    int a = ouf.readInt(1,100);
    int b = ouf.readInt(1,100);
    int c = ouf.readInt(1,100);
    if (b <= 100 && b > a && a > c && c > 0) {
	    quitf(_ok, "答案正确");
    } else quitf(_wa, "答案错误");
    return 0;
}