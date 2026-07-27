class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        result_set=set()
        for i in range(len(nums)):
            l = i+1
            r=len(nums)-1
            while l<r:
                total=nums[i]+nums[l]+nums[r]
                if total==0:
                    result_set.add((nums[i],nums[l],nums[r]))
                    l+=1
                    r-=1
                elif total>0:
                    r-=1
                else:
                    l+=1
        return list(result_set)

        