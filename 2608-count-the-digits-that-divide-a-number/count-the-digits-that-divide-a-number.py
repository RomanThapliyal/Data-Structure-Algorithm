class Solution:
    def countDigits(self, num: int) -> int:
        c=0
        temp=num
        while temp>0:
            if num % (temp%10) == 0:
                c+=1
            temp//=10
        return c