#include<iostream>
#include<cstdlib>
using namespace std;
 
void sortowanie_babelkowe(int tab[],int n)
{ bool isSorted;
  for(int i=0;i<n;i++)
  {
	  isSorted=true;
    for(int j=1;j<n-i;j++)             //pętla wewnętrzna
   {
    if(tab[j-1]>tab[j])
                                   //zamiana miejscami
      swap(tab[j-1], tab[j]);
      isSorted=false;
      if(true==isSorted) break;
    }
  }
}
 
int main()
{
  int *tab, n;
 
  cout<<"Ile liczb bedziesz chcial posortowac? ";
  cin>>n;
 
  tab = new int [n]; //przydzielenie pamięci na elementy tablicy
  //wczytanie liczb
  for(int i=0;i<n;i++)
    cin>>tab[i];
 
  sortowanie_babelkowe(tab,n);
 
  //wypisanie posortowanych elementów
  for(int i=0;i<n;i++)
          cout<<tab[i]<<" ";
 
  cout<<endl;
  system("pause");
  return 0;
}
 
