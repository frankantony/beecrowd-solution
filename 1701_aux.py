import math

def fibo(n):
	phi = (1 + math.sqrt(5)) / 2

	return round(pow(phi, n) / math.sqrt(5))
	
# This code is contributed by prasun_parate


# Python3 Program to find n'th fibonacci Number in
# with O(Log n) arithmetic operations
MAX = 100000000

# Create an array for memoization
f = [0] * MAX

# Returns n'th fuibonacci number using table f[]
def fib2(n) :
	# Base cases
	if (n == 0) :
		return 0
	if (n == 1 or n == 2) :
		f[n] = 1
		return (f[n])

	# If fib(n) is already computed
	if (f[n]) :
		return f[n]

	if( n & 1) :
		k = (n + 1) // 2
	else :
		k = n // 2

	# Applying above formula [Note value n&1 is 1
	# if n is odd, else 0.
	if((n & 1) ) :
		f[n] = (fib2(k) * fib2(k) + fib2(k-1) * fib2(k-1))
	else :
		f[n] = (2*fib2(k-1) + fib2(k))*fib2(k)

	return f[n]

def multiplica (F, M):
	x = F[0][0]*M[0][0] + F[0][1]*M[1][0]
	y = F[0][0]*M[0][1] + F[0][1]*M[1][1]
	z = F[1][0]*M[0][0] + F[1][1]*M[1][0]
	w = F[1][0]*M[0][1] + F[1][1]*M[1][1]
	
	F[0][0] = x
	F[0][1] = y
	F[1][0] = z
	F[1][1] = w

def potencia (F, n):
	if n == 0 or n == 1:
		return;
	M = [[1, 1], [1, 0]];
	potencia (F,n // 2)
	multiplica (F,F)
	if (n % 2 != 0):
		multiplica(F,M)

def fib (N):
	F = [[1,1],[1,0]]
	if N == 0:
		return 0
	potencia (F,N-1)
	return F[0][0]

while True:
	valor = input().split(" ")
	A = int(valor[0])
	B = int(valor[1])
	N = int(valor[2])

	if A == 0 and B == 0 and N == 0:
		break
	resultado = 0
	for i in range(N):
		resultado += (fibo(A) * fibo(B))
		A = A+1
		B = B+1
	
	print(resultado % 1000000007)
