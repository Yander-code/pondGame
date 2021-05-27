#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string map;

void gameIntro(){
	std::cout << "圖示說明: A:A玩家的位置 B:B玩家的位置 ○:埤塘" << std::endl; 
}

int dice(int k){
	srand(time(0));
	int num = rand()%k+1;
    std::cout << "骰子點數: " << num << std::endl << std::endl;

    return num;
}
void printMap(){
	std::cout << map <<"\n";
} 
int generateOriginalMap(int n){
	
	map="S ";
	for(int i=0; i<n-1; i++){
		map += "O ";
	} 
} 

int main(){
	gameIntro();
	
	generateOriginalMap(25);

	printMap();
	
	int aMoney=0, bMoney=0;
	int aLoc=0, bLoc=0;
	int lastLoc=0, lastLoc2=0; 
	while(1){
		std::cout << "輪到A玩家擲骰子(請按任意按鍵): \n";
		std::string temp;
		std::cin >> temp;
		aLoc += dice(6);
		if(lastLoc!=0 && (lastLoc2)%25*2!=(aLoc)%25*2){
			map[(lastLoc)%25*2]='O';
		}else if((lastLoc)%25*2==(aLoc)%25*2){
			map[(lastLoc)%25*2]='B';
		}
		if(lastLoc%25==0){
			map[0]='S';
		}
		map[(aLoc)%25*2]='A';
		lastLoc=aLoc;
		printMap();
		std::cout<<std::endl;
		
		
		std::cout << "輪到B玩家擲骰子(請按任意按鍵): \n";
	
		std::cin >> temp;
		bLoc += dice(6);
		if(lastLoc2!=0 && (lastLoc2)%25*2!=(bLoc)%25*2){
			map[(lastLoc2)%25*2]='O';
		}else if((lastLoc)%25*2==(bLoc)%25*2){
			map[(lastLoc2)%25*2]='A';
		}
		if(lastLoc%25==0){
			map[0]='S';
		}
		map[(bLoc)%25*2]='B';
		lastLoc2=bLoc;
		printMap();
		std::cout<<std::endl;
	}
	
	
	return 0;
}
