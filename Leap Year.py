# Leap Year

i = int(input())

if i % 4 == 0 and (i % 100 != 0 or i % 400 == 0):
    print("This year is Leap Year.")
else:
    print("It's not a Leap Year this year.")
    
# Leap Year: It means the year in which February is 29 days, not 28 days.
