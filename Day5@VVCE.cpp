/* Problem Link -> https://www.hackerrank.com/challenges/ctci-comparator-sorting/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=sorting */


class Checker{
public:
  	// complete this method
    static int comparator(Player a, Player b)  {
	if(b.score < a.score ) return 1 ;
        else if( b.score > a.score ) return -1 ;
        else if( b.name > a.name ) return 1 ;
        return -1 ;
    }
};