def verifica_mediana (A, B, C):
	if ((A <= C and C <= B) or (B <= C and C <= A)):
		return True
	else:
		return False

while(True):
	valor = input().split(" ")
	vet = []
	A = int(valor[0])
	B = int(valor[1])
	if A ==  0 and B == 0:
		break
	vet.append(A)
	vet.append(B)

	candidato1 = 3*vet[0] - (vet[0] + vet[1])
	candidato2 = 3*vet[1] - (vet[0] + vet[1])

	if (verifica_mediana(vet[1], candidato1, vet[0]) and verifica_mediana(vet[0], candidato2, vet[1])):
		if candidato1 <= candidato2:
			print(candidato1)
		else:
			print(candidato2)
	else:
		if(verifica_mediana(vet[1], candidato1, vet[0])):
			print(candidato1)
		else:
			print(candidato2)

