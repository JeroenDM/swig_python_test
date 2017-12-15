import prime

print("Find prime numbers up to 50.")
print("----------------------------")
for i in range(1, 51):
    if prime.is_prime(i):
        print(str(i) + " is a prime number!")