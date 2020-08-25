/* Problem Link ->https://www.hackerrank.com/challenges/alice-and-bobs-silly-game/problem
 *
 * Complete the sillyGame function below.
 */
string sillyGame(int n) {
    if(n == 1) return "Bob";
    int dp[n+1] ;
    dp[0] = 0 ;
    dp[1] = 0 ;
    dp[2] = 1 ;
    for (int i = 3 ; i <= n ; i++ ){
        if(i & 1) dp[i] = 1 ;
    }
    for (int i = 2 ; i <= sqrt(n) ; i++ ) {
        for ( int j = 2 ; i*j <= n ; j++ ) {
            dp[i*j] = 0 ;
        }
    }
    int cnt = 0 ;
    for (int i = 0 ; i <= n ; i++ ) {
        if(dp[i]) cnt++;
    }
    return (cnt&1) ? "Alice" : "Bob" ;
}
