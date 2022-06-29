#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
using namespace std;
int n,m,a[20][20],ok;
int vi=0,ve=0;
int i,j,k,x,y;
int f[20][20];
int v[20];
void prima_pagina();
void iesire();
void optiuni();
void meniuldefinitii();
void meniultest();
void meniulaplicatii();
void verificare();
void verificarematrice();
void gradexterior();
void gradinterior();
void succesori();
void predecesori();
void aplicatia1();
void aplicatia2();
void citire();
void meniulgradvarf();
void meniuldefinitiegrad();
void meniulizolat();
void aplicatia3();
void meniulmetodereprezentare();
void meniulconexitate();
void meniultareconexitate();
void meniuldefizolat();
void verifizolat();
void meniuldeftconex();
void listaadiacenta();
void vectorarce();
void matricead();
void matriceind();
void matricedrum();
void matricesp();
void multimearce();
void meniuldefgconex();
void meniulcconex();
void veriftconex();
void citire3();
void matrice();
void drum();
void caracteristiciad();
void caracteristiciind();
void construirematind();
void caracteristicidr();
void roywarshall();
void aplicatiisp();
void definitiisp();

void roywarshall(){
system("CLS");
    int h;
    cout<<"                          Algoritmul Roy-Warshall de determinare a matricei drumurilor plecand de la matricea de adiacenta."<<endl;
    cout<<"                          Algoritmul consta intr-un dir de transformari aplicate matricei de adiacenta. Spunem ca exista un drum de la nodul i la nodul j, daca gasim un nod k cu proprietatea ca exista drum de la i la k si drum de la k la j. Astfel:"<<endl;
    cout<<"                            Un element a[i][j] care este 0 devine 1, daca exista un nod k astfel incat a[i][k]=1 si a[k][j]=1. Pentru a gasi toate arcele nodului k trebuie parcurse pe rand in variabila k toate nodurile 1,2,.., n. :"<<endl;
    cout<<endl<<endl;
for(int x=0;x<1;x++){cout<<"                          for(k=1;k<=n;k++){"<<endl;Sleep(100);
    }
for(int x=0;x<1;x++){cout<<"                          for(i=1;i<=n;i++){"<<endl;Sleep(100);
    }
for(int x=0;x<1;x++){cout<<"                          for(j=1;j<=n;j++)"<<endl;Sleep(100);
    }
for(int x=0;x<1;x++){cout<<"                          if((a[i][j]==0)&&(i!=k)&&j!=k)"<<endl;Sleep(100);
    }
for(int x=0;x<1;x++){cout<<"                          a[i][j]=a[i][k]*a[k][j];"<<endl;Sleep(100);
    }
for(int x=0;x<1;x++){cout<<"                          }"<<endl;Sleep(100);
    }
for(int x=0;x<1;x++){cout<<"                          }"<<endl;Sleep(100);
    }
    for(int x=0;x<1;x++){
            cout<<"                          Rezolvare:";
    Sleep(100);
    }
    cout<<endl;
    matrice();
                drum();
                cout<<endl<<"                          Matricea drumurilor este: "<<endl;
                for(i=1;i<=n;i++){
                    for(j=1;j<=n;j++){
                        cout<<a[i][j]<<" ";
                    }cout<<endl;

                }
cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulmetodereprezentare();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulmetodereprezentare();
}
}
void caracteristicidr(){
system("CLS");
    int h;
    cout<<"                          Fie G=(V, U) un graf orientat cu n varfuri (V={ 1,2, ..., n}) si m arce."<<endl;
    cout<<"                          Matricea drumurilor (D cu elementele {0,1}), asociata grafului G, este o matrice cu n linii si n coloane, cu elementele: ";
    cout<<endl;
    cout<<"                            D[i][j]==0, daca nu exista drum in G de la i la j";
    cout<<endl;
    cout<<"                            D[i][j]==1, daca exista drum in G de la i la j";
    cout<<endl;
    cout<<"                          -Matricea drumurilor este o matrice patratica. ";
    cout<<endl;
    cout<<"                          -Daca in matricea drumurilor D[i][i]=1, inseamna ca exista in graf un circuit de extremitati i.";
    cout<<endl;
    cout<<"                          -Daca in matricea drumurilor linia i si coloana i au elementele egale cu 0, nodul i este un nod izolat. ";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulmetodereprezentare();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulmetodereprezentare();
}
}
void caracteristiciind(){
system("CLS");
    int h;
    cout<<"                          Fie G=(V, U) un graf orientat cu n varfuri (V={1,2, ..., n}) ÅŸi m arce.";
    cout<<endl;
    cout<<"                      Matricea de incidenta(B cu elementele{-1,0,1}), asociatÄƒ grafului G, este o matrice cu n linii ÅŸi m coloane, cu elementele:";
    cout<<endl;
    cout<<"                    B[i][j]= -1, daca i este extremitate finala pentru arcul u[j];";
    cout<<endl;
    cout<<"                    B[i][j]= 0,daca i nu este extremiate pentru arcul u[j]; ";
    cout<<endl;
    cout<<"                    B[i][j]= 1, daca i este extremitate initiala pentru arcul u[j]; ";
    cout<<endl;
    cout<<"                          -Matricea varfuri-arce nu este neaparat o matrice patratica.";
    cout<<endl;
    cout<<"                          -Numarul elementelor egale cu l de pe linia i este egal cu gradul exterior al varfului i";
    cout<<endl;
    cout<<"                          -Numarul elementelor egale cu -1 de pe linia i este egal cu gradul interior al varfului i. ";
    cout<<endl;
    cout<<"                          -Daca varful i este un varf izolat, pe linia i nu sunt elemente egale cu 1 sau -1.";
    cout<<endl;
    cout<<"                          -Pe fiecare coloana j, exista un singur, element egal cu 1 si un singur element egal cu -1.";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)matriceind();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)matriceind();
}
}
void construirematind(){
system("CLS");
    int h;
    cout<<"                          Construire matrice de incidenta:";
    cout<<endl<<endl;
for(int x=0;x<1;x++){
            cout<<"                          void citire(){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Numarul de noduri: ';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>n;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Numarul de arce din graful dumneavoastra: ';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>m;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(m>n*(n-1))";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          {";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Prea multe arce, alege un numar mai mic.'<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>m;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Perechile: ';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=m;i++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>x>>y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                           while(a[x][y]==1){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Ai mai introdus acest arc, mai incearca odata!'<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>x>>y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          while(x==y){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Mai incearca odata, de data asta cu extremitati diferite!'<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>x>>y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          a[x][y]=1;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int main(){";
    Sleep(100);
    }
    cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          citire();";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          k=0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for (i=1;i<=n;i++)";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for (j=1;j<=m;j++)";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if (a[i][j]==1){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          k++;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          a[i][k]=1;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          a[j][k]=-1;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for (i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for (j=1;j<=m;j++){";
    Sleep(100);
    }
cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<a[i][j]<<' ';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          return 0;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    for(int x=0;x<1;x++){
            cout<<"                          Rezolvare:";
    Sleep(100);
    }
    cout<<endl;
    citire();
    k=0;
for (i=1;i<=n;i++)
for (j=1;j<=m;j++)
if (a[i][j]==1){
k=k+1;
a[i][k]=1;
a[j][k]=-1;
}
cout<<"                          Matricea de incidenta:"<<endl;
for (i=1;i<=n;i++){
for (j=1;j<=m;j++){
    cout<<a[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulmetodereprezentare();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulmetodereprezentare();
}
}
void drum(){
 for(k=1;k<=n;k++){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            if((a[i][j]==0)&&(i!=k)&&j!=k)
                a[i][j]=a[i][k]*a[k][j];
    }
 }
}
void matrice(){
citire3();
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
a[i][j]=0;
}
}
for(i=1;i<=m;i++){
a[x][y]=1;
}
}
void citire3(){
    int i,j,x,y;
    cout<<"                          Nr. de noduri: ";
    cin>>n;
    cout<<endl;
    cout<<"                          Nr. de arce: ";
    cin>>m;
    cout<<endl;
    cout<<"                          Perechile: "<<endl;
    for(i=1;i<=m;i++){
        cin>>x;
        cin>>y;
    while(a[x][y]==1){cout<<"                          Ai mai introdus acest arc, mai incearca odata"<<endl;
        cin>>x;
        cin>>y;
    }
        while(x==y){
            cout<<endl<<"                          Mai incearca odata, de data asta cu extremitati diferite!"<<endl;
                cin>>x;
                cin>>y;
                    }
        }
    }
void veriftconex(){
system("CLS");
    int h;
    cout<<"                        Algoritm pentru verificarea daca un graf orientat este tare conex sau nu:";
    citire();
    int n,m,s,d,i,x,k,j;
    int ok=0;
    for(k=1;k<=n;k++)
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
           if(a[i][j]==0&&i!=k&&j!=k)
              a[i][j]=a[i][k]*a[k][j];
    for(i=1;i<=n&&ok==0;i++)
    for(j=1;j<=n&&ok==0;j++)
    if(a[i][j]!=1)ok=1;
    if(ok==1)cout<<"Graful nu este tare conex.";
    else cout<<"Graful este tare conex";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniultareconexitate();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniultareconexitate();
}
}
void meniuldefgconex(){
system("CLS");
    int h;
    cout<<"                        Se numeÈ™te GRAF CONEX graful orientat cu proprietatea ca intre oricare doua noduri distincte exista cel putin un lant."<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulconexitate();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulconexitate();
}
}
void meniulcconex(){
system("CLS");
    int h;
    cout<<"                        Se numeste componenta conexa un subgraf conex si maximal cu aceasta calitate â€“ daca am mai adauga un nod, n-ar mai fi conex."<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulconexitate();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulconexitate();
}
}
void listaadiacenta(){
system("CLS");
    int h;
    cout<<"                          Pentru un graf orientat cu G=(V,U) se va memora numarul de noduri n si apoi, pentru fiecare nod x, lista succesorilor lui x, adica nodurilor y cu proprietatea ca exista arcul (x,y)."<<endl;
    cout<<endl;
    cout<<"                            La reprezentarea in memorie trebui avut in vedere ca dimensiunile listelor de succesori sunt variabile. De aceea, este neeficienta utilizarea unor tablouri alocate static. Astfel, putem folosi:";
    cout<<endl;
    cout<<"                            -un sir de n tablouri unidimensionale alocate dinamic;";
    cout<<endl;
    cout<<"                            -un sir de n vectori din STL;";
    cout<<endl;
    cout<<"                            -un sir de n liste simplu (dublu) inlantuite alocate dinamic.";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulmetodereprezentare();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulmetodereprezentare();
}
}
void vectorarce(){
system("CLS");
    int h;
    cout<<"                          Vectorul muchiilor u cu dimensiunea m - numarul de arce - ale carui elemente sunt inregistrari, fiecare inregistrare fiind formata din doua campuri, x si y, ce contin etichetele nodurilor care se gasesc la extremitatile arcului.Pentru elementele vectorului se defineste tipul de data muchie, de tip inregistrare."<<endl;
    cout<<"                            struct muchie{int x,y};"<<endl;
    cout<<"                            muchie u[<m>];"<<endl;
    cout<<"                          Referirea la un arc i se face prin u[i] iar la unul din noduri adiacente arcului se face prin u[i].x ( extremitatea initiala a arcului), respectiv u[i].y ( extremitatea finala a arcului)."<<endl;
    cout<<"                          Daca implementarea se face folosind matricea, atunci pentru orice arc i, u[i][0]!=u[i][1]. Daca implementarea se face folosind vectorul de inregistrari, atunci pentru orice arc i, u[i].x!=u[i].y."<<endl;
    cout<<"                          Aceasta reprezentare este recomandata pentru problemele in care se face prelucrarea succesiva a arcelor. Are avantajul ca permite adaugarea la tipul de data muchie si a altor campuri (lungime, cost etc.) corespunzaror unor marimi care pot fi asociate arcelor."<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulmetodereprezentare();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulmetodereprezentare();
}
}
void matricead(){
system("CLS");
    int h;
    cout<<"                          1.CARACTERISTICI;";
    cout<<endl<<endl;
    cout<<"                          2.APLICATIE;";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)caracteristiciad();
        else if(h==2)verificarematrice();
        else if(h==3)meniulmetodereprezentare();
    while (h!=1 && h!=2 && h!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)caracteristiciad();
        else if(h==2)verificarematrice();
        else if(h==3)meniulmetodereprezentare();
}
}
void caracteristiciad(){
system("CLS");
    int h;
    cout<<"                          Fie G=(V,U) un graf orientat cu n noduri, in care nu exista mai multe arce de la un nod la altul. Matricea de adiacenta a grafului este o matrice cu n linii si n coloane si elemente 0 sau 1, astfel:";
cout<<endl;
cout<<"                        A[i][j]==1 daca exista arcul (i,j)"<<endl;
cout<<"                        A[i][j]==0 daca nu exista arcul (i,j)"<<endl;
    cout<<"                            Matricea de adiacenta:"<<endl;
    cout<<"                          -are zero pe diagonala principala;"<<endl;
    cout<<"                          -nu este simetrica fata de diagonala principala;"<<endl;
    cout<<"                          -este patratica;"<<endl;
    cout<<"                          -este binara;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)matricead();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)matricead();
}
}
void matriceind(){
system("CLS");
    int h;
    cout<<"                          1.CARACTERISTICI;";
    cout<<endl<<endl;
    cout<<"                          2.APLICATIE;";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)caracteristiciind();
        else if(h==2)construirematind();
        else if(h==3)meniulmetodereprezentare();
    while (h!=1 && h!=2 && h!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)caracteristiciad();
        else if(h==2)verificarematrice();
        else if(h==3)meniulmetodereprezentare();
}
}
void matricedrum(){
system("CLS");
    int h;
    cout<<"                          1.CARACTERISTICI;"<<endl;
    cout<<endl<<endl;
    cout<<"                          2.ALGORITMUL ROY-WARSHALL;"<<endl;
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)caracteristicidr();
        else if(h==2)roywarshall();
        else if(h==3)meniulmetodereprezentare();
    while (h!=1 && h!=2 && h!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)caracteristicidr();
        else if(h==2)roywarshall();
        else if(h==3)meniulmetodereprezentare();
}
}
void aplicatiisp(){

}
void definitiisp(){

}
void matricesp(){
system("CLS");
    int h;
    cout<<"                          1.DEFINITII"<<endl;
    cout<<endl<<endl;
    cout<<"                          2.APLICATIE"<<endl;
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE;";
    cout<<endl;
    cin>>h;
    if (h==1)definitiisp();
        else if(h==2)aplicatiisp();
        else if(h==3)meniulmetodereprezentare();
    while (h!=1 && h!=2 && h!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if (h==1)definitiisp();
        else if(h==2)aplicatiisp();
        else if(h==3)meniulmetodereprezentare();
}
}
void multimearce(){
system("CLS");
    int h;
    cout<<"                          "<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulmetodereprezentare();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulmetodereprezentare();
}
}
void meniuldeftconex(){
system("CLS");
    int h;
    cout<<"                        Se numeÈ™te GRAF TARE CONEX graful orientat cu proprietatea ca intre oricare doua noduri distincte exista cel putin un drum.";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniultareconexitate();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniultareconexitate();
}
}
void verifizolat(){
    system("CLS");
    int h;
    cout<<"                          Urmatorul algoritm afiseaza varfurile izolate dintr-un graf.In cazul in care nu exista varfuri izolate, se afiseaza un mesaj corespunzator.";
    int x, y;
    cout<<endl;
    cout<<"                          Algoritm:";
    cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          void citire(){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int i,j,x,y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Nr. de noduri: ';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>n;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Nr. de arce: ';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>m;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Perechile: '<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=m;i++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>x;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          while(a[x][y]==1){cout<<'Ai mai introdus acest arc, mai incearca odata'<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>x;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          a[x][y]=1;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          while(x==y){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<endl<<'Mai incearca odata, de data asta cu extremitati diferite!'<<endl;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>x;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          a[x][y]=1;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int main(){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          citire();";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int e=0,g=0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Varfurile izolate sunt:';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          e=0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(j=1;j<=n;j++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(a[i][j]==0&&a[j][i]==0){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          e++;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(e==n){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<' '<<i;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          g++;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(g==0)";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<'Nu exista varfuri izolate!';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          return 0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          Rezolvare:";
    Sleep(100);
    }
    cout<<endl;
                citire();
                int e=0,g=0;
                cout<<"                          Varfurile izolate sunt:";
                for(i=1;i<=n;i++){
                        e=0;
                    for(j=1;j<=n;j++){
                        if(a[i][j]==0&&a[j][i]==0){
                            e++;
                        }
                    }
                    if(e==n){
                        cout<<" "<<i;
                        g++;
                        }
                    }
                if(g==0)
                    cout<<"                          Nu exista varfuri izolate!";
                    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulizolat();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulizolat();
}
}
void meniuldefizolat(){
    system("CLS");
    int h;
    cout<<"                        Un nod x se numeste izolat daca d+(x)=d-(x)=0 (are gradul interior si gradul exterior egal cu 0)."<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulizolat();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulizolat();
}
}
void meniulizolat(){
system("CLS");
    int h;
    cout<<"                          1.DEFINITIE";
    cout<<endl<<endl;
    cout<<"                          2.APLICATIE";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE;";
    cout<<endl<<endl;
    cin>>h;
        if(h==1)meniuldefizolat();
        else if(h==2)verifizolat();
        else if(h==3)meniulgradvarf();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniuldefizolat();
        else if(h==2)verifizolat();
        else if(h==3)meniulgradvarf();
}
}
void meniulmetodereprezentare(){
system("CLS");
    int h;
    cout<<"                          1.LISTA DE ADIACENTA";
    cout<<endl<<endl;
    cout<<"                          2.VECTORUL ARCELOR";
    cout<<endl<<endl;
    cout<<"                          3.MATRICEA DE ADIACENTA";
    cout<<endl<<endl;
    cout<<"                          4.MATRICEA DE INCIDENTA";
    cout<<endl<<endl;
    cout<<"                          5.MATRICEA DRUMURILOR";
    cout<<endl<<endl;
    cout<<"                          6.MATRICEA SUCCESORILOR SI A PREDECESORILOR";
    cout<<endl<<endl;
    cout<<"                          7.MULTIMEA ARCELOR (x,y), RESPECTIV(y,x)";
    cout<<endl<<endl;
    cout<<"                          8.REVENIRE;";
    cout<<endl<<endl;
    cin>>h;
        if(h==1)listaadiacenta();
        else if(h==2)vectorarce();
        else if(h==3)matricead();
        else if(h==4)matriceind();
        else if(h==5)matricedrum();
        else if(h==6)matricesp();
        else if(h==7)multimearce();
        else if(h==8)optiuni();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
        if(h==1)listaadiacenta();
        else if(h==2)vectorarce();
        else if(h==3)matricead();
        else if(h==4)matriceind();
        else if(h==5)matricedrum();
        else if(h==6)matricesp();
        else if(h==7)multimearce();
        else if(h==8)optiuni();
}
}
void meniulconexitate(){
system("CLS");
    int h;
    cout<<"                        1.DEFINITIE GRAF CONEX";
    cout<<endl<<endl;
    cout<<"                        2.DEFINITIE COMPONENTA CONEXA";
    cout<<endl<<endl;
    cout<<"                        3.REVENIRE";
    cout<<endl<<endl;
    cin>>h;
        if(h==1)meniuldefgconex();
        else if(h==2)meniulcconex();
        else if(h==3)optiuni();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniuldefgconex();
        else if(h==2)meniulcconex();
        else if(h==3)optiuni();
}
}
void meniultareconexitate(){
system("CLS");
    int h;
    cout<<"                        1.DEFINITII"<<endl<<endl;
    cout<<"                        2.VERIFICARE"<<endl<<endl;
    cout<<"                        3.REVENIRE"<<endl<<endl;
    cin>>h;
        if(h==1)meniuldeftconex();
        else if(h==2)veriftconex();
        else if(h==3)optiuni();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniuldeftconex();
        else if(h==2)veriftconex();
        else if(h==3)optiuni();
}
}
void aplicatia3(){
system("CLS");
    int h;
    cout<<"                          Scrieti un program in care, folosind subprograme, cititi de la tastatura numarul de varfuri (n) si de arce(m) precum si arcelele(folosind vectorul arcelor) unui graf orientat G=(X,U) si verificati daca o secventa de varfuri(citita de la tastatura) reprezinta un drum elementar sau ne-elementar in graf. Secventa de varfuri este scrisa pe un singur rand,varfurile fiind delimitate prin spatiu. In urma verificarii se va afisa un mesaj corespunzator.";
    int x, y;
    cout<<endl;
    cout<<"                          Algoritm:";
    cout<<" Scrieti un program in care, cititi de la tastatura numarul de varfuri (n) si de arce(m) precum si"<<endl;
               cout<<"arcelele(folosind vectorul arcelor) unui graf orientat G=(X,U) si verificati daca o secventa de 4 varfuri(citita de la tastatura)"<<endl;
               cout<<"reprezinta un drum elementar sau ne-elementar in graf.Secventa de varfuri este scrisa pe un singur rand, varfurile fiind delimitate prin"<<endl;
               cout<<"spatiu. In urma verificarii se va afisa un mesaj corespunzator."<<endl<<endl;

                cout<<"REZOLVARE: "<<endl;
                cout<<"#include <iostream>"<<endl;
                cout<<"using namespace std;"<<endl;
                cout<<"int n,m,M[101][101],v[5],nu,da=0;"<<endl;
                cout<<"struct arc{"<<endl;
                cout<<"int x,y;"<<endl;
                cout<<"};"<<endl;
                cout<<"arc v[20];"<<endl;
                cout<<"void citire()"<<endl;
                cout<<"{"<<endl;
                cout<<"cout<<'Scrie numarul varfurilor: ';"<<endl;
                cout<<"cin >> n;"<<endl;
                cout<<"cout<<endl;"<<endl;
                cout<<"cout<<'Scrie numarul arcelor: ';"<<endl;
                cout<<"cin >> m;"<<endl;
                cout<<"cout<<endl;"<<endl;
                cout<<"cout<<' Scrie '<<m<<' perechi de arce: '<<endl;"<<endl;
                cout<<"for(i=1;i<=m;i++){"<<endl;
                cout<<"cin>>v[i].x;"<<endl;
                cout<<"cin>>v[i].y;"<<endl;
                cout<<"while(v[i].x==v[i].y){"<<endl;
                cout<<"cout<<endl<<'Extremitatile trebuie sa fie diferite! Scrie arcul inca oadata!'<<endl;"<<endl;
                cout<<"cin>>v[i].x;"<<endl;
                cout<<"cin>>v[i].y;"<<endl;
                cout<<"}"<<endl;
                cout<<"}"<<endl;
                cout<<"}"<<endl;
                cout<<"void matrice(){"<<endl;
                cout<<"citire();"<<endl;
                cout<<"for(i=1;i<=n;i++){"<<endl;
                cout<<"for(j=1;j<=n;j++){"<<endl;
                    cout<<"M[i][j]=0;"<<endl;
                cout<<"}"<<endl;
                cout<<"}"<<endl;
                cout<<"for(i=1;i<=m;i++){"<<endl;
                cout<<"M[v[i].x][v[i].y]=1;"<<endl;
                cout<<"}"<<endl;
                cout<<"}"<<endl;
                cout<<"int main()"<<endl;
                cout<<"{"<<endl;
                cout<<"matrice();"<<endl;
                cout<<"cout<<'Scrie secventa: '"<<endl;
                cout<<"for(i=1;i<=4;i++){"<<endl;
                cout<<"cin>>v[i];}"<<endl;
                cout<<"cout<<endl;"<<endl;
                cout<<"for(k=1;k<=n;k++){"<<endl;
                cout<<"for(i=1;i<=n;i++){"<<endl;
                cout<<"for(j=1;j<=n;j++)"<<endl;
                cout<<"if((M[i][j]==0)&&(i!=k)&&j!=k)"<<endl;
                cout<<"M[i][j]=M[i][k]*M[k][j];"<<endl;
                cout<<"}"<<endl;
                cout<<"}"<<endl<<endl;
                cout<<"for(i=1;i<ok;i++){"<<endl;
                cout<<"if(M[v[i]][v[i+1]]==1)"<<endl;
                cout<<"da++;"<<endl;
                cout<<"}"<<endl;

                cout<<"if (da==3){"<<endl;
                cout<<"cout<<' Este drum ';"<<endl;
                cout<<"}else {cout<<' Nu este drum.';"<<endl;
                cout<<"nu=0;"<<endl;
                cout<<"}"<<endl;

                cout<<"if((v[1]==v[ok])&&nu!=0){"<<endl;
                cout<<"cout<<'neelementar.';}"<<endl;
                cout<<"if((v[1]!=v[ok])&&nu!=0){"<<endl;
                cout<<"cout<<'elementar.';"<<endl;
                cout<<"}"<<endl;
                cout<<"return 0;"<<endl;
                cout<<"}"<<endl;
                cout<<endl<<endl;
                cout<<" EXEMPLU: "<<endl;
                matrice();
                int v[5];
                cout<<"Scrie secventa: ";
                for(i=1;i<=4;i++){
                 cin>>v[i];
                    }
                cout<<endl;
                drum();
                int nu,da=0;

                for(i=1;i<4;i++){
                    if(a[v[i]][v[i+1]]==1)
                        da++;
                    }

                if (da==3){
                cout<<" Este drum ";
                    }else {cout<<" Nu este drum.";
                        nu=0;
                    }

                if((v[1]==v[4])&&nu!=0){
                    cout<<"neelementar.";}
                if((v[1]!=v[4])&&nu!=0){
                    cout<<"elementar.";
                    }
for(int x=0;x<1;x++){
            cout<<"                          Rezolvare:";
    Sleep(100);
    }
    cout<<endl;


    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
       if(h==1)meniulaplicatii();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulaplicatii();
}
}
void citire(){
    cout<<"                          Numarul de noduri: ";
            cin>>n;
            cout<<"                          Numarul de arce din graful dumneavoastra: ";
            cin>>m;
            if(m>n*(n-1))
            {
                cout<<"                          Prea multe arce, alege un numar mai mic."<<endl;
                cin>>m;
            }
     cout<<"                          Perechile: ";
     for(i=1;i<=m;i++){
        cin>>x>>y;
        while(a[x][y]==1){
            cout<<"                          Ai mai introdus acest arc, mai incearca odata!"<<endl;
            cin>>x>>y;
        }
        while(x==y){
                cout<<"                          Mai incearca odata, de data asta cu extremitati diferite!"<<endl;
        cin>>x>>y;
        }
        a[x][y]=1;
    }
    }
void meniuldefinitiegrad(){
    system("CLS");
    int h;
    cout<<"                        DefiniÈ›ie. Fie G=(V, U) un graf orientat si x un nod al sau."<<endl;
    cout<<"                          -Se numeste grad exterior al nodului x, numarul arcelor de forma (x,y) (adica numarul arcelor care ies din x), notat d+(x)."<<endl;
    cout<<"                          -Se numeste grad interior al nodului x, numarul arcelor de forma (y,x) (adica numarul arcelor care intra Ã®n x), notat d-(x)."<<endl;
    cout<<"                        Teorema: Intr-un graf orientat, suma gradelor exterioare a tuturor nodurilor este egala cu suma gradelor interioare a tuturor nodurilor si cu numarul de arce."<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
        if(h==1)meniulgradvarf();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulgradvarf();
}
}
void meniulgradvarf(){
    system("CLS");
    int h;
    cout<<"                          1.DEFINITII;";
    cout<<endl<<endl;
    cout<<"                          2.VARF IZOLAT;";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE;";
    cout<<endl;
    cin>>h;
       if(h==3)optiuni();
        else if(h==2)meniulizolat();
        else if(h==1)meniuldefinitiegrad();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==3)optiuni();
       else if(h==2)meniulizolat();
        else if(h==1)meniuldefinitiegrad();
}
}
void aplicatia2(){
    system("CLS");
    int h;
    cout<<"                          Se da un grup format din n persoane, care se cunosc sau nu intre ele. De la tastatura se introduc m perechi de numere intregi (x,y) cu semnificatiaâ€žpersoana x o cunoaste pe persoana y. Relatia de cunostinta nu este neaparat reciproca. Sa se determine cea/ cele mai cunoscute persoane";
    int x, y;
    cout<<endl;
    cout<<"                          Algoritm:";
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int a[20][20], m, n, ok;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          void citire(){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int x,y,i,j;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<' Nr. de prieteni:';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>n;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<' Nr. de prietenii:';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>m;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=m;i++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cout<<' Perechile:';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          cin>>y;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          a[x][y]=1;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int main(){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          int i,j,d=0,mostwanted=0,ok=0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          citire();";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          d=0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(j=1;j<=n;j++){if(a[j][i]==1) d++;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(d>mostwanted) mostwanted=d;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          d=0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          ok=0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          for(j=1;j<=n;j++){ ";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(a[j][i]==1) d++;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(d==mostwanted) ok++;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          if(ok>1) cout<<'exista '<<ok<<' persoane la fel de cunoscute, cu '<<d<<' prieten(i)';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          else if(ok==1)   cout<<'persoana nr. '<<i<<' este cea mai cunoscuta, cu '<<d<<' prieten(i)';";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          return 0;";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
for(int x=0;x<1;x++){
            cout<<"                          Rezolvare:";
    Sleep(100);
    }
    cout<<endl;
int i,j,d=0,mostwanted=0,ok=0;
citire();
for(i=1;i<=n;i++){
        d=0;
for(j=1;j<=n;j++){if(a[j][i]==1) d++;
   if(d>mostwanted) mostwanted=d;
}
}
for(i=1;i<=n;i++){
    d=0;
ok=0;
for(j=1;j<=n;j++){
        if(a[j][i]==1) d++;
if(d==mostwanted) ok++;
}
}
if(ok>1) cout<<"                           Exista"<<ok<<" persoane la fel de cunoscute, cu "<<d<<" prieten(i)";
else if(ok==1)   cout<<"                          Persoana nr. "<<i<<" este cea mai cunoscuta, cu "<<d<<" prieten(i)";
cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
       if(h==1)meniulaplicatii();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulaplicatii();
}
}
void aplicatia1(){
    system("CLS");
    int h;
    cout<<"                          Sa se calculeze, folosind subprogram, si sa se afiseze gradul exterior, gradul interior, multimea succesorilor si multimea predecesorilor pentru fiecare varf al grafului.";
    int x, y;
    cout<<endl;
    cout<<"                          Algoritm:";
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          int n, a[20][20];";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          void gradexterior(){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          int d=0;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int j=1;j<=n;j++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          d=d+a[i][j];";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<'Gradul exterior al varfului '<<i<<' este '<<d<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          d=0;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          void gradinterior(){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          int d=0;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int j=1;j<=n;j++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          d=d+a[i][j];";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<'Gradul interior al varfului '<<j<<' este '<<d<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          d=0;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          void succesori(){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<'Multimea succesorilor varfului '<<i<<' este{ ';";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int j=1;j<=n;j++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          if(a[i][j]!=0)";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<j<<' ';";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<'}'<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          void predecesori(){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int j=1;j<=n;j++)";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          {";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<'Multimea predecesorilor varfului '<<j<<' este{ ';";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          if(a[i][j]!=0)";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<i<<' ';";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<'}'<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          int main()";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          {";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cin>>n;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int i=1;i<=n;i++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          for(int j=1;j<=n;j++){";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cin>>a[i][j];";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          gradexterior();";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<endl<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          gradinterior();";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<endl<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          succesori();";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<endl<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          predecesori();";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          cout<<endl<<endl;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          return 0;";
    Sleep(100);
    }
cout<<endl;
        for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<"                          Rezolvare:";
    cout<<endl;
    int n,i,j;
    cin>>n;
    int a[20][20];
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    cout<<"                          a["<<i<<"]["<<j<<"]="; cin>>a[i][j];
    }
    }
    gradexterior();
    cout<<endl<<endl;
    gradinterior();
    cout<<endl<<endl;
    succesori();
    cout<<endl<<endl;
    predecesori();
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
       if(h==1)meniulaplicatii();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulaplicatii();
}
}
void succesori(){
for(int i=1;i<=n;i++){
cout<<"                          Multimea succesorilor varfului "<<i<<" este { ";
for(int j=1;j<=n;j++){
if(a[i][j]!=0)
cout<<j<<" ";
}
cout<<"}"<<endl;
}
}
void predecesori(){
for(int j=1;j<=n;j++)
{
cout<<"                          Multimea predecesorilor varfului "<<j<<" este { ";
for(int i=1;i<=n;i++){
if(a[i][j]!=0)
cout<<i<<" ";
}
cout<<"}"<<endl;
}
}
void gradinterior(){
int d=0;
for(int j=1;j<=n;j++){
for(int i=1;i<=n;i++){
d=d+a[i][j];
}
cout<<"                          Gradul interior al varfului "<<j<<" este "<<d<<endl;
d=0;
}
}
void gradexterior(){
int d=0;
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
d=d+a[i][j];
}
cout<<"                          Gradul exterior al varfului "<<i<<" este "<<d<<endl;
d=0;
}
}
void verificare(int &ok){
int i,j;
for(i=1;i<=n&&ok==0;i++) {
for(j=1;j<=m&&ok==0;j++) {
if(a[i][j]!=0&&a[i][j]!=1){
ok=1;
cout<<" Matricea data nu este matrice de adiacenta."<<endl; }
if(i==j&&a[i][j]!=0){
ok=1;
cout<<" Matricea data nu este matrice de adiacenta."<<endl;
}
}
}
}
void verificarematrice(){
    system("CLS");
    int h;
    cout<<"                          Scrieti un program in care, folosind subprograme, cititi de la tastatura doua numere naturale n si m dar si elementele unei matrice oarecare a[i,j] ( cu n linii si m coloane ) si verificati daca poate fi matrice de adiacenta pentru un graf orientat oarecare G. Se va afisa un mesaj corespunzator.";
    int x, y;
    cout<<endl;
    cout<<"                          Algoritm:";
    for(int x=0;x<1;x++){
            cout<<"                          int n,m,a[20][20];";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          void verificare(int &ok){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int i,j;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n&&ok==0;i++) {";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(j=1;j<=m&&ok==0;j++) {";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(a[i][j]!=0&&a[i][j]!=1){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          ok=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<' Matricea data nu este matrice de adiacenta.'<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(i==j&&a[i][j]!=0){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          ok=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<' Matricea data nu este matrice de adiacenta.'<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int main(){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int ok=0,i,j;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Numarul de linii: '; cin>>n;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Numarul de coloane: '; cin>>m;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n;i++){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(j=1;j<=m;j++){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'a['<<i<<']['<<j<<']=';";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cin>>a[i][j];";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(n!=m){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          ok=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<' Matricea data nu este matrice de adiacenta.'<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          else verificare(ok);";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(ok==0) cout<<' Matricea data poate fi matrice de adiacenta pentru un graf orientat deoarece verifica toate trasaturile acesteia: este binara,patratica si contine 0 pe diagonala principala!';";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          return 0;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    cout<<endl;
    cout<<"                          Rezolvare:";
    cout<<endl;
    int ok=0,i,j;
    cout<<"                          Numarul de linii: "; cin>>n;
    cout<<endl;
    cout<<"                          Numarul de coloane: "; cin>>m;
    cout<<endl;
    for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
    cout<<"                          a["<<i<<"]["<<j<<"]="; cin>>a[i][j];
    }
    }
    if(n!=m){
    ok=1;
    cout<<"                          Matricea data nu este matrice de adiacenta."<<endl;
    }
    else verificare(ok);
    if(ok==0) cout<<"                          Matricea data poate fi matrice de adiacenta pentru un graf orientat deoarece verifica toate trasaturile acesteia: este binara,patratica si contine 0 pe diagonala principala!";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>h;
       if(h==1)meniulaplicatii();
    while (h!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>h;
       if(h==1)meniulaplicatii();
}
}
void meniulaplicatii(){
    system("CLS");
    int a;
    cout<<"                          1.APLICATIA 1";
    cout<<endl<<endl;
    cout<<"                          2.APLICATIA 2";
    cout<<endl<<endl;
    cout<<"                          3.APLICATIA 3";
    cout<<endl<<endl;
    cout<<"                          4.REVENIRE";
    cout<<endl;
    cin>>a;
    if(a==1)aplicatia1();
    else if(a==2)aplicatia2();
    else if(a==3)aplicatia3();
    else if(a==4)optiuni();
    while (a!=1 && a!=2 && a!=3 && a!=4){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)aplicatia1();
    else if(a==2)aplicatia2();
    else if(a==3)aplicatia3();
    else if(a==4)optiuni();
}
}
void meniultest(){
    system("CLS");
    int a,x,k=0;
    cout<<"                          Testul cuprinde 10 intrebari, fiecare cu cate 4 variante de raspuns. Dupa fiecare raspuns, apare mesajul CORECT sau GRESIT (alaturi de raspunsul corect).La finalul testului apare nota.";
    cout<<endl;
    cout<<"                          1. Se considera graful orientat cu 5 noduri numerotate de la 1 la 5 si cu arcele: (1,2),(2,1),(2,5),(3,2),(4,3),(5,1),(5,2),(5,4). Determinati gradul intern al nodului cu gradul extern maxim.";
    cout<<endl;
    cout<<"                                 1)3;";
    cout<<endl;
    cout<<"                                 2)1;";
    cout<<endl;
    cout<<"                                 3)2;";
    cout<<endl;
    cout<<"                                 4)0;";
    cout<<endl;
    cout<<"                          Raspunsul tau:"; cin>>x;
    cout<<endl;
    if(x==2)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    if(x==1 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)1.";
    cout<<endl;
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==2)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==1 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)1.";
    cout<<endl;
    }
    cout<<endl;
    cout<<"                          2. Suma gradelor interne ale tuturor vî€€rfurilor unui graf orientat este totdeauna egalÄƒ cu";
    cout<<endl;
    cout<<"                                 1)numÄƒrul valorilor de 1 aflate sub diagonala principalÄƒ in matricea de adiacenta;";
    cout<<endl;
    cout<<"                                 2)suma tuturor valorilor aflate deasupra diagonalei principale in matricea de adiacenta;";
    cout<<endl;
    cout<<"                                 3)produsul gradelor externe ale tuturor varfurilor grafului;";
    cout<<endl;
    cout<<"                                 4)suma gradelor externe ale tuturor varfurilor grafului;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==4)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)suma gradelor externe ale tuturor varfurilor grafului.";
    cout<<endl;
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==4)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)suma gradelor externe ale tuturor varfurilor grafului.";
    cout<<endl;
    }
    cout<<"                          3. Numarul maxim de arce intr-un graf orientat cu n varfuri este:";
    cout<<endl;
    cout<<"                                 1)n*(n+1);";
    cout<<endl;
    cout<<"                                 2(n*(n-1))/2;";
    cout<<endl;
    cout<<"                                 3)n*n-1;";
    cout<<endl;
    cout<<"                                 4)n*(n-1);";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==4)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)n*(n-1).";
    cout<<endl;
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==4)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)n*(n-1).";
    cout<<endl;
    }
    cout<<endl;
    cout<<"                          4. Fie graful orientat G cu 5 varfuri, numerotate cu 1,2,3,4,5, si arcele (1,2), (1,3), (1,4), (2,3), (4,2), (4,5), (5,2), (2,4). Care dintre urmatoarele varfuri au gradul extern egal cu gradul intern?";
    cout<<endl;
    cout<<"                                 1)1 si 2;";
    cout<<endl;
    cout<<"                                 2)2 si 4;";
    cout<<endl;
    cout<<"                                 3)4 si 5;";
    cout<<endl;
    cout<<"                                 4)4 si 3;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)4 si 5.";
    cout<<endl;
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)4 si 5.";
    cout<<endl;
    }
    cout<<"                          5. Un graf orientat este tare conex daca:";
    cout<<endl;
    cout<<"                                 1)este un graf conex;";
    cout<<endl;
    cout<<"                                 2)intre oricare 2 noduri exista un drum;";
    cout<<endl;
    cout<<"                                 3)intre oricare 2 noduri exista un arc;";
    cout<<endl;
    cout<<"                                 4)intre oricare 2 noduri exista un lant;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==1 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)intre oricare 2 noduri exista un drum.";
    cout<<endl;
    if(x==2)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }

    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==1 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)intre oricare 2 noduri exista un drum.";
        cout<<endl;
        if(x==2)
        {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    }
    cout<<"                          6. Cate noduri ale grafului orientat cu 6 noduri si arcele (1,5), (1,6), (2,1), (2,3), (3,1), (3,4), (4,3), (4,5), (5,4), (6,5) au gradul interior egal cu gradul exterior?";
    cout<<endl;
    cout<<"                                 1)3;";
    cout<<endl;
    cout<<"                                 2)6;";
    cout<<endl;
    cout<<"                                 3)5;";
    cout<<endl;
    cout<<"                                 4)4;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)4.";
    cout<<endl;
    if(x==4)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)4.";
        cout<<endl;
        if(x==4)
        {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }

    }
    cout<<endl;
    cout<<"                          7. Elementele matricei de adiacenta a unui graf orientat cu n varfuri si m arce: ";
    cout<<endl;
    cout<<"                                 1)au suma valorilor = m;";
    cout<<endl;
    cout<<"                                 2)sunt simetrice fata de diagonala secundara;";
    cout<<endl;
    cout<<"                                 3)sunt simetrice fata de diagonala principala;";
    cout<<endl;
    cout<<"                                 4)au suma valorilor = 2*m;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==2 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)au suma valorilor = m.";
    cout<<endl;
    if(x==1)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==2 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)au suma valorilor = m.";
    cout<<endl;
    if(x==1)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }

    }
    cout<<endl;
    cout<<"                          8. Care e numarul minim de arce pe care trebuie sa le contina un graf cu 5 varfuri care astfel incat oricum ar fi acestea plasate sa existe cel putin un drum intre oricare doua varfuri?";
    cout<<endl;
    cout<<"                                 1)20;";
    cout<<endl;
    cout<<"                                 2)9;";
    cout<<endl;
    cout<<"                                 3)17;";
    cout<<endl;
    cout<<"                                 4)10;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)17.";
    cout<<endl;
    if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)17.";
    cout<<endl;
    if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }

    }
    cout<<endl;
    cout<<"                         9. Se considera graful orientat dat prin matricea de adiacenta alaturata, ale carui noduri sunt numerotate de la 1 la 4 corespunzator liniilor matricei. Sa se determine care sunt nodurile care au gradul intern egal cu 2:";
    cout<<endl;
    cout<<"                                 0 0 0 1";
    cout<<endl;
    cout<<"                                 1 0 0 0";
    cout<<endl;
    cout<<"                                 1 1 0 0";
    cout<<endl;
    cout<<"                                 0 1 1 0";
    cout<<endl;
    cout<<"                                 1)numai nodul 3;";
    cout<<endl;
    cout<<"                                 2)atat nodul 1 cat si nodul 2;";
    cout<<endl;
    cout<<"                                 3)nodul 4;";
    cout<<endl;
    cout<<"                                 4)numai nodul 1;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==1 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)atat nodul 1 cat si nodul 2.";
    cout<<endl;
    if(x==2)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==1 || x==3 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)atat nodul 1 cat si nodul 2.";
    cout<<endl;
    if(x==2)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    }
    cout<<endl;
    cout<<"                          10. Fie graful orientat cu 5 varfuri si urmatoarele arce: [1,2], [1,4], [3,1], [3,2], [4,5], [4,2], [5,1]. Cate circuite contine acest graf?";
    cout<<endl;
    cout<<"                                 1)3;";
    cout<<endl;
    cout<<"                                 2)2;";
    cout<<endl;
    cout<<"                                 3)4;";
    cout<<endl;
    cout<<"                                 4)1;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)4.";
    cout<<endl;
    if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)4.";
    cout<<endl;
    if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    }
    cout<<endl<<endl;
    cout<<"                          Nota finala: "<<k<<"/10";
    cout<<endl;
    if(k>=0 && k<=5)
    cout<<"                          Nu este ok!";
    cout<<endl<<endl;
    if(k>5 && k<=8)
    cout<<"                          Sigur puteai mai mult!";
    cout<<endl<<endl;
    if(k>8 && k<=10)
    cout<<"                          Felicitari!";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
       if(a==1)optiuni();
    while (a!=1){
        cout<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)optiuni();
}
}
void meniuldefinitii(){
    system("CLS");
    int a;
    for(int x=0;x<1;x++){
    cout<<"                          GRAF ORIENTAT:"<<endl;
    cout<<"                            =este perechea de multimi G=(x,U)"<<endl;
    cout<<"                             ,unde x= reprezinta multimea finita nevida ale carei elemente se numesc noduri sau varfuri;"<<endl;
    cout<<"                              U= reprezinta o multime de perechi ordonate de elemente distincte din x ale carei elemente se numesc arce."<<endl<<endl;
    Sleep(2800);
    }
    for(int x=0;x<1;x++){
    cout<<"                          ARC:"<<endl;
    cout<<"                            =este perechea ordonata de elemente distincte din x, multimea varfurilor;"<<endl<<endl;
     Sleep(2200);
    }
    for(int x=0;x<1;x++){
    cout<<"                          LANT:"<<endl;
    cout<<"                            = Fie G=(x, U) un graf orientat. Se numeste lant, Ã®n graful G, o succesiune de noduri, notata L = (x1 , x2 ,..., xp) cu proprietatea ca oricare doua noduri consecutive sunt adiacente. Lungimea unui lant este egala cu numarul de arce din care este alcatuit.Primul nod si ultimul nod dintr-un lant formeaza extremitatile lantului."<<endl<<endl;
     Sleep(2300);
    }
    for(int x=0;x<1;x++){
    cout<<"                          CIRCUIT:"<<endl;
    cout<<"                            =Se numeste circuit un drum simplu in care extremitatea initiala si finala sunt egale. Se numeste circuit elementar un circuit in care, cu exceptia extremitatilor, nu se repeta noduri."<<endl<<endl;
        Sleep(2300);
    }
        for(int x=0;x<1;x++){
    cout<<"                          GRAF PARTIAL:"<<endl;
    cout<<"                            -Fie G=(V, U) un graf orientat. Se numeÅŸte graf parÈ›ial al grafului G, graful orientat G1=(V, U1), unde U1 inclus sau identic cu U."<<endl<<endl;
        Sleep(3200);
    }
        for(int x=0;x<1;x++){
    cout<<"                          SUBGRAF:"<<endl;
    cout<<"                            -Fie graful G = (X, U). Un subgraf al lui G, este un graf G1 = (Y, V) unde Y inclusa in X, iar V va contine toate muchiile din U care au ambele extremitati in Y(altfel spus, un subgraf al unui graf se obtine eliminand niste noduri si toate muchiile incidente acestor noduri)."<<endl<<endl;
         Sleep(3000);
    }
        for(int x=0;x<1;x++){
    cout<<"                          GRAF COMPLET:"<<endl;
    cout<<"                            =este graful neorientat in care oricare 2 varfuri distincte sunt adiacente."<<endl<<endl;
        Sleep(2900);
    }
        for(int x=0;x<1;x++){
    cout<<"                          DRUM:"<<endl;
    cout<<"                            -Fie un graf neorientat G = (X, U). Graful G se numeste bipartit daca exista doua multimi A si B incluse in X astfel incat:"<<endl;
    cout<<"                            *multimile A si B nu au nici un punct comun;"<<endl;
    cout<<"                            *reuniunea multimilor A si B o constituie multimea X;"<<endl;
    cout<<endl<<endl;
         Sleep(3500);
    }
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
       if(a==1)optiuni();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)optiuni();
}
}
void optiuni(){
system("CLS");
int a;
    cout<<"                          1.DEFINITII";
    cout<<endl<<endl;
    cout<<"                          2.GRADUL UNUI VARF";
    cout<<endl<<endl;
    cout<<"                          3.METODE DE REPREZENTARE";
    cout<<endl<<endl;
    cout<<"                          4.CONEXITATE";
    cout<<endl<<endl;
    cout<<"                          5.TARE CONEXITATE";
    cout<<endl<<endl;
    cout<<"                          6.APLICATII";
    cout<<endl<<endl;
    cout<<"                          7.TEST";
    cout<<endl<<endl;
    cout<<"                          8.IESIRE";
    cout<<endl;
    cin>>a;
    if(a==1)meniuldefinitii();
    else if(a==2)meniulgradvarf();
    else if(a==3)meniulmetodereprezentare();
    else if(a==4)meniulconexitate();
    else if(a==5)meniultareconexitate();
    else if(a==6)meniulaplicatii();
    else if(a==7)meniultest();
    else if(a==8)iesire();
    while (a!=1 && a!=2 && a!=3 && a!=4 && a!=5 && a!=6 && a!=7 && a!=8){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniuldefinitii();
    else if(a==2)meniulgradvarf();
    else if(a==3)meniulmetodereprezentare();
    else if(a==4)meniulconexitate();
    else if(a==5)meniultareconexitate();
    else if(a==6)meniulaplicatii();
    else if(a==7)meniultest();
    else if(a==8)iesire();
    }
}
void iesire(){

}
void prima_pagina(){
    int a;
    cout<<endl<<endl;
    cout<<"                               GRAFURI ORIENTATE";
    cout<<endl<<endl;
    cout<<"                          ELEV: Mitran Ramona Luminita";
    cout<<endl<<endl;
    cout<<"                                CLASA A XI-A C";
    cout<<endl<<endl;
    cout<<"                               Semestrul al 2-lea";
    cout<<endl<<endl;
    cout<<"Continuati introducand numarul 1."<<endl<<endl<<endl;
    cin>>a;
    if(a==1)optiuni();
    while(a!=1){
            cout<<endl<<"Ai gresit tasta. Apasa alta tasta."<<endl;
        cin>>a;
        if(a==1)optiuni();

    }
}
int main()
{
    prima_pagina();
    return 0;
}
