// a009 : 解碼器
#include <cstdio>
#include <cstring>

int main()
{
	// printf("input = %d\toutput = %d\n", '1' , '*' );
	char input[1000];
	scanf("%s", input );
	for( int i=0 ; i<strlen(input) ; i++ )
		printf("%c", input[i] - 7 );
	printf("\n");
	return 0;
}
