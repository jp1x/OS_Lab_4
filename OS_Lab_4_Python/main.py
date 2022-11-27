from datetime import datetime
import time

a, b, c, i = 0, 3, 3, 0
start_time = datetime.now()

while i <= 10**8:
    a += b * 2 + c - i
    i += 1

print(datetime.now() - start_time)