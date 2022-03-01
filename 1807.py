import math

valor = (1 << 31) - 1

R = int(input())

congruencia = [3]

if R == 0:
	q = 0
else:
	q = int(math.log(R,2)) + 1

for i in range(1, q):
	congruencia.append((congruencia[i-1]*congruencia[i-1]) % valor)

i = q-1
resultado = 1

while R != 0 and i >= 0:
	if R < math.pow(2,i):
		i = i - 1
	else:
		R = R - math.pow(2,i)
		resultado = (resultado * congruencia[i]) % valor

print (resultado)

