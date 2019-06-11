//gcd
#include<stdio.h>
long int gcd(long int m,long int n)
{
  if(n>m)
  {
    m=m+n;
    n=m-n;
    m=m-n;
  }
  while(n!=0)
  {
    long int temp=m%n;
    m=n;
    n=temp;
  }
  return m;
}
int main()
{
  long int n,q;
  scanf("%ld %ld",&n,&q);
  long int i;
  long int arr[n];
  long int l[q],r[q],ans[q];
  for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
  for(i=0;i<q;i++)
  {
    scanf("%ld %ld",&l[i],&r[i]);
    ans[i]=gcd(arr[l[i]-1],arr[r[i]-1]);
  }
  for(i=0;i<q;i++)
  {
    printf("%ld\n",ans[i]);
  }
  return 0;
}
