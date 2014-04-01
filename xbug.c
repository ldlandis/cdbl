#include <ctype.h>
int
func(x)							/* Function	*/
{
  printf("called func\n");
} /* func */

main()
{
  if (isdigit)
    printf("isdigit took non-zero path\n");
  else
    printf("isdigit took the zero path\n");

  if (func)
    printf("func took non-zero path\n");
  else
    printf("func took the zero path\n");
}
