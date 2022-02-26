MAX = 200000000

f = [0] * MAX

def fib2(n) :
	if (n == 0) :
		return 0
	if (n == 1 or n == 2) :
		f[n] = 1
		return (f[n])
	if (f[n]) :
		return f[n]

	if( n & 1) :
		k = (n + 1) // 2
	else :
		k = n // 2

	if((n & 1) ) :
		f[n] = (fib2(k) * fib2(k) + fib2(k-1) * fib2(k-1))
	else :
		f[n] = (2*fib2(k-1) + fib2(k))*fib2(k)

	return f[n]

while True:
	valor = input().split(" ")
	A = int(valor[0])
	B = int(valor[1])
	N = int(valor[2])

	if A == 0 and B == 0 and N == 0:
		break
	fib2(N)
	resultado = 0
	for i in range(N):
		if (f[A]):
			valorA = f[A]
		else:
			valorA = fib2(A)
		if (f[B]):
			valorB = f[B]
		else:
			valorB = fib2(B)
		resultado += (valorA * f[B])
		A = A+1
		B = B+1
	
	print(resultado % 1000000007)

