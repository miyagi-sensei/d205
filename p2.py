# recursive solution

# returns a list of prime factors of n
def factorize(n):
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return [i] + factorize(n // i)
    return [n]

N = int(input())

print('{0}='.format(N), end='')
print('*'.join(map(str, factorize(N))))