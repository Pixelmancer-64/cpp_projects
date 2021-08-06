#include <iostream>
#include <string>
#include <fstream>
using namespace std; 
void arquivoParaVetor(ifstream &arquivo, string v[], int tamanho){
	string thepulostrikesback;
	int h;
	h=0;
	arquivo.seekg(0);
	getline(arquivo,thepulostrikesback);
	while(!arquivo.eof()){
		getline(arquivo,thepulostrikesback);
		v[h]=thepulostrikesback;
		h++;
	}
	arquivo.seekg(0);
}

void troca(string &s1, string &s2){
string aux;
aux = s1;
s1 = s2;
s2 = aux;
}

int quantidadeDeRegistros(ifstream &arquivo){
	int i;
	string pulowars;
	arquivo.seekg(0);
	getline(arquivo,pulowars);
	while(!arquivo.eof()){
		getline(arquivo,pulowars);
		i++;
	}
	arquivo.clear();
	arquivo.seekg(0);
	return i;
}

void ordena(string v[], int tamanho){
int i, j;
for (i = 0; i < tamanho-1; i++)
for (j = i+1; j < tamanho; j++)
if (v[i] > v[j])
troca(v[i], v[j]);
}

void vetorParaArquivo(ofstream &arquivo, string v[], int tamanho){
	int g;
	g=0;
	while(!arquivo.eof()){
		arquivo << "\n" << v[g];
		g++;
		if(g==tamanho){
			break;
		}
	}
}

void imprimeArquivo(ifstream &arquivo){
	string returnofthepulo;
	arquivo.seekg(0);
	getline(arquivo,returnofthepulo);
	while(!arquivo.eof()){
	getline(arquivo,returnofthepulo);
	cout << returnofthepulo << "\n";	
	}
	arquivo.clear();
	arquivo.seekg(0);
	cout << "\nObrigado por utilizador :p";
}
main()
{
//Declaração de variáveis não arranjos.
string s;
ifstream entrada;
ofstream saida;
int i, qtdRegistros;
//Definição da quantidade de registros no arquivo de entrada.
entrada.open("Nomes.txt");
qtdRegistros = quantidadeDeRegistros(entrada); 
//Declaração do vetor.
string vetor[qtdRegistros];
//Ordenação no vetor dos nomes contidos no arquivo.
arquivoParaVetor(entrada, vetor, qtdRegistros);
ordena(vetor, qtdRegistros);
entrada.close();
//Criação de um arquivo com os nomes ordenados.
saida.open("Dados.txt");
vetorParaArquivo(saida, vetor, qtdRegistros);
saida.close();
//Impressão do arquivo recém criado.
entrada.open("Dados.txt");
imprimeArquivo(entrada);
entrada.close();
return 0;
}
