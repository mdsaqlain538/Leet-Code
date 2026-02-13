class Solution:
    def countSegments(self, s: str) -> int:

        words = s.split(' ')

        count=0

        for i in range(0,len(words)):
            if(words[i]!=''):
                count = count + 1

        return count
        