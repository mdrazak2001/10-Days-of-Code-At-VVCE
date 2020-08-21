// Problem Link -> https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    queue<int> q;
    int k ; cin >> k ;
    while(k--) {
        int num ; cin >> num ;
        if( num == 1 ){
            int n; cin >> n;
            q.push(n);
        }
        if( num == 2 ) {
           if(!q.empty()) q.pop();
        }
        else if( num == 3 ) {
            cout << q.front() << endl ;
        }
    }
    return 0;
}
