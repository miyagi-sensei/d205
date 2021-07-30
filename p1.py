N = int(input())

print('{0}='.format(N), end='')
finished = False
while not finished:
    finished = True
    for i in range(2, int(N**0.5) + 1):
        if N % i == 0:
            print('{0}*'.format(i), end='')
            N //= i;
            finished = False
            break
print(N)