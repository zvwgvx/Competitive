from sympy import nextprime

# Một số lớn gần 1e40
start = 10**18 + 10**5 + 90**3 + 124214235632552 + 7242 + 224244892184
prime = nextprime(start)

print(prime)
