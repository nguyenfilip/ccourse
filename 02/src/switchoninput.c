#include <stdio.h>

int main(int argc, char **argv) {
	printf("pocet argumentu je %d\n", argc);
	if (argc < 2){
		puts("Neco zadej jako vstup!");
		return 1;
	}
	char prepinac = argv[1][0];
	printf ("Prepinac %c\n", prepinac);

	switch (prepinac){
	case 'x' : puts("ahoJ"); break;
	case 'h': puts("napoveda");break;
	default : puts("neznam prepinac");
	}

	//while ((byte = inputStream.read()) != null)
	return 0;
}
