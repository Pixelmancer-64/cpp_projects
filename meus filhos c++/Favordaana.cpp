#include <string>
#include <conio.h>
#include <iostream>
using namespace std;

enum Testado { Acre=1, Alagoas, Amapa, Amazonas, Bahia, Ceara, DistritoFederal, EspiritoSanto, Goias, Maranhao, MatoGrosso, MatoGrossoDoSul, MinasGerais, Para, Paraiba, Parana, Pernambuco, Piaui, RiodeJaneiro, RioGrandeDoNorte, RioGrandeDoSul, Rondonia, Roraima, SantaCatarina, SaoPaulo, Sergipe, Tocantins};
enum Tcoisinha {Rua, Avenida, Largo, Jardim, Estrada};
struct endereco{
	int numero,cep;
	string cidade, bairro, complemento;
	enum Testado estado;
	enum Tcoisinha coisinha;
};

string estadotexto(enum Testado estado)
{
	switch(estado)
	{
		case Acre : return "Acre";
        case Alagoas : return "Alagoas";
        case Amapa : return "Amapa";
        case Amazonas : return "Amazonas";
        case Bahia : return "Bahia";
        case Ceara : return "Ceara";
        case DistritoFederal : return "Distrito Federal";
        case EspiritoSanto : return "Espirito Santo";
        case Goias : return "Goias";
        case Maranhao : return "Maranhao";
        case MatoGrosso : return "Mato Grosso";
        case MatoGrossoDoSul : return "Mato Grosso do Sul";
        case MinasGerais : return "Minas Gerais";
        case Para : return "Para";
        case Paraiba : return "Paraiba";
        case Parana : return "Parana";
        case Pernambuco : return "Pernambuco";
        case Piaui : return "Piaui";
        case RiodeJaneiro : return "Rio de Janeiro";
        case RioGrandeDoNorte : return "Rio Grande do Norte";
        case RioGrandeDoSul : return "Rio Grande do Sul";
        case Rondonia : return "Rondonia";
        case Roraima : return "Roraima";
        case SantaCatarina : return "Santa Catarina";
        case SaoPaulo : return "Sao Paulo";
        case Sergipe : return "Sergipe";
        case Tocantins : return "Tocantins";
	}
}
string coisinhatexto(enum Tcoisinha coisinha)
{
	switch (coisinha)
	{
		case Rua : return "Rua";
		case Avenida : return "Avenida";
		case Largo : return "Largo";
		case Jardim : return "Jardim";
		case Estrada : return "Estrada";
	}
}

main()
{
	struct TDados
    {
    	
        struct endereco mainteste;
    };
struct TDados teste;
int a,b,c, n;

	cout << "Boa Tarde, me fala em que estado voce mora? \n";
	cin >> a;
	teste.mainteste.estado = (enum Testado)a;
	cout << "Agora, meu amor, me fala se voce mora em Rua, Avenida, Largo, Jardim ou  Estrada: \n";
	cin >>b;
	teste.mainteste.coisinha = (enum Tcoisinha)b;
	cout << "Agora, sua Cidade: \n";
	cin.ignore();
	getline (cin, teste.mainteste.cidade);

	cout << "Bairro: \n";
	getline (cin, teste.mainteste.bairro);
	cout << "Complemento: \n";
	getline (cin, teste.mainteste.complemento);
	cout << "Numero: \n";
    cin >> n;
    teste.mainteste.numero = n;
	cout << "CEP: \n";
cin >> c;
teste.mainteste.cep = c;
		
		cout << "Estado: " << estadotexto(teste.mainteste.estado) << "\n"<<"Cidade:" << teste.mainteste.cidade << "\n" << "Endereco: " << coisinhatexto(teste.mainteste.coisinha) << ", "<< teste.mainteste.bairro << ", " << teste.mainteste.complemento << ", " << teste.mainteste.numero << ". Cep: " << teste.mainteste.cep <<".";
		getch();
}
