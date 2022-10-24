class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:

        digits = list(map(str, digits))
        num = int(''.join(digits))
        num += 1
        digits = list(map(int, str(num)))
        return digits
