#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int speed[n];
  for(int i=0;i<n;i++)
    cin >> speed[i];

  if (n == 0)
  {
    printf("%0.6f",float(n));
    return 0;
  }
  
 /* if(n == 1)
  {
    printf("%0.6f",float(n));
    return 0;
  }
   double per = 1,group = 0;
  
  for(int i=1; i<=n; i++)
  {
    per *= i;

    for(int j=1,mult =1 ;j<=i; mult *= ++j )
    {
      group += (per/mult);
    }

  }
  
  if (n%2 == 0)
    group--;

  group -=n;
  printf("%0.6f",group/per);
  */
  return 0;
}