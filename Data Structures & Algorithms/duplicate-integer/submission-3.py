class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        size=len(nums)

        s=set(nums)
        diff_size=len(s)
        if diff_size==size:
            return False
        else:
            return True

        