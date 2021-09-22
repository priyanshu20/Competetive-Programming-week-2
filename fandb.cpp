// Friend and balls question from https://www.hackerrank.com/contests/third-year-w2/challenges

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n;
    cin>>m;
    int boxes[n]={0};
    while(m){
        int l,r;
        cin>>l;
        cin>>r;
        for (int i =l-1;i<r;i++){
            boxes[i]++;
        }
        m--;
    }
    int queries;
    cin>>queries;
    while(queries){
        int x;
        cin>>x;
        int answer=0;
        for(int i=0;i<n;i++)
        {
            if(boxes[i]>=x)
                answer++;
        }
        cout<<answer<<endl;
        queries--;
    }
    return 0;
}
