#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string mapf, mapl, map2, map3, map4;

void gameIntro(){
	std::cout << "圖示說明: A:A玩家的位置 B:B玩家的位置 ○:埤塘" << std::endl; 
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
	
	generateOriginalMap(6);

	printMap();
	
	int aMoney=0, bMoney=0;
	int aLoc=0, bLoc=0;
	int lastLoc=0; 
	while(1){
		std::cout << "輪到A玩家擲骰子(請按任意按鍵): \n";
		std::string temp;
		std::cin >> temp;
		aLoc += 17;
		
		if(aLoc%18 <= 5){
			if(lastLoc!=0){
				mapf[lastLoc%18] = '○';
			}
			mapf[(aLoc*3)%18] = '※';
			lastLoc=aLoc*3;
			printMap();
		}else if(aLoc%18 == 6 || aLoc%18 == 17){
			if(lastLoc!=0){
				mapf[lastLoc%18] = '○';
			}
			if(aLoc%18 == 6){
				map2[0]='○';
			}else{
				map2[10]='○';
			}
			lastLoc=aLoc;
			printMap();
		}
	}
	
	
	return 0;
}
