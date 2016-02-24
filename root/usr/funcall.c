#include <u.h>
int ret;
out(port, val)
{
  asm(LL,8);   // load register a with port
  asm(LBL,16); // load register b with val
  asm(BOUT);   // output byte to console
}

write(int f, char *s, int n)
{
  int i;
  ret = 1;
  i=n;
  while (i--)
    out(f, *s++);
}  

main()
{

  //Change S1/S2 ID to your student ID, and change 12 to new str length
  write(1, "S1_ID S2_ID",12);
  ret= 0;
  asm(HALT);
}