while True:
	N = int(input())
	if N == 0:
		break
	fatorial = [0]*1000000
	fatorial[3] = 1
	for i in range(4,N+1):
		fatorial[i] = (i * fatorial[i-1]) % 1000000009
	print(fatorial[N])
