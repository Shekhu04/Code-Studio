#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
  int max_len = 0,current_sum = 0;
  unordered_map<long long, int> map{{0,1}};

  for(int i=0; i<nums.size(); i++){
      current_sum += nums[i];

      if(current_sum == k)
         max_len = max(i+1,max_len);

      if(map.find(current_sum - k) != map.end())
        max_len = max(i - map[current_sum - k], max_len);

       if(map.find(current_sum) == map.end())
       map[current_sum] = i ;  
  }
  return max_len;
}
