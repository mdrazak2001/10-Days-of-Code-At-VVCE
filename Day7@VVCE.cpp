// Problem link -> https://www.hackerrank.com/challenges/countingsort4/problem 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n ; cin >> n; 
    string ans[n] ;
    int num ;
    string s ;

    for(int i = 0 ; i < n/2 ; i++ ) {
        cin >> num >> s ;
        ans[num] += "- ";
    }
    for ( int i = n/2 ; i < n ; i++ ) {
        cin >> num >> s ;
        ans[num] += s + " " ;
    }
    for ( string s : ans ) cout << s ;

}
