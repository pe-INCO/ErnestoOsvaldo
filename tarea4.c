int main() {
	int a, b;


	do {
		printf("Ingrese un numero\n");
		b = scanf("%d", &a);

		if (b != 1 || a <= 0) {
			printf("El numero no es valido\n");
			getchar();
		}
		
	} while (b != 1 || a <= 0);

	return 0;
}





