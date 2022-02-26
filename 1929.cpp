#include <cstdio>

using namespace std;

bool verifica_triangulo (int X, int Y, int Z) {
	if (X+Y > Z && X+Z > Y && Y+Z > X)
		return true;
	return false;
}

int main() {
	int X, Y, Z, W;
	scanf("%d%d%d%d", &X, &Y, &Z, &W);
// (x,y,z); (y,z,w); (z,w,x); (x,y,w); .
	if (verifica_triangulo(X,Y,Z) || verifica_triangulo(Y,Z,W) || verifica_triangulo(Z,W,X) || verifica_triangulo(X,Y,W))
		printf("S\n");
	else
		printf("N\n");

    return 0;
}

