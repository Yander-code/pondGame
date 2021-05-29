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
    std::cout << "��l�I��: " << num << std::endl;

    return num;
}
pondInf allPond[25];
void generatePondInf(){

	for(int i=0; i<25; i++){		
		allPond[i].house = 0;
	}
	allPond[3].inf = "���j�`1��16���[��� �a�I�G338��饫Ī�˰�Ī���n��6�� ²���G���j�`1��16���[������~���٥����u�j����v�A�S�٬��u���j��v�A��鿤�F���b���g���P�ؤF����1200���ت�����B�D�A���a����86000���褽�ءA��¶�@�餣��20�h�����A����B�D���]���D�F�Υ�ͽഺ���x�A�B�D��ǨúشӤj�q�����A�ѩ���ͪ��}�n�A�����w������G�D�A�����谮�b�i���`�`�A�L�麩�B�䤤�٥i�[������V�����ΡA��W�K�����R���H�A�`�l�ު�����ϱ�_�����Ӧ��C�]�B�M���ιB�ʡA�o�̤]�O�[��i�����n�a��C";
	allPond[4].inf = "���1-4���ͺA��� �a�I�G330��饫���ϰ�ڸ��@�q ²���G�D�n�]�m�]�I�]�A����B�D350���ءB�ͺA����0.2�����B��쥭�x4�y�B���[�D�F1�y�B��̹D142���ءB�ި��2�y�B�y����[2�y�έ�ͳ��_�|��6�f�]5�f�������B1�f���ˬy���^���C�����Ѥ@�������ͥH�~�A��ͳ��_�|�����ӱN�e�U�ͺA�O�@�����U�_�|�A���ɤ���~�}��A�ȴ��ѥ��ӥӽ����ұШ|����������A�ðt�X�_�|�����H�����P�U�}��ϥΡA�ȩ�W��8�ɦܤU��18�ɴ��ѥ����ϥΡC";
	allPond[7].inf = "�K�w���۵M�ͺA���� �a�I�G334��饫�K�w�Ͽ��׸�1315�� ²���G�q��ϥD�J�f�i�J�A�u�ۨB�D��g����޲z���ߡA�]���@�����[�@�ثΡA��y�Ъ��ż��P�f�t��u�ѥ]�B�氮�M��R�@�س������t�A��{�����d�եΤ@�y�U�ȯ��Ӷ񺡡C�����F������A������Ϥ����״I�ͺA�C�������B�D�A��Ϥ����ˤ��@���B��a���x�B���[���[�D�F�B��̹D���A���O�ȤH�̥i��Z���[��h�˩ʥͺA�����I�C";
	allPond[23].inf = "2-6���]�O�ͺA��� �a�I�G330��饫���ϰ��פC��48�� ²���G�j���ɬ��ˤl�@��3�f�p���X�֬��@�f�j���A�S�٬��u�j��v�C�b�~���ѻP�U�A�w�W���u�]�O�]YaLe�^�ͺA���v�F�u�{�]�A�F����B�D800���ءA�٦�170���ت����c�B���A����������B�D�q���s�w��p�A�w���S�L�����z�Z�C";
	allPond[10].inf = "2-14�������B�D(���O���) �a�I�G330��饫���ϥæw��1468��70�� ²���G�o�̪����O��۷�h�A���Ӯ�ا�h����A�i���ٷ|�l�ާ�h�����E���A�]��2-14���i�H�٬��u���O��ͺA�����v�C";
	allPond[8].inf = "�XФ�����ͺA���� �a�I�G334��饫�K�w�ϭXФ�� ²���G�XФ�����ͺA����֦����㪺�ͺA�B�M�ժ����ҡA�s�諸��`�]�����[�B�D�A�`�l�ޥ������B�䶡�A�]�A�X�M���ۦ樮�@����ϭ����C";
	allPond[12].inf = "���O�ͺA����� �a�I�G330��饫���Ϥ��s��1216��112�� ²���G2-5���������B�D�B��ͮy�ȤβD�F�B�ө��]�ơA�úشӴ��[�Ӯ�A���yĬ�B���ЪQ�B�W�ǵ����A�@�~�|�u�Ҧ��W�S�����A�]���`���]�O�b�o�̬��ʡA�ҥH�R�W�����O�ͺA�����C";
	allPond[19].inf = "Ī�ˤ��ѥͺA��� �a�I�G��饫Ī�˰Ϥj���@��B�������� ²���G���Ѱ��ͺA�����¦W��2-11���A�`���n��4.5�����A����850���ت����ֵL��ê�����B�D�A�O�d�즳���Ӯ�y���A�ñj�Ʃ]���ө��]�I�A������]�O�B�A�����״I���ͺA�A�]�����F��~����͹B�ʪ��n�h�B�A�b���Ǫ��j�˹Ϯ��]Ū�Ѥ��l�A�ٯ�Y�ऻ�Ѱ���]���C";
	allPond[15].inf = "��Y�ͺA��� �a�I�G334��饫�K�w�ϩM����411��19���� ���� ²���G��Y���ͺA�����ݩ�۪��j�`����L����62�����A�o�@�a�E���s���ݲ[�Y�}�A�S�ٽݰ�@�}�A�Ӥ���Ǫ��E���h�s����@�}�A�]����ɤH�̦b����賡�f�Щ~��ӱo�W�A��ӦW����Ʀ���Y�A���骺�W�r�]�O�]���Ө�";
	allPond[0].inf = "�C���ͺA���� �a�I�G320��饫���c�Ϥ�w��300�� ²���G�u�C���v�b�x�W���K��鯸����A�g�L�W������A���������������ˤ��Ŷ��F�o�̳]�m�ˤ��w�Y�B�[�����x�B��̹D�B�H��B�D�Τ�~�@�����h�����C�ͪŶ��A�O�����̤@�ӹ��R�B�𶢪��n�h�B�A�ٴ��g�a��x�W���@�ؿv�����j���I";
	allPond[1].inf = "�ŦaQQ";
	allPond[2].inf = "�ŦaQQ";
	allPond[5].inf = "�ŦaQQ";
	allPond[6].inf = "�ŦaQQ";
	allPond[9].inf = "�ŦaQQ";
	allPond[11].inf = "�ŦaQQ";
	allPond[13].inf = "�ŦaQQ";
	allPond[14].inf = "�ŦaQQ";
	allPond[16].inf = "�ŦaQQ";
	allPond[17].inf = "�ŦaQQ";
	allPond[18].inf = "�ŦaQQ";
	allPond[20].inf = "�ŦaQQ";
	allPond[21].inf = "�ŦaQQ";
	allPond[22].inf = "�ŦaQQ";
	allPond[24].inf = "�ŦaQQ";
	
	allPond[4].event = "�o�{�B�� Eric���}�� ��h5�B";
	allPond[7].event = "�o�{�]�O �]�����h�F �`�|�J��Eric ��100���ë�h2�B";
	allPond[23].event = "�o�{�f�� �߱o�f���I���ޯ� ���e3�B";
	allPond[10].event = "�o�{�ͯf���d���� �v���O150��";
	allPond[8].event = "�o�{�x�W�ӽ��� �j�a���A����";
	allPond[12].event = "�o�{�A�� Ericı�o���� ��100��";
	allPond[19].event = "�o�{���O�� Ericı�o�ܺ}�G �[100��";
	allPond[3].event = "�S�ưդ��n��i";
	allPond[15].event = "�S�ưդ��n��i";
	allPond[0].event = "�S�ưդ��n��i";


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
	std::cout << "�ϥܻ���: A:A���a����m B:B���a����m O:���ΪŮ�" << std::endl; 
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
		std::cout << "����A���a�Y��l(�Ы����N������enter): \n";
		std::string temp;
		std::cin >> temp;
		
		aLoc += dice(6);
		//���� 
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
		
		
		//���or�Ŧa �S��ƥ�  
		std::cout << "�A����F: " << allPond[(aLoc)%25].inf << std::endl;
		if(allPond[(aLoc)%25].house==0 && allPond[(aLoc)%25].inf!="�ŦaQQ"){
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
			//�{�i 
			if(aMoney >= 1000){
				std::cout<<"�n��1000���{�i�����v?(�p�n�п�J:Y�A���n�п�J:N)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					aMoney-=1000;
					allPond[(aLoc)%25].house=1;
					std::cout<<"�P�±z�{�i�����"<<std::endl;
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
			
			std::cout << "�����w�Q���ߤH�hB���a�{�i ��ú��M��O500��" << std::endl;
			aMoney -= 500;
			bMoney += 500;
		}
		
		std::cout<< "A���a�ѤU:"<<aMoney<<"��"<<std::endl;
		
		std::cout << "-------------------------------------------------------------------------------- \n";
		std::cout << "����B���a�Y��l(�Ы����N������enter): \n";
	
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
		
		std::cout << "�A����F: " << allPond[(bLoc)%25].inf << std::endl;
		if(allPond[(bLoc)%25].house==0 && allPond[(bLoc)%25].inf!="�ŦaQQ"){
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
				std::cout<<"�n��1000���{�i�����v?(�p�n�п�J:Y�A���n�п�J:N)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					bMoney-=1000;
					allPond[(bLoc)%25].house=2;
					std::cout<<"�P�±z�{�i�����"<<std::endl;
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
			
			std::cout << "�����w�Q���ߤH�hA���a�{�i ��ú��M��O500��" << std::endl;
			bMoney -= 500;
			aMoney += 500;
		}
		
		std::cout<< "B���a�ѤU:"<<bMoney<<"��"<<std::endl;
		stop++;
		
	}
	
	
	return 0;
}
