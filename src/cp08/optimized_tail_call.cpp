int factorial(int n)
{
  int temp = n;

loop:
  if (n < 1)
    return 0;
  else if (n == 1)
    return temp;
  else
  {
    n = n - 1;
    temp *= n;
    goto loop;
  }
}

int main()
{
  int i = factorial(5);
  std::cout << i;
}