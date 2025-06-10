import math

T = int(input())
i = 1
while(i <= T):
	S1 = int(input(),2)
	S2 = int(input(),2)

	result = math.gcd (S1,S2)

	if result == 1:
		print("Pair #{0}: Love is not all you need!".format(i))
	else:
		print("Pair #{0}: All you need is love!".format(i))
	i = i + 1
