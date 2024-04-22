numbers_leetcode_1 = """class Solution:
    def romanToInt(self, s: str) -> int:
        dict = {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000
                    }
        result = dict[s[-1]]

        for i in range(-2, -(len(s) + 1), -1):
            if dict[s[i]] < dict[s[i + 1]]:
                result -= dict[s[i]]
            else:
                result += dict[s[i]]
            
        return result  
        
a = Solution()
print(a.romanToInt("MMVII")) """


numbers_leetcode_2 = """class Solution:
    #nums1 = []
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        for i in range(m , len(nums1)):
            nums1.pop()
        for y in range(0, n):
            nums1.append(nums2[y])
        nums1.sort()
        return nums1



x = Solution()
print(x.merge([1,2,3,0,0], 3, [2,5,6], 3))"""



"""class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        empty_list = []
        second_list = []
        third_list = []
        for i in nums:
            if i == val:
                second_list.append("_")
            else:
                empty_list.append(i)
        third_list = empty_list + second_list
        return f"K={len(empty_list)}, nums = {third_list}"

x = Solution()
print(x.removeElement([1,4,3,0,2,3,4,2,2,0,4], 2))"""