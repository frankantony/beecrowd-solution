valor = input().split(" ")

F1 = int(valor[0])
F2 = int(valor[1])

if F1 == 1 and F2 == 1:
	print("A")
elif (F1 == 1 and F2 == 0):
	print("B")
else:
	print("C")

