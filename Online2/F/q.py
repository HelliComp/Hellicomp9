import heapq

n = int(input())
nums = list(map(float, input().split()))

heapq.heapify(nums)

while len(nums) > 1:
    a = heapq.heappop(nums)
    b = heapq.heappop(nums)
    m = (a + b) / 2.0
    heapq.heappush(nums, m)

print(nums[0])
