class Solution:
    def truncateSentence(self, s: str, k: int) -> str:

        words = s.split(' ')
        res = ''
        for i in range(0,len(words)):
            if(i<k-1):
                res=res+words[i]
                res=res+' '
            if(i==k-1):
                res=res+words[i]

        return res
        