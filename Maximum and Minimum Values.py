# Maximum and Minimum Values
A = []

for i in range(9):
    A.append(int(input()))

print("Maximum Value : ",max(A))
print("Location of Maximum Value : ",A.index(max(A))+1)
print("Minimum Value : ",min(A))
print("Location of Mimimum Value : ",A.index(min(A))+1)
