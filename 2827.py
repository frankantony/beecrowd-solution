
/*
sa .dsadhsakj dsajhdjsah djksahdas . sad .dsadhjakshdjahs
*/


entry = input()
entry = entry.lower()
tam = len(entry)

dict = {}
for i in range(tam-1):
	s = entry[i] + entry[i+1] + ""
	if s in dict:
		dict[s] = dict[s] + 1
	else:
		dict[s] = 1

length_maximum = 0
for k in sorted(dict.keys()):
	if dict[k] > length_maximum:
		length_maximum = dict[k]
		string_maximum = k

print(string_maximum + ':' + str(dict[string_maximum]))
