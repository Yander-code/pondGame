#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string mapf, mapl, map2, map3, map4;

void gameIntro(){
	std::cout << "圖示說明: ●:你的位置 ○:空地 ※:起點 ☆:命運 ★:機會" << std::endl; 
}

int dice(int k){
	srand(time(0));
	int num = rand()%k+1;
    std::cout << "骰子點數: " << num << std::endl;

    return num;
}
void printMap(){
	std::cout << mapf <<"\n\n"<<map2<<"\n\n"<<map3<<"\n\n"<<map4<<"\n\n"<<mapl<<"\n";
} 
int generateOriginalMap(int n){
	
	mapf="※ ";
	for(int i=0; i<n-1; i++){
		mapf += "○ ";
	} 
	for(int i=0; i<n; i++){
		mapl += "○ ";
	} 
	map2="○";
	map3="○";
	map4="○";
	for(int i=0; i<(n-2)*3+1; i++){
		map2 += " ";
		map3 += " ";
		map4 += " ";
	} 
	map2+="○";
	map3+="○";
	map4+="○";
} 

int main(){
	gameIntro();
	
	generateOriginalMap(20);

	printMap();
	
	dice(6);
	
	
	return 0;
}
