# A Right-Angled Triangle

A = int(input())

for i in range(1,(A+1)):
    print(" "*(A-1) + "*"*i)

# Same Answer
# for i in range(1, (A+1)):
#    print(""*(A-1)+"*"*i)

# A version that only has a different direction of output
A = int(input())

for i in range(1,(A+1)):
    print(" "*(A-i) + "*"*i)
