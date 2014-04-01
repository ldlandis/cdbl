union
  {
    struct
      {
        char aa[10];
	char ab[5];
      }  a;
    struct
      {
        char ba[5];
	char bb[10];
      }  b;
    struct
      {
        char ca[3][5];
      }  c;
  }  u
= { '1', '2', '3', '4', '5',
    '6', '7', '8', '9', '0',
    'A', 'B', 'C', 'D', 'E'
  };

#define P(x) printf("%*.*s\n", sizeof(u.x), sizeof(u.x), u.x)
main()
{
  P(a.aa);
  P(a.ab);
  P(b.ba);
  P(b.bb);
  P(c.ca[0]);
  P(c.ca[1]);
  P(c.ca[2]);
}
