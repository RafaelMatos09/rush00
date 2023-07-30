#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
};

void	rush(int  x, int  y)
{	
	if(x>=1 && y>=1)
	{	
		int     c;
	 	int     l;
  
  
		l = 1;
		while(l<=y)
		{
			c = 1;
			while(c<=x)
			{
				char printe;
				if (l == 1 && c == 1 || c == 1 && l == y )
				{
					printe = 'A';
					ft_putchar(printe);
				}
				else if(l == 1  && c == x || c == x && l == y )

				{
					printe = 'C';
					ft_putchar(printe);
				}
				else if (c > 1 && c < x && l == 1 || l == y)
				{
					printe = 'B';
					ft_putchar(printe);
 
				}
				else if (l > 1 &&  l < y  && c == 1 || c == x)
				{
					printe = 'B';
					ft_putchar(printe);
				}  
				else
				{
					printe = ' ';
					ft_putchar(printe);
				}
				c++;
			
			}
			ft_putchar('\n');
			l++;
		}
	}
	else
	{
		write(1 , "Entrada inválida", 17);
	}
}

int	main(void)
{
	rush(5,2);
	return 0;
}
