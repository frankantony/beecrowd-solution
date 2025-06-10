import math

def isNumber (n):
	l = len(n)
	for i in range(0,l):
		if n < '0' or n > '9':
			return False
	return True


def isPrime (N):
	if N < 2:
		return False
	root = int(math.sqrt(N)) + 1
	for i in range(2,root):
		if N % i == 0:
			return False
	return True

fact = []
fact.append(1)
for i in range(1, 100):
	fact.append(fact[i-1] * i)

N = int(input())

value = input()

for v in value.split(' '):
	if isNumber(v) and isPrime(int(v)):
		print("{0}! = {1}".format(v,fact[int(v)]))

for i in range(0,N):
	if (isPrime(vet[i])):
		print("{0}! = {1}".format(vet[i],fact[vet[i]]))
