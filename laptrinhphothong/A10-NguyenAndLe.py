import math
a = input()
if a.find(".") == -1:
    print(a, 0)
else:
    print(a.replace(".", " 0."))
