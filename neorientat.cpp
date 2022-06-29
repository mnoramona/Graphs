#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
using namespace std;
    void prima_pagina();
    void optiuni();
    void meniuldefinitii();
    void meniulgradvarf();
    void meniulmetodereprezentare();
    void meniulparcurgeri();
    void meniulconexitate();
    void meniulhemiltonian();
    void meniuleulorian();
    void meniulaplicatii();
    void meniultest();
    void iesire();
    void meniuldefinitiegrad();
    void meniulizolat();
    void meniulterminal();
    void meniullistaadiacenta();
    void meniulvectormuchii();
    void meniulmatriceadiacenta();
    void meniullatime();
    void meniuladancime();
    void caracteristici();
    void aplicatii();
    void teoriehemiltonian();
    void teorieeulerian();
    void verificarehemiltonian();
    void verificareeulerian();
    void aplicatia1();
    void aplicatia2();
    void continuare();
    void continuare2();
    int a[20][20],b[20][20],c[20][20],n,m;
    int mat[10][10],v[10],n1,p,u,d[10],e[10];
    void graf_complet(){
if(m==n*(n-1)/2)
                cout<<"                              Graful este complet";
else
                cout<<"                              Graful nu este complet";
cout<<endl;
}

void muchii_lipsa()
{
cout<<"                              Muchiile care lipsesc pentru ca graful sa devina complet sunt: "<<endl;
int i,j;
for(i=1;i<=n-1;i++)
                for(j=i+1;j<=n;j++)
                               if(mat[i][j]==0)
                                               cout<<i<<" "<<j<<endl;


}

 void adancime(int n1)
{ int k;
 cout<<n1<<" ";
 v[n1]=1;
 for(k=1;k<=n;k++)
 if(mat[n1][k]==1&&v[k]==0)
 adancime(k);
}
void bf(int k)
{ int i,s,d;
  v[1]=k;
  e[k]=1;
  s=d=1;
  while(s<=d)
  { for(i=1;i<=n;i++)
     if(mat[v[s]][i]==1 && !e[i])
 { d++;
   v[d]=i;
   e[i]=1;
 }
    s++;
  }
  for(i=1;i<=d;i++) cout<<v[i]<<" ";
  cout<<endl;
}
void citire()
{ int i,j,e=0;
 for(i=1;i<n;i++)
 for(j=i+1;j<=n;j++)
 {cout<<"mat["<<i<<"]["<<j<<"]=";
 cin>>mat[i][j];
 mat[j][i]=mat[i][j];
 }
}
void parcurgl(int n1)
{ int i,j,l1;
p=1;
u=1;
d[p]=n1;
v[n1]=1;
while(p<=u)
 {l1=d[p];
 for(i=1;i<=n;i++)
 if(mat[l1][i]&&!v[i])
 {v[i]=1;
 u++;
 d[u]=i;}
 p++;}
 }
int verif()
{int i,j;
 for(i=1;i<n;i++)
 for(j=i+i;j<=n;j++)
 if(a[i][j]<b[i][j]) return 0;
 return 1;

}
void parcurg(int x)
{ int i;
 v[x]=1;
 for(i=1;i<=n;i++)
 if(mat[x][i]&&v[i]==0)
parcurg(i);
}
int conex()
{ int i;
 parcurg(1);
 for(i=1;i<=n;i++)
 if(v[i]==0)
 return 0;
 return 1;
}
    void scrie()
    {
        int i,j;
        cout<<n<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                cout<<c[i][j]<<" ";
            cout<<endl;
        }
    }
    int grad(int i)
    {
        int j,g=0;
        for(j=1;j<=n;j++) g+=c[i][j];
        return g;
    }
    void verificare(int &ok){
int i,j;
for(i=1;i<=n&&ok==0;i++) {
for(j=1;j<=p&&ok==0;j++) {
if(mat[i][j]!=0&&mat[i][j]!=1){
ok=1;
cout<<"                              Matricea data nu este matrice de adiacenta."<<endl;
}
if(i==j&&mat[i][j]!=0){
ok=1;
cout<<"                              Matricea data nu este matrice de adiacenta."<<endl;
}
if(mat[i][j]!=mat[j][i]){
ok=1;
cout<<"                              Matricea data nu este matrice de adiacenta."<<endl;
}
}
}
}
void prima_pagina(){
    int a;
    cout<<endl<<endl;
    cout<<"                              GRAFURI NEORIENTATE                             ";
    cout<<endl<<endl;
    cout<<"                          ELEV: Mitran Ramona Luminita                          ";
    cout<<endl<<endl;
    cout<<"                                CLASA A XI-A C                                ";
    cout<<endl<<endl;
    cout<<"                               Semestrul al 2-lea                               ";
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
void iesire(){

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
    cout<<"                          4.PARCURGERI";
    cout<<endl<<endl;
    cout<<"                          5.CONEXITATE";
    cout<<endl<<endl;
    cout<<"                          6.GRAF HEMILTONIAN";
    cout<<endl<<endl;
    cout<<"                          7.GRAF EULERIAN";
    cout<<endl<<endl;
    cout<<"                          8.APLICATII";
    cout<<endl<<endl;
    cout<<"                          9.TEST";
    cout<<endl<<endl;
    cout<<"                          10.IESIRE";
    cout<<endl;
    cin>>a;
    if(a==1)meniuldefinitii();
    else if(a==2)meniulgradvarf();
    else if(a==3)meniulmetodereprezentare();
    else if(a==4)meniulparcurgeri();
    else if(a==5)meniulconexitate();
    else if(a==6)meniulhemiltonian();
    else if(a==7)meniuleulorian();
    else if(a==8)meniulaplicatii();
    else if(a==9)meniultest();
    else if(a==10)iesire();
    while (a!=1 && a!=2 && a!=3 && a!=4 && a!=5 && a!=6 && a!=7 && a!=8 && a!=9 && a!=10){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniuldefinitii();
    else if(a==2)meniulgradvarf();
    else if(a==3)meniulmetodereprezentare();
    else if(a==4)meniulparcurgeri();
    else if(a==5)meniulconexitate();
    else if(a==6)meniulhemiltonian();
    else if(a==7)meniuleulorian();
    else if(a==8)meniulaplicatii();
    else if(a==9)meniultest();
    else if(a==10)iesire();
    }
}
void meniuldefinitii(){
    system("CLS");
    int a;
    for(int x=0;x<1;x++){
    cout<<"                          GRAF NEORIENTAT:"<<endl;
    cout<<"                            =este perechea de multimi G=(x,U)"<<endl;
    cout<<"                             ,unde x= reprezinta multimea finita nevida a varfurilor (sau 7 a nodurilor);"<<endl;
    cout<<"                              U= reprezinta multimea finita formata din perechi de elemente distincte ale multimii x."<<endl<<endl;
    Sleep(2800);
    }
    for(int x=0;x<1;x++){
    cout<<"                          MUCHIE:"<<endl;
    cout<<"                            =este legatura dintre 2 varfuri sau noduri;"<<endl<<endl;
     Sleep(2200);
    }
    for(int x=0;x<1;x++){
    cout<<"                          LANT:"<<endl;
    cout<<"                            =este succesiunea de varfuri cu proprietatea ca oricare 2 varfuri consecutive sunt adiacente"<<endl<<endl;
     Sleep(2300);
    }
    for(int x=0;x<1;x++){
    cout<<"                          CICLU:"<<endl;
    cout<<"                            =este lantul in care extremitatile coincid"<<endl<<endl;
        Sleep(2300);
    }
        for(int x=0;x<1;x++){
    cout<<"                          GRAF PARTIAL:"<<endl;
    cout<<"                            -Fie graful G = (X, U). Un graf partial al lui G, este un graf G1 = (X, V) cu V inclusa in U(altfel spus, un graf partial G1 al lui G, este chiar G, sau se obtine din G pastrand toate varfurile si eliminand niste muchii)."<<endl<<endl;
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
    cout<<"                          GRAF BIPARTIT:"<<endl;
    cout<<"                            -Fie un graf neorientat G = (X, U). Graful G se numeste bipartit daca exista doua multimi A si B incluse in X astfel incat:"<<endl;
    cout<<"                            *multimile A si B nu au nici un punct comun;"<<endl;
    cout<<"                            *reuniunea multimilor A si B o constituie multimea X;"<<endl;
    cout<<"                            *toate muchiile grafului au o extremitate in A si cealalta in B."<<endl<<endl;
         Sleep(3500);
    }
        for(int x=0;x<1;x++){
    cout<<"                          GRAF BIPARTIT COMPLET:"<<endl;
    cout<<"                            -Fie un graf neorientat G = (X, U). Graful G se numeste bipartit complet daca este bipartit si are in plus proprietatea ca pentru orice nod x din A si orice nod y din B exista muchia [x, y]."<<endl<<endl;
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
void meniulgradvarf(){
    system("CLS");
    int a;
    cout<<"                          1.DEFINITIE";
    cout<<endl<<endl;
    cout<<"                          2.UNGHI IZOLAT";
    cout<<endl<<endl;
    cout<<"                          3.UNGHI TERMINAL";
    cout<<endl<<endl;
    cout<<"                          4.REVENIRE";
    cout<<endl<<endl;
    cin>>a;
    if(a==1)meniuldefinitiegrad();
    else if(a==2)meniulizolat();
    else if(a==3)meniulterminal();
    else if(a==4)optiuni();
    while (a!=1 && a!=2 && a!=3 && a!=4){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniuldefinitiegrad();
    else if(a==2)meniulizolat();
    else if(a==3)meniulterminal();
    else if(a==4)optiuni();
}
}
void meniuldefinitiegrad(){
    system("CLS");
    int a;
    cout<<"                          Gradul unui varf X, notat cu d(X), reprezinta numarul de muchii incidente cu varful X, sau numarul de varfuri adiacente";
    cout<<endl<<endl;
    cout<<"                          Teorema: Intr-un graf neorientat, suma gradelor tuturor varfurilor este dublul numarului de muchii.";
    cout<<endl;
    cout<<"                           !Suma gradelor tuturor varfurilor este numar par.";
    cout<<endl;
    cout<<"                           !Intr-un graf neorientat, numarul de varfuri de grad impar este intotdeauna par.";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==1) meniulgradvarf();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulgradvarf();
}
}
void meniulizolat(){
    int a,b;
    do{
    system("CLS");
    cout<<"                          Varful izolat reprezinta varful al carui grad este egal cu 0.";
    cout<<endl<<endl;
    cout<<"                          0.REALIZAREA UNUI EXEMPLU;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==0){
            for(int x=0;x<1;x++){
            cout<<"                   int grad(int i){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int j,g=0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(j=1;j<=n;j++) g+=c[i][j];";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   return g;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int main(){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int i,j,k,d=0,e=0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Introduceti numarul de noduri:';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>n;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de muchii: ';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>m;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   while(2*m>n*(n-1)){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat '<<n*(n-1)/2<<'.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>m;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(2*m<=(n-1)*n){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(k=1;k<=m;k++){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<'Primul nod al muchiei '<<k<<': '; ";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cin>>i;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<'Al doilea nod al muchiei '<<k<<': '; ";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cin>>j;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     c[i][j]=1; c[j][i]=1;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   e=e+2;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(e>2*m){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Datele introduse in matrice nu corespund cu numarul de muchii.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   else{";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(i=1;i<=n;i++)if(grad(i)==0) d++;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(d!=0){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<'Nodurile izolate sunt: ';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     for(i=1;i<=n;i++) if(grad(i)==0) cout<<i<<' ';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   else cout<<'Nu exista varfuri izolate';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   };";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<endl<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   return 0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   };";
            Sleep(100);
    }
            cout<<endl;
            cout<<endl<<endl<<endl;
        int i,j,k,d=0,e=0;
        cout<<"                   Introduceti numarul de noduri:";
        cin>>n;
        cout<<endl;
        cout<<"                   Introduceti numarul de muchii:";
        cin>>m;
        cout<<endl;
        while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
        }
        if(2*m<=(n-1)*n){
        for(k=1;k<=m;k++)
        {
            cout<<"                   Primul nod al muchiei "<<k<<": "; cin>>i;
            cout<<endl;
            cout<<"                   Al doilea nod al muchiei "<<k<<": "; cin>>j;
            cout<<endl;
            c[i][j]=1; c[j][i]=1;
            e=e+2;

        }
        if(e>2*m){
        cout<<"                          Datele introduse in matrice nu corespund cu numarul de muchii."<<endl;
        }
        else{
        for(i=1;i<=n;i++)if(grad(i)==0) d++;
        if(d!=0){
        cout<<"                   Nodurile izolate sunt: ";
        for(i=1;i<=n;i++) if(grad(i)==0) cout<<i<<" ";
        }
        else cout<<"                   Nu exista varfuri izolate";
        }
        }
        cout<<endl<<endl;
        cout<<"                          1.REVENIRE;";
        cout<<endl;
        cin>>b;
        if(b==1)meniulgradvarf();
        while (b!=1){
        cout<<endl<<endl<<"Ai gresit tasta."<<endl;
        cin>>b;
        if(b==1)meniulgradvarf();
        }
    }
    }
    while(a!=1);
        getchar();
    }
void meniulterminal(){
    int a,b;
    do{
    system("CLS");
    cout<<"                          Varful terminal reprezinta varful al carui grad este egal cu 1.";
    cout<<endl<<endl;
    cout<<"                          0.REALIZAREA UNUI EXEMPLU;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==0){
            for(int x=0;x<1;x++){
            cout<<"                   int grad(int i){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int j,g=0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(j=1;j<=n;j++) g+=c[i][j];";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   return g;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int main(){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int i,j,k,d=0,e=0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Introduceti numarul de noduri:';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>n;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de muchii: ';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>m;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   while(2*m>n*(n-1)){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat '<<n*(n-1)/2<<'.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>m;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(2*m<=(n-1)*n){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(k=1;k<=m;k++){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<'Primul nod al muchiei '<<k<<': '; ";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cin>>i;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<'Al doilea nod al muchiei '<<k<<': '; ";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cin>>j;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     c[i][j]=1; c[j][i]=1;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   e=e+2;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(e>2*m){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Datele introduse in matrice nu corespund cu numarul de muchii.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   else{";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(i=1;i<=n;i++)if(grad(i)==1) d++;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(d!=0){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     cout<<'Nodurile terminale sunt: ';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                     for(i=1;i<=n;i++) if(grad(i)==1) cout<<i<<' ';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   else cout<<'Nu exista varfuri terminale';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   };";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<endl<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   return 0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   };";
            Sleep(100);
    }
            cout<<endl;
            cout<<endl<<endl<<endl;
        int i,j,k,d=0,e=0;
        cout<<"                   Introduceti numarul de noduri:";
        cin>>n;
        cout<<endl;
        cout<<"                   Introduceti numarul de muchii:";
        cin>>m;
        cout<<endl;
        while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
        }
        if(2*m<=(n-1)*n){
        for(k=1;k<=m;k++)
        {
            cout<<"                   Primul nod al muchiei "<<k<<": "; cin>>i;
            cout<<endl;
            cout<<"                   Al doilea nod al muchiei "<<k<<": "; cin>>j;
            cout<<endl;
            c[i][j]=1; c[j][i]=1;
            e=e+2;

        }
        if(e>2*m){
        cout<<"                          Datele introduse in matrice nu corespund cu numarul de muchii."<<endl;
        }
        else{
        for(i=1;i<=n;i++)if(grad(i)==1) d++;
        if(d!=0){
        cout<<"                   Nodurile terminale sunt: ";
        for(i=1;i<=n;i++) if(grad(i)==1) cout<<i<<" ";
        }
        else cout<<"                   Nu exista varfuri terminale";
        }
        }
        cout<<endl<<endl;
        cout<<"                          1.REVENIRE;";
        cout<<endl;
        cin>>b;
        if(b==1)meniulgradvarf();
        while (b!=1){
        cout<<endl<<endl<<"Ai gresit tasta."<<endl;
        cin>>b;
        if(b==1)meniulgradvarf();
        }
    }
    }
    while(a!=1);
        getchar();
    }
void meniulmetodereprezentare(){
    system("CLS");
    int a;
    cout<<"                          1.LISTE DE ADIACENTA";
    cout<<endl<<endl;
    cout<<"                          2.VECTORUL MUCHIILOR";
    cout<<endl<<endl;
    cout<<"                          3.MATRICEA DE ADIACENTA";
    cout<<endl<<endl;
    cout<<"                          4.REVENIRE";
    cout<<endl<<endl;
    cin>>a;
    if(a==1)meniullistaadiacenta();
    else if(a==2)meniulvectormuchii();
    else if(a==3)meniulmatriceadiacenta();
    else if(a==4)optiuni();
    while (a!=1 && a!=2 && a!=3 && a!=4){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniullistaadiacenta();
    else if(a==2)meniulvectormuchii();
    else if(a==3)meniulmatriceadiacenta();
    else if(a==4)optiuni();
}
}
void meniullistaadiacenta(){
    int a,b;
        do{
        system("CLS");
        cout<<"                          Reprezentarea grafului G = (x,U) prin liste de adiacenta:"<<endl;
        cout<<"                            -se precizeaza numarul de varfuri, n;"<<endl;
        cout<<"                            -pentru fiecare varf i, se precizeaza lista vecinilor sai, adica lista nodurilor adiacente cu nodul i."<<endl<<endl;
    cout<<endl<<endl;
    cout<<"                          0.REALIZAREA UNUI EXEMPLU;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    while (a!=1 && a!=0){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    }
    if(a==1)meniulmetodereprezentare();
    if(a==0){
    int n,m,s,d,i,x[20][20],j;
    cout<<"                          Introduceti numarul de noduri: "; cin>>n;
    cout<<endl;
    cout<<"                          Introduceti numarul de muchii: "; cin>>m;
    cout<<endl;
    while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
    }
    if(2*m<=(n-1)*n){
    cout<<"                          Introduceti cate 2 numere, reprezentand nodurile intre care doriti sa creati o muchie (de preferat muchii distincte): ";
        for(i=1;i<=m;i++){
        cin>>s>>d;
        x[s][d]=1;
        x[d][s]=1;
    }
    cout<<endl<<endl;
     for (i=1;i<=n;i++){
    cout<<"                          Nodul "<<i<<": ";{
    for (j=1;j<=n;j++)if (i!=j && x[i][j]==1)cout<<j<<" ";
    cout<<endl;
}
}
    }
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==1)meniulmetodereprezentare();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulmetodereprezentare();
}
    }
}
while(a!=1);
   getchar();
}
void meniulvectormuchii(){
    system("CLS");
    int a;
    cout<<"                          Vectorul muchiilor U cu dimensiunea m - numarul de muchii-, ale carui elemente sunt inregistrari, fiecare inregistrare fiind formata din doua campuri, x si y, ce contin etichetele nodurilor care se gasesc la extremitatile muchiei. Pentru elementele vectorului se defineste tipul de data, de tip inregistrare.";
    cout<<endl<<endl;
    cout<<"                          struct muchie{";
    cout<<endl;
    cout<<"                                unsigned x,y;";
    cout<<endl;
    cout<<"                                }";
    cout<<endl<<endl;
    cout<<"                          Referirea la o muchie i se face prin u[i], iar la unul dintre nodurile adiacente muchiei se face prin u[i].x, respectiv u[i].y. ";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==1)meniulmetodereprezentare();
    while (a!=1 && a!=0){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulmetodereprezentare();
}
}
void meniulmatriceadiacenta(){
    system("CLS");
    int a;
    cout<<"                          1.CARACTERISTICI";
    cout<<endl<<endl;
    cout<<"                          2.APLICATII";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE";
    cout<<endl;
    cin>>a;
    if(a==1)caracteristici();
    else if(a==2)aplicatii();
    else if(a==3)meniulmetodereprezentare();
    while (a!=1 && a!=2 && a!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)caracteristici();
    else if(a==2)aplicatii();
    else if(a==3)meniulmetodereprezentare();
}
}
void caracteristici(){
    system("CLS");
    int a;
    cout<<"                          CARACTERISTICILE UNEI MATRICI DE ADIACENTA:";
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"                            a) este patratica ( are numarul de linii agel cu numarul de coloane egal cu numarul de varfuri); ";
    cout<<endl;
    cout<<"                            b) este binara ( contine doar valorile 0 si 1)";
    cout<<endl;
    cout<<"                            c) este simetrica fata de diagonala principala";
    cout<<endl;
    cout<<"                            d) contine DOAR 0 pe diagonala principala";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==1)meniulmatriceadiacenta();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulmatriceadiacenta();
}
}
void aplicatii(){
    int a;
    do{
        system("CLS");
        for(int x=0;x<1;x++){
            cout<<"                   void verificare(int &ok){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int i,j;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(i=1;i<=n&&ok==0;i++) {";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(j=1;j<=p&&ok==0;j++) {";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(mat[i][j]!=0&&mat[i][j]!=1){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   ok=1;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Matricea data nu este matrice de adiacenta.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(i==j&&mat[i][j]!=0){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   ok=1;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Matricea data nu este matrice de adiacenta.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(mat[i][j]!=mat[j][i]){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   ok=1";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Matricea data nu este matrice de adiacenta.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int main(){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   int ok=0,i,j,mat[20][20],p,e=0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de linii: '; cin>>n;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de coloane: '; cin>>p;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(n!=p){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   ok=1;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Matricea data nu este matrice de adiacenta. Motiv: nu este simetrica.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   else{";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de muchii: ';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>m;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   while(2*m>n*(n-1)){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat '<<n*(n-1)/2<<'.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cin>>m;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(2*m<=(n-1)*n){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(i=1;i<=n;i++){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   for(j=1;j<=p;j++){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'mat['<<i<<']['<<j<<']='; cin>>mat[i][j];";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(mat[i][j]==1) e++;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(e>2*m){";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   ok=1;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   cout<<'Datele introduse in matrice nu corespund cu numarul de muchii.'<<endl;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   else verificare(ok);";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   if(ok==0) cout<<'Matricea data poate fi matrice de adiacenta pentru un graf orientat deoarece verifica toate trasaturile acesteia: este binara, patratica, simetrica si contine 0 pe diagonala principala!';";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   return 0;";
            Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
            cout<<"                   }";
            Sleep(100);
    }
            cout<<endl<<endl<<endl;
    int ok=0,i,j,mat[20][20],e=0;
cout<<"                   Numarul de linii: "; cin>>n;
cout<<endl;
cout<<"                   Numarul de coloane: "; cin>>p;
cout<<endl;
cout<<endl;
if(n!=p){
    ok=1;
    cout<<"                   Matricea data nu este matrice de adiacenta deoarece nu este patratica."<<endl;
}
else{
    cout<<"                   Numarul de muchii: "; cin>>m;
    while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
    }
    if(2*m<=(n-1)*n){
        for(i=1;i<=n;i++){
        for(j=1;j<=p;j++){
            cout<<"                   mat["<<i<<"]["<<j<<"]="; cin>>mat[i][j];
            if(mat[i][j]==1) e++;
        }
    }
if(e>2*m){
        ok=1;
        cout<<"                          Datele introduse in matrice nu corespund cu numarul de muchii."<<endl;
}
else verificare(ok);
}
if(ok==0) cout<<"                   Matricea data poate fi matrice de adiacenta pentru un graf orientat deoarece verifica toate trasaturile acesteia: este binara, patratica, simetrica si contine 0 pe diagonala principala!";
}
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==1)meniulmatriceadiacenta();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
        if(a==1)meniulmatriceadiacenta();
    }
}
    while(a!=1);
    getchar();
}
void meniulparcurgeri(){
    system("CLS");
    int a;
    cout<<"                          1.IN LATIME";
    cout<<endl<<endl;
    cout<<"                          2.IN ADANCIME";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE";
    cout<<endl;
    cin>>a;
    if(a==1)meniullatime();
    else if(a==2)meniuladancime();
    else if(a==3)optiuni();
    while (a!=1 && a!=2 && a!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniullatime();
    else if(a==2)meniuladancime();
    else if(a==3)optiuni();
}
}
void meniuladancime(){
    system("CLS");
    int a;
    cout<<"                          Parcurgerea in adancime reprezinta explorarea 'naturala' a unui graf neorientat. Este foarte asemanatoare cu modul in care un turist viziteaza un oras in care sunt obiective turistice (varfurile grafului) si cai de acces intre obiective (muchiile). Vizitarea orasului va avea loc din aproape in aproape: se pleaca de la un obiectiv de pornire, se continua cu un obiectiv invecinat cu acesta, apoi unul invecinat cu al doilea, etc.";
    cout<<endl;
    cout<<"                          Parcurgerea in adancime se realizeaza astfel:";
    cout<<endl<<endl;
    cout<<"                          -Se incepe cu un varf initial x, care este in acest moment varf curent.";
    cout<<endl;
    cout<<"                          -Varful x se viziteaza. Se determina primul sau vecin nevizitat y al lui x, care devine varf curent.";
    cout<<endl;
    cout<<"                          -Apoi se viziteaza primul vecin nevizitat al lui y, si asa mai departe, mergand in adancime, pana cand ajungem la un varf care nu mai are vecini nevizitati. Cand ajungem intr-un astfel de varf, ne intoarcem la 'parintele' acestuia - varful din care am ajuns in acesta.";
    cout<<endl;
    cout<<"                          -Daca acest varf mai are vecini nevizitati, alegem urmatorul vecin nevizitat al sau si continuam parcurgerea in acelasi mod.";
    cout<<endl;
    cout<<"                          -Daca nici acest varf nu mai are vecini nevizitati, revenim in varful sau parinte si continuam in acelasi mod, pana cand toate varfurile accesibile din varful de start sunt vizitate.";
    cout<<endl;
    cout<<"                          -Daca nici acest varf nu mai are vecini nevizitati, revenim in varful sau parinte si continuam in acelasi mod, pana cand toate varfurile accesibile din varful de start sunt vizitate.";
    cout<<endl;
    cout<<"                                  !Daca graful nu este conex, nu se vor vizita toate varfurile.!";
    cout<<endl<<endl;
    cout<<"                          0.REALIZAREA UNUI EXEMPLU;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==0)continuare2();
    else if(a==1)meniulparcurgeri();
    while (a!=0 && a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==0)continuare2();
    else if(a==1)meniulparcurgeri();

}
}
void continuare2(){
    system("CLS");
    int a,b;
    cout<<"                           Presupunem ca graful are n noduri si este prezentat prin matricea de adiacenta a. Starea unui varf (vizitat sau nu) este memorata in vectorul caracteristic v. Toate aceste variabile sunt globale.";
    cout<<endl<<endl;
    cout<<"                          void dfs(int k)";
    cout<<endl;
    cout<<"                          {";
    cout<<endl;
    cout<<"                            v[k]=1; //vizitam varful curent x";
    cout<<endl;
    cout<<"                            for(int i=1;i<=n;i++) // determinam vecinii nevizitati ai lui x";
    cout<<endl;
    cout<<"                              if(a[k][i]==1 && v[i]==0)";
    cout<<endl;
    cout<<"                              {";
    cout<<endl;
    cout<<"                                dfs(i); // continuam parcurgerea cu vecinul curent i";
    cout<<endl;
    cout<<"                              }";
    cout<<endl;
    cout<<"                          }";
    cout<<endl<<endl;
    int n1;
    cout<<"                           Numarul de varfuri: ";cin>>n;
    citire();
    cout<<"                           Nodul de pornire=";cin>>n1;
    adancime(n1);
    cout<<endl;
    cin>>a;
    if(a==1)meniulparcurgeri();
    if(a==0){
            int n,m,s,d,i,x,f[21][21];
    cout<<"                   Introduceti numarul de noduri:";
    cin>>n;
    cout<<endl;
    cout<<"                   Introduceti numarul de muchii:";
    cin>>m;
    cout<<endl;
    cout<<"                   Introduceti nodul din care se incepe parcurgerea: ";
    cin>>x;
    cout<<"                   Introduceti cate 2 numere, reprezentand nodurile intre care doriti sa creati o muchie: ";
     for(i=1;i<=m;i++)
    {
        cin>>s>>d;
        f[s][d]=1;
        f[d][s]=1;
    }
    cout<<"     Nodurile parcurse sunt urmatoarele: ";
}
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>b;
       if(b==1)meniulparcurgeri();
    while (b!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>b;
    if(b==1)meniulparcurgeri();
}

    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulparcurgeri();
    if(a==0){
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>b;
       if(b==1)meniulparcurgeri();
    while (b!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>b;
    if(b==1)meniulparcurgeri();
}
    }
}
}
void meniullatime(){
    system("CLS");
    int a;
    cout<<"                          Se parcurge varful de start, apoi vecinii acestuia, apoi vecinii nevizitati ai acestora, etc, pana cand sunt vizitate toate varfurile accesibile. Practic, pentru a stabili ordinea de vizitare se foloseste o coada, iar pentru a stabili daca un varf a fost sau nu vizitat se foloseste un vector caracteristic.";
    cout<<endl;
    cout<<"                          Parcurgerea in latime se realizeaza astfel:";
    cout<<endl<<endl;
    cout<<"                          Se parcurge varful de start, apoi vecinii acestuia, apoi vecinii nevizitati ai acestora, etc, pana cand sunt vizitate toate varfurile accesibile. Practic, pentru a stabili ordinea de vizitare se foloseste o coada, iar pentru a stabili daca un varf a fost sau nu vizitat se foloseste un vector caracteristic.";
    cout<<endl;
    cout<<"                          Algoritmul este:";
    cout<<endl;
    cout<<"                          -adaugam in coada varful initial si il vizitam";
    cout<<endl;
    cout<<"                          -cat timp coada este nevida";
    cout<<endl;
    cout<<"                                  *extragem un element din coada";
    cout<<endl;
    cout<<"                                  *determinam vecinii nevizitati ai varfului extras, si vizitam si ii adaugam in coada";
    cout<<endl;
    cout<<"                                  *eliminam elementul din coada;";
    cout<<endl<<endl;
    cout<<"                          !Daca graful nu este conex, in urma parcurgerii nu se vor vizita toate varfurile.!";
     cout<<endl<<endl;
    cout<<"                          0.REALIZAREA UNUI EXEMPLU;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
    if(a==0)continuare();
    else if(a==1)meniulparcurgeri();
    while (a!=0 && a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==0)continuare();
        else if(a==1)meniulparcurgeri();

}
}
void continuare(){
    system("CLS");
    int a;
    cout<<"                          Functia de mai jos presupune ca un graf cu n varfuri este memorat prin intermediul matricei de adiacenta, vectorul x[] reprezinta coada, vectorul v[], aceste variabile fiind declarate global. Functia returneaza numarul de elemente care au fost vizitate.";
    cout<<endl<<endl;
    cout<<"                          int bfs(int start)";
    cout<<endl;
    cout<<"                          {";
    cout<<endl;
    cout<<"                            int i,k,st,dr;";
    cout<<endl;
    cout<<"                            //initializez coada";
    cout<<endl;
    cout<<"                            st=dr=1;";
    cout<<endl;
    cout<<"                            x[1]=start;";
    cout<<endl;
    cout<<"                            v[start]=1;//vizitez varful initial";
    cout<<endl;
    cout<<"                            while(st<=dr)//cat timp coada nu este vida";
    cout<<endl;
    cout<<"                            {";
    cout<<endl;
    cout<<"                              k=x[st];//preiau un element din coada";
    cout<<endl;
    cout<<"                              for(i=1;i<=n;i++)//parcurg varfurile";
    cout<<endl;
    cout<<"                                if(v[i]==0 && a[k][i]==1)//daca i este vecin cu k si nu este vizitat";
    cout<<endl;
    cout<<"                                {";
    cout<<endl;
    cout<<"                                  v[i]=1;//il vizitez";
    cout<<endl;
    cout<<"                                  x[++dr]=i;//il adaug in coada";
    cout<<endl;
    cout<<"                                }";
    cout<<endl;
    cout<<"                              st++;//sterg din coada";
    cout<<endl;
    cout<<"                            }";
    cout<<endl;
    cout<<"                            return dr;//returnam numarul de varfuri vizitate";
    cout<<endl;
    cout<<"                          }";
    cout<<endl;
    int i;
    cout<<"                          Numarul de varfuri: ";cin>>n;
    citire();
    cout<<"                          Nodul de pornire=";cin>>n1;
    parcurgl(n1);
    for(i=1;i<=n;i++)
    cout<<d[i]<<" ";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
       if(a==1)meniulparcurgeri();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulparcurgeri();
}
}
void meniulconexitate(){
    system("CLS");
    int a;
    for(int x=0;x<1;x++){
    cout<<"                             GRAF COMPLEX:";
    cout<<endl;
    cout<<"                          Un graf neorientat se numeste graf conex daca pentru oricare doua varfuri x si y diferite ale sale, exista cel putin un lant care le leaga, adica x este extremitatea initiala si y este extremitatea finala.";
    cout<<endl;
    cout<<"                            Un graf cu un singur nod este, prin definitie, conex.";
    cout<<endl<<endl;
    cout<<"                             COMPONENTA CONEXA:";
    cout<<endl;
    cout<<"                          Se numeste componenta conexa a unui graf G=(X,U) un subgraf H=(Y, V), conex, al lui G care are proprietatea ca nu exista nici un lant G care sa lege un varf din Y cu un varf din X  Y.";
    cout<<endl;
    cout<<"                            Subgraful H este conex si maximal cu aceasta proprietate (daca s-ar mai adauga un varf nu ar mai fi conex.)";
    cout<<endl;
    cout<<"                            Un graf este conex daca admite o singura componenta conexa.";
    cout<<endl<<endl;
    cout<<"                            Algoritmul pe care l-am folosit este urmatorul:";
    Sleep(3000);
    }
            cout<<endl;
    cout<<endl<<endl;
    for(int x=0;x<1;x++){
    cout<<"                            void citire(){";
    Sleep(100);
    }
            cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                            int i,j;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            for(i=1;i<n;i++){";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            for(j=i+1;j<=n;j++){";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            cout<<'mat['<<i<<']['<<j<<']=';";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            cin>>mat[i][j];";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            mat[j][i]=mat[i][j];";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            }";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            }";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            int conex(){";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            int i;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            parcurg(1);";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            for(i=1;i<=n;i++)";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            if(v[i]==0)";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            return 0;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            return 1;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            }";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            void parcurg(int x){";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            int i;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            v[x]=1;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            for(i=1;i<=n;i++)";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            if(mat[x][i]&&v[i]==0)";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            parcurg(i);";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            }";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            int main(){";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            int mat[20][20],e=0,i,j,n,v[20]";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            cout<<'Numarul de varfuri:'; cin>>n;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            citire();";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            if(conex()==1)";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            cout<<'Graful dat este conex';";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            else";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            cout<<'Graful dat NU este conex';";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            return 0;";
    Sleep(100);
    }
            cout<<endl;
            for(int x=0;x<1;x++){
    cout<<"                            }";
    Sleep(100);
    }
            cout<<endl;
    cout<<"                            Numarul de varfuri:"; cin>>n;
    citire();
    if(conex()==1)
    cout<<"                            Graful dat este conex";
    else
    cout<<"                            Graful dat NU este conex";
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
void meniulhemiltonian(){
    system("CLS");
    int a;
    cout<<"                          1.TEORIE";
    cout<<endl<<endl;
    cout<<"                          2.VERIFICARE( conform teoremei )";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE";
    cout<<endl;
    cin>>a;
    if(a==1)teoriehemiltonian();
    else if(a==2)verificarehemiltonian();
    else if(a==3)optiuni();
    while (a!=1 && a!=2 && a!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)teoriehemiltonian();
    else if(a==2)verificarehemiltonian();
    else if(a==3)optiuni();
}
}
void verificarehemiltonian(){
    system("CLS");
    int a;
    cout<<"                          Un graf neorientat in care gradul fiecarui varf este mai mare sau egal cu jumatate din numarul de varfuri este hamiltonian."<<endl;
    cout<<"                          Algoritmul este urmatorul: ";
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          ok=0;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          for(i=1;i<=n;i++)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          if(!v[i]>=n/2)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          ok=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          if(ok==1)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          cout<<'Graful nu este hamiltonian';";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          else cout<<'Graful este hamiltonian';";
    Sleep(100);
    }
    cout<<endl<<endl;
    cout<<"                          0.REALIZAREA UNUI EXEMPLU;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
        cin>>a;
        if(a==1)meniulhemiltonian();
        if(a==0)
        {
        int n,m,s,d,i,viz[101];
        cout<<"                          Numarul de noduri: ";
        cin>>n;
        cout<<"                          Numarul de muchii: ";
        cin>>m;
        cout<<endl;
        while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
        }
        if(2*m<=(n-1)*n){
        cout<<"                          Introduceti muchiile:";
        cout<<endl;
    for (int i=1; i<=m; i++)
    {
        cin>>s>>d;
            viz[s]++;
            viz[d]++;
        }
         int ok=0;
            for(i=1; i<=n; i++)
                if(!viz[i]>=n/2)
                    ok=1;
            if(ok==1)
                cout<<"                          Graful nu este hamiltonian"<<endl;
            else
                cout<<"                          Graful este hamiltonian;"<<endl;
        }
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
        cin>>a;
       if(a==1)meniulhemiltonian();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulhemiltonian();
    }
    }
    while (a!=1 && a!=0){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
        if(a==1) meniulhemiltonian();
    if(a==0)
        {
        int n,m,s,d,i,viz[101];
        cout<<"                          Numarul de noduri: ";
        cin>>n;
        cout<<"                          Numarul de muchii: ";
        cin>>m;
        cout<<"                          Introduceti muchiile:";
        cout<<endl;
    for (int i=1; i<=m; i++)
    {
        cin>>s>>d;
            viz[s]++;
            viz[d]++;
        }
         int ok=0;
            for(i=1; i<=n; i++)
                if(!viz[i]>=n/2)
                    ok=1;
            if(ok==1)
                cout<<"                          Graful nu este hamiltonian"<<endl;
            else
                cout<<"                          Graful este hamiltonian;"<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
        cin>>a;
       if(a==1)meniulhemiltonian();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulhemiltonian();
    }
    }
}
}
void teoriehemiltonian(){
    system("CLS");
    int a;
    cout<<"                        Definitii:";
    cout<<endl;
    cout<<"                          -Intr-un graf neorientat, se numeste LANT HEMILTONIAN un lant elementar care contine toate varfurile grafului.";
    cout<<endl;
    cout<<"                          -Intr-un graf neorientat, se numeste CICLU HEMILTONIAN un ciclu elementar care contine toate varfurile grafului.";
    cout<<endl;
    cout<<"                          -Un graf neorientat se numeste GRAF HEMILTONIAN daca contine un ciclu hamiltonian.";
    cout<<endl;
    cout<<"                        Teoreme:";
    cout<<endl;
    cout<<"                          -Fie G=(X,U) un graf neorientat cu n varfuri si un lant hamiltonian v1,v2,...,vn. Daca d(v1)+d(vn)>=n, atunci graful este hamiltonian, unde d(x) este gradul varfului x.";
    cout<<endl;
    cout<<"                          -Fie G=(X,U) un graf neorientat cu n varfuri. Daca pentru orice pereche de varfuri neadiacente distincte vi,vj avem relatia d(vi)+d(vj)>=n, atunci graful este hamiltonian.";
    cout<<endl;
    cout<<"                          -Un graf neorientat in care gradul fiecarui varf este mai mare sau egal cu jumatate din numarul de varfuri este hamiltonian.";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
           if(a==1)meniulhemiltonian();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniulhemiltonian();
}
}
void meniuleulorian(){
    system("CLS");
    int a;
    cout<<"                          1.TEORIE";
    cout<<endl<<endl;
    cout<<"                          2.VERIFICARE( conform teoremei )";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE";
    cout<<endl;
    cin>>a;
    if(a==1)teorieeulerian();
    else if(a==2)verificareeulerian();
    else if(a==3)optiuni();
    while (a!=1 && a!=2 && a!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)teorieeulerian();
    else if(a==2)verificareeulerian();
    else if(a==3)optiuni();
}
}
void teorieeulerian(){
    system("CLS");
    int a;
    cout<<"                        Definitii:";
    cout<<endl;
    cout<<"                          -Intr-un graf neorientat, se numeste LANT EULERIAN un lant simplu in care apare fiecare muchie (fiind lant simplu, fiecare muchie apare o singura data).";
    cout<<endl;
    cout<<"                          -Intr-un graf neorientat, se numeste CICLU EULERIAN un ciclu in care apare fiecare muchie.";
    cout<<endl;
    cout<<"                          -Un graf neorientat se numeste GRAF EULERIAN dacÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â£ contine un ciclu eulerian.";
    cout<<endl;
    cout<<"                        Teoreme:";
    cout<<endl;
    cout<<"                          -Un graf neorientat fara varfuri izolate este eulerian daca si numai daca este conex si toate varfurile au grad par.";
    cout<<endl;
    cout<<"                          -Un graf neorientat fara varfuri izolate contine un lant eulerian, daca si numai daca este conex si toate varfurile au grad par, mai putin doua. Aceste varfuri vor fi extremitatile lantului eulerian.";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
       if(a==1)meniuleulorian();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniuleulorian();
}
}
void verificareeulerian(){
    system("CLS");
    int a,b;
    cout<<"                          Un graf neorientat este eulerian daca si numai daca oricare varf al sau are gradul par."<<endl;
    cout<<"                          Algoritmul este urmatorul: ";
    cout<<endl;
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          ok=0;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          for(i=1;i<=n;i++)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          if(v[i]%2==1)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          ok=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          if(ok==1)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          cout<<'Graful nu este eulerian';";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
    cout<<"                          else cout<<'Graful este eulerian';";
    Sleep(100);
    }
    cout<<endl<<endl;
    cout<<"                          0.REALIZAREA UNUI EXEMPLU;";
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
        cin>>a;
        if(a==1)meniuleulorian();
        if(a==0)
        {
            int n,m,s,d,i,viz[100];
        cout<<"                          Numarul de noduri: ";
        cin>>n;
        cout<<"                          Numarul de muchii: ";
        cin>>m;
        cout<<endl;
        while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
        }
        if(2*m<=(n-1)*n){
        cout<<"                          Introduceti muchiile:";
        cout<<endl;
        for (int i=1; i<=m; i++)
        {
        cin>>s>>d;
            viz[s]++;
            viz[d]++;
        }
        int ok=0;
        for(i=1; i<=n; i++)
            if(viz[i]%2==1)
                ok=1;
        if(ok==1)
            cout<<"                          Graful nu este eulerian"<<endl;
        else
            cout<<"                          Graful este eulerian;"<<endl;
        }
            cout<<endl<<endl;
        cout<<"                          1.REVENIRE;";
        cout<<endl;
        cin>>b;
        if(b==1)meniuleulorian();
        while (b!=1){
        cout<<endl<<endl<<"Ai gresit tasta."<<endl;
        cin>>b;
        if(b==1)meniuleulorian();
        }
        }
        while (a!=1 && a!=0){
        cout<<endl<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)meniuleulorian();
    if(a==0)
        {
            int n,m,s,d,i,viz[100];
        cout<<"                          Numarul de noduri: ";
        cin>>n;
        cout<<"                          Numarul de muchii: ";
        cin>>m;
        cout<<"                          Introduceti muchiile:";
        cout<<endl;
        for (int i=1; i<=m; i++)
        {
        cin>>s>>d;
            viz[s]++;
            viz[d]++;
        }
        int ok=0;
        for(i=1; i<=n; i++)
            if(viz[i]%2==1)
                ok=1;
        if(ok==1)
            cout<<"                          Graful nu este eulerian"<<endl;
        else
            cout<<"                          Graful este eulerian;"<<endl;
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
        cin>>b;
       if(b==1)meniuleulorian();
    while (b!=1){
        cout<<endl<<endl<<"Ai gresit tasta."<<endl;
        cin>>b;
    if(b==1)meniuleulorian();
    }
    }
    }
}
void meniulaplicatii(){
    system("CLS");
    int a;
    cout<<"                          1.APLICATIA 1";
    cout<<endl<<endl;
    cout<<"                          2.APLICATIA 2";
    cout<<endl<<endl;
    cout<<"                          3.REVENIRE";
    cout<<endl;
    cin>>a;
    if(a==1)aplicatia1();
    else if(a==2)aplicatia2();
    else if(a==3)optiuni();
    while (a!=1 && a!=2 && a!=3){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
    if(a==1)aplicatia1();
    else if(a==2)aplicatia2();
    else if(a==3)optiuni();
}
}
void aplicatia1(){
    system("CLS");
    int a;
    cout<<"                          Se da un graf neorientat cu n varfuri si m muchii, citit prin vectorul muchiilor. Sa se afiseze pe linii separate componentele sale conexe.";
    int x, y;
    cout<<endl;
    cout<<"                          Algoritm:";
    for(int x=0;x<1;x++){
            cout<<"                          void bf(int k){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int i,s,d;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          v[1]=k;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          e[k]=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          s=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          d=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          while(s<=d){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n;i++)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(mat[v[s]][i]==1 && !e[i]){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          d++;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          v[d]=i;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          e[i]=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          s++;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=d;i++) cout<<v[i]<<' ';";
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
            cout<<"                          int main(){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int n,m,x,y,mat[20][20],e[20]";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Numar de varfuri:';";
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
            cout<<"                          cout<<'Numar de muchii:';";
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
            cout<<"                          while(2*m>n*(n-1)){";
    Sleep(100);
    }
    cout<<endl<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat '<<n*(n-1)/2<<'.'<<endl;";
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
            cout<<"                          if(2*m<=(n-1)*n){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Introduceti muchiile:'; cout<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for (int i=1; i<=m; i++){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cin>>x>>y;";
    Sleep(100);
    }
    cout<<endl;for(int x=0;x<1;x++){
            cout<<"                          mat[x][y]=1; mat[y][x]=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int i;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Elementele conexe sunt:';";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n;i++)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(!e[i]) bf(i);";
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
    cout<<endl;
    cout<<"                          Rezolvare:";
    cout<<endl;
    cout<<"                          Numar de varfuri:";    cin>>n;
    cout<<endl;
    cout<<"                          Numar de muchii:";     cin>>m;
    cout<<endl;
        while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
        }
        if(2*m<=(n-1)*n){
    cout<<"                          Introduceti muchiile:"; cout<<endl;
    for (int i=1; i<=m; i++)
    {
        cin>>x>>y;
        mat[x][y]=1;
        mat[y][x]=1;
    }
    int i;
    cout<<"                          Elementele conexe sunt:";
    cout<<endl;
    for(i=1;i<=n;i++)
    if(!e[i]) bf(i);
        }
    cout<<endl<<endl;
    cout<<"                          1.REVENIRE;";
    cout<<endl;
    cin>>a;
       if(a==1)meniulaplicatii();
    while (a!=1){
        cout<<endl<<"Ai gresit tasta."<<endl;
        cin>>a;
       if(a==1)meniulaplicatii();
}
}
void aplicatia2(){
    system("CLS");
    int h;
    cout<<"                          Se da un graf neorientat cu n noduri.  Numarul de noduri si muchiile grafului se citesc de la tastatura. Sa se verifice daca graful este complet si sa se afiseze un mesaj adecvat. Daca graful nu este complet si se afiseaza muchiile care ar trebui adaugate astfel  incat  graful sa devina complet.";
    cout<<endl<<endl;
    int x, y;
    cout<<"                          Algoritm:";
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          void graf_complet(){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(m==n*(n-1)/2)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                           cout<<'Graful este complet';";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          else";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Graful nu este complet';";
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
            cout<<"                          void muchii_lipsa(){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Muchiile care lipsesc pentru ca graful sa devina complet sunt: '<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int i,j;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n-1;i++)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(j=i+1;j<=n;j++)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          if(mat[i][j]==0)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<i<<' '<<j<<endl;";
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
            cout<<"                          cout<<'Numar de varfuri:'; ";
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
            cout<<"                          cout<<'Numar de muchii:';";
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
            cout<<"                          while(2*m>n*(n-1)){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat '<<n*(n-1)/2<<'.'<<endl;";
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
            cout<<"                          if(2*m<=(n-1)*n){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Introduceti muchiile:'; cout<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for (int i=1; i<=m; i++){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cin>>x>>y;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          mat[x][y]=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          mat[y][x]=1;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          int i,j;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<'Matricea de adiacenta este:'<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(i=1;i<=n;i++){";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          for(j=1;j<=n;j++)";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          cout<<mat[i][j]<<' ';";
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
            cout<<"                          cout<<endl;";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          graf_complet();";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          muchii_lipsa();";
    Sleep(100);
    }
    cout<<endl;
    for(int x=0;x<1;x++){
            cout<<"                          }";
    Sleep(100);
    }
    cout<<endl;
    cout<<"                          Rezolvare:";
    cout<<endl;
    cout<<"                          Numar de varfuri:";    cin>>n;
    cout<<endl;
    cout<<"                          Numar de muchii:";     cin>>m;
    cout<<endl;
        while(2*m>n*(n-1)){
            cout<<"                          Numarul de muchii este prea mare. Incearca un numar mai mic sau egal decat "<<n*(n-1)/2<<"."<<endl;
            cin>>m;
        }
        if(2*m<=(n-1)*n){
    cout<<"                          Introduceti muchiile:"; cout<<endl;
    for (int i=1; i<=m; i++)
    {
        cin>>x>>y;
        mat[x][y]=1;
        mat[y][x]=1;
    }
    int i,j;
    cout<<"                              Matricea de adiacenta este:"<<endl;
    for(i=1;i<=n;i++)
    {
                for(j=1;j<=n;j++)
                cout<<mat[i][j]<<" ";
    cout<<endl;
    }
    cout<<endl;
    graf_complet();
muchii_lipsa();
        }
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
void meniultest(){
    system("CLS");
    int a,x,k=1;
    cout<<"                          Testul cuprinde 9 intrebari, fiecare cu cate 4 variante de raspuns. Dupa fiecare raspuns, apare mesajul CORECT sau GRESIT (alaturi de raspunsul corect).La finalul testului apare nota.";
    cout<<endl;
    cout<<"                          1. Care este numarul minim de muchii ale unui graf neorientat cu 24 de varfuri astfel incat acesta sa fie conex indiferent de dispunerea muchiilor?";
    cout<<endl;
    cout<<"                                 1)253;";
    cout<<endl;
    cout<<"                                 2)24;";
    cout<<endl;
    cout<<"                                 3)254";
    cout<<endl;
    cout<<"                                 4)23;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)254.";
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
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)254.";
    cout<<endl;
    }
    cout<<endl;
    cout<<"                          2. Se considera un graf conex cu n varfuri si n-1 muchii. Care este gradul maxim al unui varf apartinand acestui graf?";
    cout<<endl;
    cout<<"                                 1)n/2;";
    cout<<endl;
    cout<<"                                 2)n;";
    cout<<endl;
    cout<<"                                 3)2n;";
    cout<<endl;
    cout<<"                                 4)n-1;";
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
    if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)n-1.";
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
    if(x==1 || x==2 || x==3) cout<<"                          GRESIT! Raspuns corect: 4)n-1.";
    cout<<endl;
    }
    cout<<"                          3. Se da graful cu 5 varfuri definit prin multimea muchiilor U={(1,2),(2,3),(3,4),(4,5)}. Care este numarul minim de muchii ce trebuie adaugate pentru ca graful sa fie hemiltonian, dar nu eulerian?";
    cout<<endl;
    cout<<"                                 1)0;";
    cout<<endl;
    cout<<"                                 2)1;";
    cout<<endl;
    cout<<"                                 3)2;";
    cout<<endl;
    cout<<"                                 4)3;";
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
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)2.";
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
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)2.";
    cout<<endl;
    }
    cout<<endl;
    cout<<"                          4. Care este numarul minim de varfuri pe care il poate avea un graf cu 12 muchii si care contine 3 componente conexe si niciun varf izolat?";
    cout<<endl;
    cout<<"                                 1)9;";
    cout<<endl;
    cout<<"                                 2)11;";
    cout<<endl;
    cout<<"                                 3)10;";
    cout<<endl;
    cout<<"                                 4)8;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==1)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==3 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)9.";
    cout<<endl;
    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==1)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }
    if(x==3 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)9.";
    cout<<endl;
    }
    cout<<"                          5. Cate varfuri are un graf neorientat complet cu 15 muchii?";
    cout<<endl;
    cout<<"                                 1)16;";
    cout<<endl;
    cout<<"                                 2)5;";
    cout<<endl;
    cout<<"                                 3)6;";
    cout<<endl;
    cout<<"                                 4)12;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)6.";
    cout<<endl;
    if(x==3)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }

    while (x!=1 && x!=2 && x!=3 && x!=4){
        cout<<"Ai gresit tasta."<<endl;
        cin>>x;
        if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)6.";
        cout<<endl;
        if(x==3)
        {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }

    }
    cout<<"                          6. Fie un graf cu 12 varfuri si 5 componente conexe. Care este numarul maxim de muchii pe care le poate avea graful?";
    cout<<endl;
    cout<<"                                 1)28;";
    cout<<endl;
    cout<<"                                 2)132;";
    cout<<endl;
    cout<<"                                 3)21;";
    cout<<endl;
    cout<<"                                 4)35;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==3 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)28.";
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
        if(x==1 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 3)6.";
        cout<<endl;
        if(x==3)
        {
        cout<<endl;
        cout<<"                          CORECT!";
        cout<<endl;
        k++;
    }

    }
    cout<<endl;
    cout<<"                          7. se considera un graf neorientat G cu7 12 noduri si 7 muchii. Care este numarul maxim de componente conexe din care poate fi format graful G? ";
    cout<<endl;
    cout<<"                                 1)1;";
    cout<<endl;
    cout<<"                                 2)8;";
    cout<<endl;
    cout<<"                                 3)10;";
    cout<<endl;
    cout<<"                                 4)4;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==3 || x==1 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)8.";
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
        if(x==3 || x==1 || x==4) cout<<"                          GRESIT! Raspuns corect: 2)8.";
    cout<<endl;
    if(x==2)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }

    }
    cout<<endl;
    cout<<"                          8. Se considera graful neorientat definit prin multimea X={1,2,3,4,5,6} si U={(1,2),(2,3),(3,4),(3,5),(4,5),(1,3),(2,6),(2,4),(4,6)}. Care este numarul minim de muchii ce pot fi eliminate astfel incat graful partial obtinut sa nu mai fie conex?";
    cout<<endl;
    cout<<"                                 1)2;";
    cout<<endl;
    cout<<"                                 2)3;";
    cout<<endl;
    cout<<"                                 3)0;";
    cout<<endl;
    cout<<"                                 4)4;";
    cout<<endl;
    cout<<"                          Raspunsul tau: "; cin>>x;
    cout<<endl;
    if(x==3 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)2 {(2,4),(4,6)}.";
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
        if(x==3 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)2 {(2,4),(4,6)}.";
    cout<<endl;
    if(x==1)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }

    }
    cout<<endl;
    cout<<"                         9.Se considera graful neorientat cu 6 noduri si 9 muchii dat prin listele de adiacenta alaturate. Care este numarul maxim de muchii care se pot elimina astfel incat graful sa ramana conex?";
    cout<<endl;
    cout<<"                        1: 2 5 6"<<endl;
    cout<<"                        2: 1 3 4"<<endl;
    cout<<"                        3: 2 4 6"<<endl;
    cout<<"                        4: 2 3 5"<<endl;
    cout<<"                        5: 1 4 6"<<endl;
    cout<<"                        6: 1 3 5"<<endl;
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
    if(x==3 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)3.";
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
        if(x==3 || x==2 || x==4) cout<<"                          GRESIT! Raspuns corect: 1)3.";
    cout<<endl;
    if(x==1)
    {
        cout<<endl;
        cout<<"                          CORECT!";
        k++;
    }
    }
    cout<<endl<<endl;
    cout<<"                          Nota finala: "<<k<<"/10";
    cout<<endl;
    if(k>=1 && k<=5)
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
int main()
{
    prima_pagina();
    return 0;
}
