#include<iostream>

using namespace std;

struct Aluno {
    int matricula;
    float nota;
    float nota2;
    float media;
};
// Aqui Aluno * a o mesmo que Aluno a[]

void cadastra (Aluno *a, int n){
    for (int i = 0; i<n; i++){
    cout<<"Aluno "<<i+1<<": "<<endl;
    cout<<"Digite a matricula: ";
    cin>> (a+i)->matricula;
    cout<<"Digite a nota da prova 1: ";
    cin>> (a+i)->nota;
    cout<<"Digite a nota da prova 2: ";
    cin>>(a+i)->nota2;
    (a+i)->media = ((a+i)->nota + (a+i)->nota2)/2;
    cout<<endl;
    }
} // fim cadastra

void imprime (Aluno *a, int n){
    Aluno *p;
    p = a;
    for (int i=0; i<n; i++){
    cout<<"Aluno "<<i+1<<": "<<endl;
    cout<<"Matricula: "<<(p+i)->matricula<<endl;
    cout<<"Nota da prova 1: "<<(p+i)->nota<<endl;
    cout<<"Nota da prova 2: "<<(p+i)->nota2<<endl;
    cout<<"Media: "<< (p+i)->media<<endl<<endl;
    }
} //fim imprime

int main (){
    #define NUMALUNOS 3
    Aluno alunos[NUMALUNOS];
    cadastra(alunos, NUMALUNOS);
    imprime(alunos, NUMALUNOS);

return 0;
}
