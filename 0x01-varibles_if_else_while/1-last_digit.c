#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
for (int count=1; count <= 100; ++count)
    {
        std::cout << std::rand() << "\t";
  
        // display 5 random numbers per row
        if (count % 5 == 0)
            std::cout << "\n";
     }
	return (0);
}