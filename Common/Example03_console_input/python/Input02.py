# read 2 console inputs and print concatenated text to the console
print("Enter 2 text: ", end = '')
line = input().split()[0:2]
while(len(line)<2):
    line.extend(input().split()[0:2])
print("You entered: " + line[0] + line[1])