#include <stdio.h>
#include <gmp.h>

int main(int argc, char * argv[]){

	if(argc!=2){
		fprintf(stderr, "Usage: ./hextodec X\n");
		fprintf(stderr, "Ou X est un nombre en hexadecimal\n");
		return 0;
	}
	
	mpz_t res;
	mpz_init(res);
	mpz_set_str(res, argv[1], 16);
	gmp_printf("%Zd\n", res);
	mpz_clear(res);
	return 0;

}
