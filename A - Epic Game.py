from math import gcd
nums = input().split()
for i in range(0, len(nums)):
    nums[i] = int(nums[i])
ctr = 0
while nums[-1] >= 0:
    for i in nums[:2]:
        x = gcd(i, nums[-1])
        nums[-1] = nums[-1] - x
        if nums[-1] < 0: break
        ctr = ctr + 1
if ctr % 2 != 0:
	print('0')
else:
	print('1')