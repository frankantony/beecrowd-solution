#include <cstdio>
#include<math.h> 

using namespace std;

int main() {
    float D,VF,VG;
	while (scanf("%f%f%f",&D,&VF,&VG) != EOF) {
		float distancia = sqrt(12*12 + D*D);
		if (distancia/VG <= 12.0f/VF)
			printf("S\n");
		else 
			printf("N\n");
	}

    return 0;
}
