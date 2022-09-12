import io, os

def verify (vet, dic, N):
	for i in range(0,N):
		count = 0
		for j in range(0,len(vet[i])):
			v = vet[i]
			if v[j] in dic:
				count = count +1
		if (count == len(vet[i])):
			return 'Y'

	return 'N'

input = io.BytesIO(os.read(0, \
         os.fstat(0).st_size)).readline

Ne = input().decode()

N = Ne

print(N)

vet = []
dic = {}
for i in range(0,N):
	A = input().decode()
	dic[A[0]] = 0
	vet.append(A)

print(verify(vet,dic,N))
