/* Problem Link -> https://www.hackerrank.com/challenges/equal-stacks/problem */

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> s1 ;
    stack<int> s2 ;
    stack<int> s3 ;
    int s = 0 ;
    for ( int i = h1.size() - 1 ; i >= 0 ; i-- ) {
        s += h1[i] ;
        s1.push(s) ;
    } s = 0 ; 
    for ( int i = h2.size() - 1 ; i >= 0 ; i-- ) {
        s += h2[i] ;
        s2.push(s) ;
    } s = 0  ;
    for ( int i = h3.size() - 1 ; i >= 0 ; i-- ) {
        s += h3[i] ;
        s3.push(s) ;
    }
    int s1sum , s2sum , s3sum ;
    while( 1 ) {
        if(s1.empty() or s2.empty() or s3.empty()) return 0 ;
        
        s1sum = s1.top() ;
        s2sum = s2.top() ;
        s3sum = s3.top() ;
        
        if(s1sum == s2sum and s2sum == s3sum ) return s1sum ;
        else if(s1sum >= s2sum and s1sum >= s3sum ) {
            s1.pop() ;
        }
        else if(s2sum >= s1sum and s2sum >= s3sum ) {
            s2.pop() ;
        }
        else if(s3sum >= s1sum and s3sum >= s2sum ) {
            s3.pop() ;
        }
    }
    return s1sum ;
} 