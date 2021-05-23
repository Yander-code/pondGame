#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string mapf, mapl, map2, map3, map4;

int dice(){
	srand(time(0));
    //std::cout << rand()%6+1 << std::endl;
    return rand()%6+1;
}
void printMap(){
	std::cout << mapf <<"\n\n"<<map2<<"\n\n"<<map3<<"\n\n"<<map4<<"\n\n"<<mapl;
} 
int generateOriginalMap(int n){
	for(int i=0; i<n; i++){
		mapf += "O ";
	} 
	for(int i=0; i<n; i++){
		mapl += "O ";
	} 
	map2="O";
	map3="O";
	map4="O";
	for(int i=0; i<(n-2)*2+1; i++){
		map2 += " ";
		map3 += " ";
		map4 += " ";
	} 
	map2+="O";
	map3+="O";
	map4+="O";
} 

int main(){
	generateOriginalMap(20);

	printMap();
	
	dice();
	
	
	return 0;
}
