/*void f1(struct fred_t *p)
{
    // dereference p and then check if it's NULL
    int x = p->x;
    if (p)
        do_something(x);
}

void f2()
{
    const char *p = NULL;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            p = str + i;
            break;
        }
    }

    // p is NULL if str doesn't have a space. If str always has a
    // a space then the condition (str[i] != '\0') would be redundant
    return p[1];
}

void f3(int a)
{
    struct fred_t *p = NULL;
    if (a == 1)
        p = fred1;

    // if a is not 1 then p is NULL
    p->x = 0;
}*/

bool f(int x)
{
  int i;
  if (x == 0)
  {
    i = 0;
    return false;
  }
  return true;
}

char* createT()
  { return new char[100]; }

void destroyT(void* p)
  { free(p); }

void s(int x)
{
    char* f = createT();
    if (x == 1)
        return;
    destroyT(f);
}

int main()
{
  char a[10];
  char b[20];
  a[10] = 0;
  strcpy(a, b, 25);
  for (int i=0; i<20; i++)
    b[i] = a[i];
  return 0;
}
And here are the errors detected by the tool:

