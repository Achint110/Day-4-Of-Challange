class Solution {
public:
    int findMin(vector<int>& nums) {

        
// Method 1
    //     sort(nums.begin(),nums.end());

    //     return nums[0];

    // method 2
        int mini =INT_MAX;
        for(int i=0;i<nums.size();i++){
           
           if(nums[i]<mini)
           mini=nums[i];
       

        }
return mini;
    }
};