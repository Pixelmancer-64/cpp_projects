#include <iostream>
using namespace std;
enum Tmeses{janeiro=1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, 
outubro, novembro, dezembro};
struct TData{
	int dia, ano;
	enum Tmeses mes;
};
	struct TData data1;
	struct TData data2;
int diasExistentesNoMes(struct TData data)
{
 switch (data.mes)
 {
 case janeiro:
 case marco:
 case maio:
 case julho:
 case agosto:
 case outubro:
 case dezembro: return 31;
 case abril:
 case junho:
 case setembro:
 case novembro: return 30;
 case fevereiro: if (data.ano % 4 == 0 && data.ano % 100 != 0 
 || data.ano % 400 == 0) return 29;
 else return 28;
 default: return 0;
}
}
string mestexto (enum Tmeses mes)
{
    switch (mes)
    {
        case janeiro : return "JANEIRO";
        case fevereiro : return "FEVEREIRO";
        case marco : return "MARCO";
        case abril : return "ABRIL";
        case maio : return "MAIO";
        case junho : return "JUNHO";
        case julho : return "JULHO";
        case agosto : return "AGOSTO";
        case setembro : return "SETEMBRO";
        case outubro : return "OUTUBRO";
        case novembro : return "NOVEMBRO";
        case dezembro : return "DEZEMBRO";
    }
}
bool dataValida(struct TData data)
{
if (data.mes >= janeiro && data.mes <= dezembro)
 return (data.dia >= 1 && data.dia <= diasExistentesNoMes(data));
 else return false;
}
main()
{
	int m,x,aux;
   do
   {
   cout << "Forneca uma data valida... \n";
   cout << "DIA: ";
   cin >> data1.dia;
   cout << "MES: ";
   cin >> m;
   cout << "ANO: ";
   cin >> data1.ano;
   data1.mes=(enum Tmeses)m;
   aux=1;
   
   if (dataValida(data1)==1){
   	
   	 for (x=1;x<data1.mes;x++)
   {
   	data2.mes = (enum Tmeses)x;
   	aux = aux + diasExistentesNoMes(data1);
   }
   aux = aux + data1.dia;
   cout << "No ano de " << data1.ano << " ha: "<< aux << " ate " << data1.dia << "/" << mestexto(data1.mes) << "/" << data1.ano;
   }
   else {
   	cout << "\n\nData Invalida !!! \n\n";
   }
}
while (dataValida(data1)==0);
return 0;
}
