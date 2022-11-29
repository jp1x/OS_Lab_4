from datetime import datetime
import ctypes as ct

a = ct.c_uint(0)
b = 2
c = 3
i = 0
start_time = datetime.now()

while i < 10**8:
    a.value += b * 2 + c - i
    i += 1

print(a.value)
print(datetime.now() - start_time)
