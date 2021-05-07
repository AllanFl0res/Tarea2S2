//Allan Mauricio - 61911499
#include <iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;

int main(){
	int x,y,temp,puntajex=0,puntajey=0;
	char nombre[30];
	srand(time(NULL));
	cout<<"Ingrese el nombre de su equipo: ";cin.getline(nombre,30,'\n');
	cout<<"Cuantos partidos faltan: ";cin>>temp;
	
	for(int i = 1; i <= temp; i++)
		{
			x = 0 + rand()%(100);
			y = 0 + rand()%(100);
			
			if(x==y)
			{
				puntajex++;puntajey++;
			}
			else if(x < y )
			{
				puntajex += 0;
				puntajey += 3;
				
			}
			else 
			{
				puntajex += 3;
				puntajey += 0;
			}
			
		}
		
		cout<<"\nEl puntaje de su equipo "<<nombre<<" Fue de: "<<puntajex;
		
		cout<<"\n\nEl puntaje del equipo contrario fue de: "<<puntajey<<endl;
		
		if(puntajex==puntajey)
			{
				cout<<"\nHubo un empate de puntuaje";
			}
			else if(puntajex>puntajey )
			{
				cout<<"\nSu equipo "<<nombre<<" Es el ganador del torneo";
			}
			else 
			{
				cout<<"\nSu equipo "<<nombre<<" Ha perdido el torneo, suerte a la proxima ;) ";
			}
				
	
	
	return 0;
}
