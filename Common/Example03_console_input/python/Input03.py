# read multiple console inputs and print the sum to the console
print("Enter numbers (space-separated): ", end = '')
line = input().split()
sum = 0
for i in line:
    sum = sum + int(i)
print("Sum: " + str(sum))