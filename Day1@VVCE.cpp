// Question Link -> https://www.hackerrank.com/challenges/array-left-rotation/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n , d ;
    cin >> n >> d ;
    vector<int> a(n) ;
    for ( int i = 0 ; i < n ; i++ ) {
        int k ;
        cin >> k ;
        a[(i+n-d)%n] = k ;
    }
    for (int num : a) {
        cout << num << ' ' ;
    }
}
