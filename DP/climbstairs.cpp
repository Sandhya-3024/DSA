class Solution {
public:
    int climbStairs(int n) {
    int prev2 = 1;//for 0th stair only one way(1 step)
    int prev = 1;//for 1t stair only 1 way(1 step)
    for(int i=2; i<=n; i++){
      int cur_i = prev2+ prev;
      prev2 = prev;
      prev= cur_i;
  }
  return prev;
    }
};
