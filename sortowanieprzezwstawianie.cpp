#include<iostream>
using namespace std;
 
void sortowanieprzezwstawianie(int n, int *tab)
{
     int pom, j;
     for(int i=1; i<n; i++)
     {
                                                                                 //wstawienie elementu w odpowiednie miejsce
             pom = tab[i];                                                       //ten element będzie wstawiony w odpowiednie miejsce
             j = i-1;
 
                                                                                 //przesuwanie elementów większych od pom
             while(j>=0 && tab[j]>pom) 
             {
                        tab[j+1] = tab[j];                                       //przesuwanie elementów
                        --j;
             }
             tab[j+1] = pom;                                                     //wstawienie pom w odpowiednie miejsce
     }     
}
 
int main()
{
    int n, *tab;
    cout<<"Podaj wielkość zbioru: ";
    cin>>n;
 
    tab = new int [n];
 
    for(int i=0; i<n; i++)
    {
            cout<<"Podaj "<<i+1<<" element: ";
            cin>>tab[i];
    }
 
    cout<<"Elementy przed sortowaniem: "<<endl;
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
 
    sortowanieprzezwstawianie(n, tab);
 
    cout <<"Elementy posortowaniem" <<endl;
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
 
    cin.ignore();
    cin.get();
    return 0;    
}
