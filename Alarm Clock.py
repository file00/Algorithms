# Alarm Clock
# Setting the alarm 45 minutes early

H, M = map(int, input().split())

if H >= 1 and M < 45:
    print(H-1, M+15)
elif H == 0 and M < 45:
    print(H+23,M+15)
else:
    print(H,M-45)
