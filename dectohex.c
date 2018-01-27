#include <stdio.h>
#include <gmp.h>

int main(int argc, char * argv[]){

	if(argc!=2){
		fprintf(stderr, "Usage: ./dectohex n\n");
		fprintf(stderr, "Ou n est un nombre en decimal\n");
		return 0;
	}
	
	mpz_t res;
	mpz_init(res);
	mpz_set_str(res, argv[1], 10);
	gmp_printf("%Zx\n", res);
	mpz_clear(res);
	return 0;

}
