#include <stdio.h>
#include <stdlib.h>

void wolaj_a(void);
void wolaj_b(void);

int main(void)
{
  wolaj_a();
  wolaj_a();
  wolaj_b();

  return 0;
}
void wolaj_a(void)
{
    printf("Panie Janie!\n");
}
void wolaj_b(void)
{
    printf("Rano wstan!\n");
}

