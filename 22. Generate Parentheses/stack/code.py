class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ans = []
        stack = [("(",n-1,n)]

        while stack:
            item = stack.pop()

            fst = item[0]
            snd = item[1]
            trd = item[2]

            if (snd == 0 and trd ==0):
                ans.append(fst)
            
            else:
                if (snd !=0 ):
                    stack.append([fst +"(",snd-1, trd])
                
                if( snd < trd):
                    stack.append([fst +")",snd, trd-1])
                
            
        return ans