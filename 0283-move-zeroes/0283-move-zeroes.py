class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        arb_stack = []
        zero_counter = 0
        for i in nums:
            if i == 0:
                zero_counter+=1
            else:
                arb_stack.append(i)
        nums[:] = arb_stack[:] + [0]*zero_counter
       
        