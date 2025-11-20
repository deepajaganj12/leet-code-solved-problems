class leetcode(object):
    def intersectionSizeTwo(self, intervals):
        intervals.sort(key=lambda x: x[1])

        ans = 0       
        cur = []      
        
        for s, e in intervals:
            if not cur or s > cur[1]:
                ans += 2
                cur = [e - 1, e] 

            elif s > cur[0]:
                ans += 1
                if cur[1] == e:
                    cur = [e - 1, e]
                else:
                    cur = [cur[1], e]

        return ans


intervals = [[1,3],[3,7],[2,6],[2,3]]
print(leetcode().intersectionSizeTwo(intervals))
