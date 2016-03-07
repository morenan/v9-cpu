#include <u.h>
int ret;
out(port, val)
{
  asm(LL,8);   // load register a with port
  asm(LBL,16); // load register b with val
  asm(BOUT);   // output byte to console
}

int write(int f, char *s, int n)
{
  int i = 1, j = 2;
  double d = 2.0;
  int k = 3;
  ret = 1;
  i=n;
  while (i--)
    out(f, *s++);
  return i;
}  

main()
{
  int i;
  ret = 0;
  //Change S1/S2 ID to your student ID, and change 12 to new str length
  ret = write(1, "S1_ID S2_ID",12);
  asm(HALT);
}
