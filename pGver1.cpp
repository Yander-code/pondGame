#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
//會出bug的情形:%負數(kind of done)、一個不知道為啥會留A在原地的bug(done) 、把事件跟埤塘分開(done)、遊戲結束機制(目前是50局或有人破產)、附地圖(done)、埤塘變空地 (done)
std::string map;
std::string PondInfmap;
struct pondInf{
	int house;
	std::string inf;
	std::string event;
	int eventMoney;
}; 

int dice(int k){
	srand(time(0));
	int num = rand()%k+1;
    std::cout << "骰子點數: " << num << std::endl;

    return num;
}
pondInf allPond[25];
void generatePondInf(){

	for(int i=0; i<25; i++){		
		allPond[i].house = 0;
	}
	allPond[3].inf = "桃園大圳1－16景觀埤塘 地點：338桃園市蘆竹區蘆興南路6號 \n\n簡介：桃園大圳1－16景觀埤塘附近居民稱它為「大池塘」，又稱為「桃園大埤」\n桃園縣政府在埤塘週邊闢建了長約1200公尺的環湖步道，佔地約有86000平方公尺，環繞一圈不需20多分鐘\n環湖步道中設有涼亭及休憩賞景平台，步道兩旁並種植大量的樹木，由於樹木生長良好\n部份已成綠色隧道，埤塘水質乾淨波光粼粼，夏日漫步其中還可觀賞水鳥覓食情形，更增添埤塘美麗景象\n常吸引附近社區晨起民眾來此慢跑、騎車及運動，這裡也是觀賞夕陽的好地方。\n";
	allPond[4].inf = "桃園1-4號生態埤塘 地點：330桃園市桃園區國際路一段 \n\n簡介：主要設置設施包括環湖步道350公尺、生態水池0.2公頃、原木平台4座\n景觀涼亭1座、木棧道142公尺、管制門2座、造型花架2座及原生魚復育池6口（5口為水塘型、1口為溪流型）等\n除提供一般民眾休憩以外，原生魚復育池未來將委託生態保護團體協助復育，平時不對外開放\n僅提供未來申請環境教育導覽之團體，並配合復育導覽人員陪同下開放使用，僅於上午8時至下午18時提供民眾使用。\n";
	allPond[7].inf = "八德埤塘自然生態公園 地點：334桃園市八德區興豐路1315號 \n\n簡介：從園區主入口進入，沿著步道行經公園管理中心，設有一間景觀咖啡屋\n木造房的溫潤質感搭配手工麵包、餅乾和手沖咖啡堪為絕配，行程中的留白用一頓下午茶來填滿\n滿足了味蕾後，探索園區內的豐富生態。除環池步道，園區內的親水護岸、濕地平台、景觀高架涼亭\n木棧道等，都是旅人們可近距離觀賞多樣性生態的據點。\n";
	allPond[14].inf = "2-6號夜鷺生態埤塘 地點：330桃園市桃園區國豐七街48號 \n\n簡介：古早時為竹子陂等3口小埤塘合併為一口大埤塘，又稱為「大埤」\n在居民參與下，定名為「夜鷺（YaLe）生態埤塘」；工程包括了環湖步道800公尺\n還有170公尺的鋼構步橋，直接由環湖步道通往龍安國小，安全又無車輛干擾。\n";
	allPond[10].inf = "2-14埤塘環湖步道(白鷺鷥公園) 地點：330桃園市桃園區永安路1468巷70號 \n\n簡介：這裡的白鷺鷥相當多，未來栽種更多樹木後，可能還會吸引更多鳥類聚集\n因此2-14埤塘可以稱為「白鷺鷥生態埤塘公園」。\n";
	allPond[8].inf = "茄苳里埤塘生態公園 地點：334桃園市八德區茄苳里 \n\n簡介：茄苳里埤塘生態公園擁有完整的生態、清幽的環境，廣闊的湖畔設有景觀步道\n常吸引民眾漫步其間，也適合騎乘自行車一覽園區風光。\n";
	allPond[12].inf = "祥鷺生態埤塘公園 地點：330桃園市桃園區中山路1216巷112號 \n\n簡介：2-5號埤塘有環埤步道、休憩座椅及涼亭、照明設備，並種植景觀植栽\n有流蘇、落羽松、苦梀等喬木，一年四季皆有獨特風景，因為常有夜鷺在這裡活動\n所以命名為祥鷺生態埤塘公園。\n";
	//allPond[16].inf = "蘆竹六股生態埤塘 地點：桃園市蘆竹區大興一街、興仁路旁 \n\n簡介：六股埤塘生態公園舊名為2-11埤塘，總面積約4.5公頃，全長850公尺的全齡無障礙環埤塘步道\n保留原有的植栽造景，並強化夜間照明設施，埤塘內有夜鷺、翠鳥等豐富的生態，也成為鄰近居民休憩運動的好去處\n在埤塘旁的大竹圖書館讀書之餘，還能欣賞六股埤塘的夜景。";
	allPond[15].inf = "西坡生態埤塘 地點：334桃園市八德區和平路411巷19號號 附近 \n\n簡介：西坡埤塘生態公園屬於石門大圳員樹林支渠第62號池，這一帶聚落叫做豎涵坡腳，又稱豎啣陂腳，而公園旁的聚落則叫做西陂腳\n因為當時人們在池塘西部搭房居住而得名，後來名稱轉化成西坡，公園的名字也是因此而來\n";
	//allPond[17].inf = "青塘園生態公園 地點：320桃園市中壢區文德路300號 \n\n簡介：「青塘園」在台灣高鐵桃園站附近，經過規劃之後，成為都市民眾的親水空間；這裡設置親水緩坡、觀景平台、木棧道、人行步道\n及戶外劇場等多元的遊憩空間，是都市裡一個寧靜、休閒的好去處，還曾經榮獲台灣公共建築相關大獎！";
	allPond[1].inf = "特殊事件";
	allPond[2].inf = "特殊事件";
	allPond[5].inf = "特殊事件";
	allPond[6].inf = "特殊事件";
	allPond[9].inf = "特殊事件";
	allPond[11].inf = "特殊事件";
	allPond[13].inf = "特殊事件";
	allPond[0].inf = "起點";


	
	allPond[1].event = "發現浮萍 Eric不開心 後退5步";
	allPond[2].event = "發現夜鷺 夜路走多了 總會遇到Eric 扣100元並後退2步";
	allPond[5].event = "發現蜻蜓 習得蜻蜓點水技能 往前3步";
	allPond[6].event = "發現生病的吳郭魚 治療費150元";
	allPond[9].event = "發現台灣萍蓬草 大家給你拍拍手";
	allPond[11].event = "發現澤蛙 Eric覺得很噁 扣100元";
	allPond[13].event = "發現白鷺鷥 Eric覺得很漂亮 加100元";
	/*allPond[3].event = "沒事啦不要緊張";
	allPond[15].event = "沒事啦不要緊張";
	allPond[0].event = "沒事啦不要緊張";*/


	allPond[1].eventMoney = 0;
	allPond[2].eventMoney = -100;
	allPond[5].eventMoney = 0;
	allPond[6].eventMoney = -150;
	allPond[9].eventMoney = 0;
	allPond[11].eventMoney = -100;
	allPond[13].eventMoney = 100;

	//std::cout << allPond[0].inf; 
}

void gameIntro(){
	std::cout << "如要放大介面，請使用Ctrl+滑鼠滾輪\n\n圖示說明: A:A玩家的位置 B:B玩家的位置 O:埤塘或空格\n" << std::endl; 
}


void printMap(){
	for(int i=0; i<=8; i++){
		std::cout << map[i];
	}
	std::cout << std::endl;
	std::cout << map[30];
	for(int i=0; i<7; i++){
		std::cout << " ";
	}	
	std::cout << map[10]<<std::endl;
	
	std::cout << map[28];
	for(int i=0; i<7; i++){
		std::cout << " ";
	}	
	std::cout << map[12]<<std::endl;
	
	std::cout << map[26];
	for(int i=0; i<7; i++){
		std::cout << " ";
	}	
	std::cout << map[14]<<std::endl;
	for(int i=24; i>=16; i--){
		std::cout << map[i];
	}
	std::cout << std::endl;
} 

int generateOriginalMap(int n){
	
	map="S ";
	for(int i=0; i<n-1; i++){
		map += "O ";
	} 
} 

void generatePondInfMap(){
	// 1 2 5 6 9 11 13 
	PondInfmap="S E E P P E E P P E P E P E P P "; 
} 

void printPondInfmap(){
	std::cout << std::endl;
	for(int i=0; i<=8; i++){
		std::cout << PondInfmap[i];
	}
	std::cout << std::endl;
	std::cout << PondInfmap[30];
	for(int i=0; i<7; i++){
		std::cout << " ";
	}	
	std::cout << PondInfmap[10]<<std::endl;
	
	std::cout << PondInfmap[28];
	for(int i=0; i<7; i++){
		std::cout << " ";
	}	
	std::cout << PondInfmap[12]<<std::endl;
	
	std::cout << PondInfmap[26];
	for(int i=0; i<7; i++){
		std::cout << " ";
	}	
	std::cout << PondInfmap[14]<<std::endl;
	for(int i=24; i>=16; i--){
		std::cout << PondInfmap[i];
	}
	std::cout << " <-這是埤塘與特殊事件位置圖 P代表埤塘(A為A玩家認養、B為B玩家認養) E代表特殊事件";
	std::cout << std::endl << std::endl;
} 

int main(){
	
	gameIntro();
	
	generateOriginalMap(25);
	generatePondInfMap();
	
	generatePondInf();

	printMap();
	printPondInfmap();
	
	int aMoney=1000, bMoney=1000;
	long long int aLoc=16, bLoc=16;
	int lastLoc=0, lastLoc2=0, stop=0; 
	while(stop<50){
		std::cout << "-------------------------------------------------------------------------------- \n";
		std::cout << "輪到A玩家擲骰子(請按任意按鍵後按enter): \n";
		std::string temp;
		std::cin >> temp;
		
		aLoc += dice(6);
		//移動 
		map[(aLoc)%16*2]='A';
		
		if(lastLoc%16!=0 && (lastLoc)%16*2!=(bLoc)%16*2){
			map[(lastLoc)%16*2]='O';
		}else if((lastLoc)%16*2==(bLoc)%16*2){
			map[(lastLoc)%16*2]='B';
		}
		if(lastLoc%16==0){
			map[0]='S';
		}
		lastLoc=aLoc;
		printMap();
		printPondInfmap();
		
		
		//埤塘or空地 特殊事件  
		std::cout << "你走到了: " << allPond[(aLoc)%16].inf << std::endl;
		if(allPond[(aLoc)%16].house==0 && allPond[(aLoc)%16].inf!="特殊事件" && allPond[(aLoc)%16].inf!="起點"){
			//認養 
			if(aMoney >= 250){
				std::cout<<"要用250元認養此埤塘ㄇ?(如要請輸入:Y)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					aMoney-=250;
					allPond[(aLoc)%16].house=1;
					std::cout<<"感謝您認養此埤塘"<<std::endl;
					PondInfmap[((lastLoc)%16)*2] = 'A';
				} 
			}
		}else if(allPond[(aLoc)%16].house==2){
			/*std::cout << std::endl << allPond[(aLoc)%17].event << std::endl << std::endl;
			aMoney += allPond[(aLoc)%17].eventMoney;
			if((aLoc)%17==1){
				aLoc-=5;
			} 
			if((aLoc)%17==2){
				aLoc-=2;
			} 
			if((aLoc)%17==5){
				aLoc+=3;
			}*/
			
			std::cout << "此埤塘已被善心人士B玩家認養 需繳交清潔費100元" << std::endl;
			aMoney -= 100;
			bMoney += 100;
		}else if(allPond[(aLoc)%16].inf=="起點"){
			std::cout << "A玩家走到起點 加100元" << std::endl;
			aMoney += 100;
			
		}else{
			std::cout << std::endl << allPond[(aLoc)%16].event << std::endl << std::endl;
			aMoney += allPond[(aLoc)%16].eventMoney;
			if((aLoc)%16==1){
				aLoc-=5;
				map[(aLoc)%16*2]='A';
		
				if(lastLoc%16!=0 && (lastLoc)%16*2!=(bLoc)%16*2){
					map[(lastLoc)%16*2]='O';
				}else if((lastLoc)%16*2==(bLoc)%16*2){
					map[(lastLoc)%16*2]='B';
				}
				if(lastLoc%16==0){
					map[0]='S';
				}
				lastLoc=aLoc;
			} 
			if((aLoc)%16==2){
				aLoc-=2;
				map[(aLoc)%16*2]='A';
		
				if(lastLoc%16!=0 && (lastLoc)%16*2!=(bLoc)%16*2){
					map[(lastLoc)%16*2]='O';
				}else if((lastLoc)%16*2==(bLoc)%16*2){
					map[(lastLoc)%16*2]='B';
				}
				if(lastLoc%16==0){
					map[0]='S';
				}
				lastLoc=aLoc;
			} 
			if((aLoc)%16==5){
				aLoc+=3;
				map[(aLoc)%16*2]='A';
		
				if(lastLoc%16!=0 && (lastLoc)%16*2!=(bLoc)%16*2){
					map[(lastLoc)%16*2]='O';
				}else if((lastLoc)%16*2==(bLoc)%16*2){
					map[(lastLoc)%16*2]='B';
				}
				if(lastLoc%16==0){
					map[0]='S';
				}
				lastLoc=aLoc;
			} 
		}
		
		std::cout<< "A玩家剩下:"<<aMoney<<"元"<<std::endl;
		if(aMoney<=0){
			//std::cout << std::endl << "B玩家贏了 你好強 你是埤塘王!!!";
			break;
		}
		
		std::cout << "-------------------------------------------------------------------------------- \n";
		std::cout << "輪到B玩家擲骰子(請按任意按鍵後按enter): \n";
	
		std::cin >> temp;
		bLoc += dice(6);
		map[(bLoc)%16*2]='B';
		
		if(lastLoc2%16!=0 && (lastLoc2)%16*2!=(aLoc)%16*2){
			map[(lastLoc2)%16*2]='O';
		}else if((lastLoc2)%16*2==(aLoc)%16*2){
			map[(lastLoc2)%16*2]='A';
		}
		if(lastLoc2%16==0){
			map[0]='S';
		}
		lastLoc2=bLoc;
		printMap();
		printPondInfmap();
		
		std::cout << "你走到了: " << allPond[(bLoc)%16].inf << std::endl;
		if(allPond[(bLoc)%16].house==0 && allPond[(bLoc)%16].inf!="特殊事件" && allPond[(bLoc)%16].inf!="起點"){
			
			if(bMoney >= 250){
				std::cout<<"要用250元認養此埤塘ㄇ?(如要請輸入:Y)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					bMoney-=250;
					allPond[(bLoc)%16].house=2;
					std::cout<<"感謝您認養此埤塘"<<std::endl;
					PondInfmap[((lastLoc2)%16)*2] = 'B';
				} 
			}
		}else if(allPond[(bLoc)%16].house==1){
			/*std::cout << std::endl << allPond[(aLoc)%17].event << std::endl << std::endl;
			aMoney += allPond[(aLoc)%17].eventMoney;
			if((aLoc)%17==4){
				aLoc-=5;
			} 
			if((aLoc)%17==7){
				aLoc-=2;
			} 
			if((aLoc)%17==23){
				aLoc+=3;
			}*/
			
			std::cout << "此埤塘已被善心人士A玩家認養 需繳交清潔費100元" << std::endl;
			bMoney -= 100;
			aMoney += 100;
		}else if(allPond[(bLoc)%16].inf=="起點"){
			std::cout << "B玩家走到起點 加100元" << std::endl;
			bMoney += 100;
			
		}else{
			std::cout << std::endl << allPond[(bLoc)%16].event << std::endl << std::endl;
			bMoney += allPond[(bLoc)%16].eventMoney;
			if((bLoc)%16==4){
				bLoc-=5;
				map[(bLoc)%16*2]='B';
		
				if(lastLoc2%16!=0 && (lastLoc2)%16*2!=(aLoc)%16*2){
					map[(lastLoc2)%16*2]='O';
				}else if((lastLoc2)%16*2==(aLoc)%16*2){
					map[(lastLoc2)%16*2]='A';
				}
				if(lastLoc2%16==0){
					map[0]='S';
				}
				lastLoc2=bLoc;
			} 
			if((bLoc)%16==7){
				bLoc-=2;
				map[(bLoc)%16*2]='B';
		
				if(lastLoc2%16!=0 && (lastLoc2)%16*2!=(aLoc)%16*2){
					map[(lastLoc2)%16*2]='O';
				}else if((lastLoc2)%16*2==(aLoc)%16*2){
					map[(lastLoc2)%16*2]='A';
				}
				if(lastLoc2%16==0){
					map[0]='S';
				}
				lastLoc2=bLoc;
			} 
			if((bLoc)%16==23){
				bLoc+=3;
				map[(bLoc)%16*2]='B';
		
				if(lastLoc2%16!=0 && (lastLoc2)%16*2!=(aLoc)%16*2){
					map[(lastLoc2)%16*2]='O';
				}else if((lastLoc2)%16*2==(aLoc)%16*2){
					map[(lastLoc2)%16*2]='A';
				}
				if(lastLoc2%16==0){
					map[0]='S';
				}
				lastLoc2=bLoc;
			}
		}
		
	
		std::cout<< "B玩家剩下:"<<bMoney<<"元"<<std::endl;
		stop++;
		if(bMoney<=0){
			//std::cout << std::endl << "A玩家贏了 你好強 你是埤塘王!!!";
			break;
		}
		
	}
	if(aMoney > bMoney){
		std::cout << std::endl << "A玩家贏了 你好強 你是埤塘王!!!";
	}else if(aMoney < bMoney){
		std::cout << std::endl << "B玩家贏了 你好強 你是埤塘王!!!";
	}else{
		std::cout << std::endl << "兩位都是埤塘王!!!";
	}
		
	std::cout << std::endl << "感謝遊玩" <<std::endl << "@2021埤塘大富翁"; 
	
	return 0;
}
 

