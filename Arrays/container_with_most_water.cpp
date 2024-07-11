class Solution {
public:
    int maxArea(vector <int>& height) {

      int left=0,right=height.size()-1;
      int currentarea=0;
      int maxarea=0;
      while(left<right){
          //right-left-for width
          currentarea=(min(height[left],height[right])*(right-left));
          maxarea=max(maxarea,currentarea);

          if(height[left]>height[right]) right--;
          else left++;
          }
          return maxarea;
      }
};
