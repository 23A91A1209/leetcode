class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        c=0
        for i in stones:
            for j in i:
                if j in jewels:
                    c=c+1
        return c