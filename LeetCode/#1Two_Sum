class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        map = {}
        for index, value in enumerate(nums):
            if value not in map.keys():
                map[value] = index
            else:
                if value + value == target:
                    return (map[value], index)
        for i in map.keys():
            com = target - i
            if map.has_key(com) and map.get(com) != map[i] :
                return (map[i], map.get(com))
