int factorial( int n )
{
  if ( n < 1 )
    return 0;
  else if ( n == 1 )
    return 1;
  else
    return n * factorial(n-1);
}