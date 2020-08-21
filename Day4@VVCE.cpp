// Problem Link -> https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    stack<int> s1 , s2 ;
    int q ; cin >> q ;
    while(q--) {
        int n ; cin >> n ;
        if( n == 1 ) {
            int num ; cin >> num ;
            s1.push(num) ;
        }
        else {
            if( s2.empty() ) {
                while(!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
             if( !s2.empty() ){
                if( n == 2 ) s2.pop();
                if( n == 3 ) cout << s2.top() << endl ; 
            }
        }
    }
    return 0;
}
