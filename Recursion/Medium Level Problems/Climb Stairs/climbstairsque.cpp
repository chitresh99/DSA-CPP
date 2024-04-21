// link :- https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10&leftPanelTabValue=SUBMISSION

#include <iostream>
using namespace std;

int countDistinctWays(int n){
    if (n < 0)
       return 0;
    if (n < 1)
       return 1;

    int ans = countDistinctWays(n - 1) + countDistinctWays ( n - 2);

    return ans;
}


int main(){
    int n;

    cin >> n;

    countDistinctWays(n);
}

/* attempted 
#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {

    // Base case    //also int nStairs is the variable so instead of n we use nStairs
      if(nStairs < 0)
         return 0;
      if(nStairs == 0)
         return 1;

    //Recusrive Call //countDistinctWays is the name of the function

     int ans = countDistinctWays( nStairs - 1)+countDistinctWays(nStairs - 2);

     return ans;
         
}
*/