def longestConsecutive(self, nums: List[int]) -> int:
        ls=[]
        nums.sort()
        x=len(nums)
        c=1
        if x==0:
            return(0)
        else:
            for i in range(x-1):
                if nums[i]+1==nums[i+1]:
                    c+=1
                elif nums[i]==nums[i+1]:
                    c+=0
                else:
                    ls.append(c)
                    c=1
            ls.append(c)
            ls.sort()
            return(ls[-1])