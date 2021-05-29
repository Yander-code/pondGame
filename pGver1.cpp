#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string map;
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
	allPond[3].inf = "桃園大圳1－16景觀埤塘 地點：338桃園市蘆竹區蘆興南路6號 簡介：桃園大圳1－16景觀埤塘附近居民稱它為「大池塘」，又稱為「桃園大埤」，桃園縣政府在埤塘週邊闢建了長約1200公尺的環湖步道，佔地約有86000平方公尺，環繞一圈不需20多分鐘，環湖步道中設有涼亭及休憩賞景平台，步道兩旁並種植大量的樹木，由於樹木生長良好，部份已成綠色隧道，埤塘水質乾淨波光粼粼，夏日漫步其中還可觀賞水鳥覓食情形，更增添埤塘美麗景象，常吸引附近社區晨起民眾來此慢跑、騎車及運動，這裡也是觀賞夕陽的好地方。";
	allPond[4].inf = "桃園1-4號生態埤塘 地點：330桃園市桃園區國際路一段 簡介：主要設置設施包括環湖步道350公尺、生態水池0.2公頃、原木平台4座、景觀涼亭1座、木棧道142公尺、管制門2座、造型花架2座及原生魚復育池6口（5口為水塘型、1口為溪流型）等。除提供一般民眾休憩以外，原生魚復育池未來將委託生態保護團體協助復育，平時不對外開放，僅提供未來申請環境教育導覽之團體，並配合復育導覽人員陪同下開放使用，僅於上午8時至下午18時提供民眾使用。";
	allPond[7].inf = "八德埤塘自然生態公園 地點：334桃園市八德區興豐路1315號 簡介：從園區主入口進入，沿著步道行經公園管理中心，設有一間景觀咖啡屋，木造房的溫潤質感搭配手工麵包、餅乾和手沖咖啡堪為絕配，行程中的留白用一頓下午茶來填滿。滿足了味蕾後，探索園區內的豐富生態。除環池步道，園區內的親水護岸、濕地平台、景觀高架涼亭、木棧道等，都是旅人們可近距離觀賞多樣性生態的據點。";
	allPond[23].inf = "2-6號夜鷺生態埤塘 地點：330桃園市桃園區國豐七街48號 簡介：古早時為竹子陂等3口小埤塘合併為一口大埤塘，又稱為「大埤」。在居民參與下，定名為「夜鷺（YaLe）生態埤塘」；工程包括了環湖步道800公尺，還有170公尺的鋼構步橋，直接由環湖步道通往龍安國小，安全又無車輛干擾。";
	allPond[10].inf = "2-14埤塘環湖步道(白鷺鷥公園) 地點：330桃園市桃園區永安路1468巷70號 簡介：這裡的白鷺鷥相當多，未來栽種更多樹木後，可能還會吸引更多鳥類聚集，因此2-14埤塘可以稱為「白鷺鷥生態埤塘公園」。";
	allPond[8].inf = "茄苳里埤塘生態公園 地點：334桃園市八德區茄苳里 簡介：茄苳里埤塘生態公園擁有完整的生態、清幽的環境，廣闊的湖畔設有景觀步道，常吸引民眾漫步其間，也適合騎乘自行車一覽園區風光。";
	allPond[12].inf = "祥鷺生態埤塘公園 地點：330桃園市桃園區中山路1216巷112號 簡介：2-5號埤塘有環埤步道、休憩座椅及涼亭、照明設備，並種植景觀植栽，有流蘇、落羽松、苦梀等喬木，一年四季皆有獨特風景，因為常有夜鷺在這裡活動，所以命名為祥鷺生態埤塘公園。";
	allPond[19].inf = "蘆竹六股生態埤塘 地點：桃園市蘆竹區大興一街、興仁路旁 簡介：六股埤塘生態公園舊名為2-11埤塘，總面積約4.5公頃，全長850公尺的全齡無障礙環埤塘步道，保留原有的植栽造景，並強化夜間照明設施，埤塘內有夜鷺、翠鳥等豐富的生態，也成為鄰近居民休憩運動的好去處，在埤塘旁的大竹圖書館讀書之餘，還能欣賞六股埤塘的夜景。";
	allPond[15].inf = "西坡生態埤塘 地點：334桃園市八德區和平路411巷19號號 附近 簡介：西坡埤塘生態公園屬於石門大圳員樹林支渠第62號池，這一帶聚落叫做豎涵坡腳，又稱豎啣陂腳，而公園旁的聚落則叫做西陂腳，因為當時人們在池塘西部搭房居住而得名，後來名稱轉化成西坡，公園的名字也是因此而來";
	allPond[0].inf = "青塘園生態公園 地點：320桃園市中壢區文德路300號 簡介：「青塘園」在台灣高鐵桃園站附近，經過規劃之後，成為都市民眾的親水空間；這裡設置親水緩坡、觀景平台、木棧道、人行步道及戶外劇場等多元的遊憩空間，是都市裡一個寧靜、休閒的好去處，還曾經榮獲台灣公共建築相關大獎！";
	allPond[1].inf = "空地QQ";
	allPond[2].inf = "空地QQ";
	allPond[5].inf = "空地QQ";
	allPond[6].inf = "空地QQ";
	allPond[9].inf = "空地QQ";
	allPond[11].inf = "空地QQ";
	allPond[13].inf = "空地QQ";
	allPond[14].inf = "空地QQ";
	allPond[16].inf = "空地QQ";
	allPond[17].inf = "空地QQ";
	allPond[18].inf = "空地QQ";
	allPond[20].inf = "空地QQ";
	allPond[21].inf = "空地QQ";
	allPond[22].inf = "空地QQ";
	allPond[24].inf = "空地QQ";
	
	allPond[4].event = "發現浮萍 Eric不開心 後退5步";
	allPond[7].event = "發現夜鷺 夜路走多了 總會遇到Eric 扣100元並後退2步";
	allPond[23].event = "發現蜻蜓 習得蜻蜓點水技能 往前3步";
	allPond[10].event = "發現生病的吳郭魚 治療費150元";
	allPond[8].event = "發現台灣萍蓬草 大家給你拍拍手";
	allPond[12].event = "發現澤蛙 Eric覺得很噁 扣100元";
	allPond[19].event = "發現白鷺鷥 Eric覺得很漂亮 加100元";
	allPond[3].event = "沒事啦不要緊張";
	allPond[15].event = "沒事啦不要緊張";
	allPond[0].event = "沒事啦不要緊張";


	allPond[4].eventMoney = 0;
	allPond[7].eventMoney = -100;
	allPond[23].eventMoney = 0;
	allPond[10].eventMoney = -150;
	allPond[8].eventMoney = 0;
	allPond[12].eventMoney = -100;
	allPond[19].eventMoney = 100;

	//std::cout << allPond[0].inf; 
}

void gameIntro(){
	std::cout << "圖示說明: A:A玩家的位置 B:B玩家的位置 O:埤塘或空格" << std::endl; 
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

int main(){
	gameIntro();
	
	generateOriginalMap(25);
	
	generatePondInf();

	printMap();
	
	int aMoney=1000, bMoney=1000;
	long long int aLoc=0, bLoc=0;
	int lastLoc=0, lastLoc2=0, stop=0; 
	while(stop<100){
		std::cout << "-------------------------------------------------------------------------------- \n";
		std::cout << "輪到A玩家擲骰子(請按任意按鍵後按enter): \n";
		std::string temp;
		std::cin >> temp;
		
		aLoc += dice(6);
		//移動 
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
		
		
		//埤塘or空地 特殊事件  
		std::cout << "你走到了: " << allPond[(aLoc)%25].inf << std::endl;
		if(allPond[(aLoc)%25].house==0 && allPond[(aLoc)%25].inf!="空地QQ"){
			std::cout << std::endl << allPond[(aLoc)%25].event << std::endl << std::endl;
			aMoney += allPond[(aLoc)%25].eventMoney;
			if((aLoc)%25==4){
				aLoc-=5;
			} 
			if((aLoc)%25==7){
				aLoc-=2;
			} 
			if((aLoc)%25==23){
				aLoc+=3;
			} 
			//認養 
			if(aMoney >= 1000){
				std::cout<<"要用1000元認養此埤塘ㄇ?(如要請輸入:Y，不要請輸入:N)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					aMoney-=1000;
					allPond[(aLoc)%25].house=1;
					std::cout<<"感謝您認養此埤塘"<<std::endl;
				} 
			}
		}else if(allPond[(aLoc)%25].house==2){
			std::cout << std::endl << allPond[(aLoc)%25].event << std::endl << std::endl;
			aMoney += allPond[(aLoc)%25].eventMoney;
			if((aLoc)%25==4){
				aLoc-=5;
			} 
			if((aLoc)%25==7){
				aLoc-=2;
			} 
			if((aLoc)%25==23){
				aLoc+=3;
			}
			
			std::cout << "此埤塘已被善心人士B玩家認養 需繳交清潔費500元" << std::endl;
			aMoney -= 500;
			bMoney += 500;
		}
		
		std::cout<< "A玩家剩下:"<<aMoney<<"元"<<std::endl;
		
		std::cout << "-------------------------------------------------------------------------------- \n";
		std::cout << "輪到B玩家擲骰子(請按任意按鍵後按enter): \n";
	
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
		
		std::cout << "你走到了: " << allPond[(bLoc)%25].inf << std::endl;
		if(allPond[(bLoc)%25].house==0 && allPond[(bLoc)%25].inf!="空地QQ"){
			std::cout << std::endl << allPond[(aLoc)%25].event << std::endl << std::endl;
			aMoney += allPond[(aLoc)%25].eventMoney;
			if((aLoc)%25==4){
				aLoc-=5;
			} 
			if((aLoc)%25==7){
				aLoc-=2;
			} 
			if((aLoc)%25==23){
				aLoc+=3;
			}
			
			if(bMoney >= 1000){
				std::cout<<"要用1000元認養此埤塘ㄇ?(如要請輸入:Y，不要請輸入:N)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					bMoney-=1000;
					allPond[(bLoc)%25].house=2;
					std::cout<<"感謝您認養此埤塘"<<std::endl;
				} 
			}
		}else if(allPond[(bLoc)%25].house==1){
			std::cout << std::endl << allPond[(aLoc)%25].event << std::endl << std::endl;
			aMoney += allPond[(aLoc)%25].eventMoney;
			if((aLoc)%25==4){
				aLoc-=5;
			} 
			if((aLoc)%25==7){
				aLoc-=2;
			} 
			if((aLoc)%25==23){
				aLoc+=3;
			}
			
			std::cout << "此埤塘已被善心人士A玩家認養 需繳交清潔費500元" << std::endl;
			bMoney -= 500;
			aMoney += 500;
		}
		
		std::cout<< "B玩家剩下:"<<bMoney<<"元"<<std::endl;
		stop++;
		
	}
	
	
	return 0;
}
