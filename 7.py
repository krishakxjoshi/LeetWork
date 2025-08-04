class Solution(object):
    def reverse(self, x):
        reverse = 0
        p = abs(x)
        while p > 0:
            reverse = reverse * 10 + int(p % 10)
            p = int(p / 10)
        if x < 0:
            reverse = -reverse
        if reverse < -2**31 or reverse > 2**31 + 1:
            return 0
        return reverse
