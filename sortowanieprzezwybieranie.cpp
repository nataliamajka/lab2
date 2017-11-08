#include<iostream>
#include<cstdlib>
using namespace std;
 
void sortwyb(int tab[],int n)                                                //n - ilość elementów do posortowania
{
int minindex;                                                                //zmienna pomocnicza przechowująca indeks komórki 
                                                                             //z minimalną wartością
  for(int i=0;i<n-1;i++)
  {
    minindex = i;
    for(int j=i+1;j<n;j++)                                                   //pętla wyszukuje najmniejszy element w podzbiorze nieposortowanym
    if(tab[j]<tab[minindex])
      minindex = j;
 
                                                                             //zamiana elementu najmniejszego w podzbiorze z pierwszą pozycją nieposortowaną
  swap(tab[i], tab[minindex]);
  }
}
 
int main()
{
  int *tab, n;
 
  cout<<"Ile liczb posortowac? ";
  cin>>n;
 
  tab = new int [n];
 
  for(int i=0;i<n;i++)
    cin>>tab[i];                                                            
 
  sortwyb(tab,n);                                                            
  
  for(int i=0;i<n;i++)
    cout<<tab[i]<<" ";                                                       
 
  cout<<endl;
  system("pause");  
  return 0;
}
