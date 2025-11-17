class leetcode1437:
    def kLengthApart(self, nums, k):

        distance = 0
        found = False

        for num in nums:
            if num == 1:
                if distance <= k and found:
                    return False

                found = True
                distance = 0

            distance += 1

        return True


obj = leetcode1437()

n = int(input())
nums = list(map(int, input().split()))
k = int(input())

print(obj.kLengthApart(nums, k))
