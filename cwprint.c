#include <stdio.h>

main ()
{
    int	i,x,y;


    for	(;;)	{
	for	(y = 0;y < 5;y++)	{
    	    for	(x = 0;x < 5;x++)	{
		    i = rand () % 26;
		    printf ("%C",65+i);
		}
		printf (" ");
	};
	printf ("\n");
    }

}
