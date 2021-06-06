#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
//�|�Xbug������:%�t��(kind of done)�B�@�Ӥ����D��ԣ�|�dA�b��a��bug(done) �B��ƥ������}(done)�B�C����������(�ثe�O50���Φ��H�}��)�B���a��(done)�B����ܪŦa (done)
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
    std::cout << "��l�I��: " << num << std::endl;

    return num;
}
pondInf allPond[25];
void generatePondInf(){

	for(int i=0; i<25; i++){		
		allPond[i].house = 0;
	}
	allPond[3].inf = "���j�`1��16���[��� �a�I�G338��饫Ī�˰�Ī���n��6�� \n\n²���G���j�`1��16���[������~���٥����u�j����v�A�S�٬��u���j��v\n��鿤�F���b���g���P�ؤF����1200���ت�����B�D�A���a����86000���褽�ءA��¶�@�餣��20�h����\n����B�D���]���D�F�Υ�ͽഺ���x�A�B�D��ǨúشӤj�q�����A�ѩ���ͪ��}�n\n�����w������G�D�A�����谮�b�i���`�`�A�L�麩�B�䤤�٥i�[������V�����ΡA��W�K�����R���H\n�`�l�ު�����ϱ�_�����Ӧ��C�]�B�M���ιB�ʡA�o�̤]�O�[��i�����n�a��C\n";
	allPond[4].inf = "���1-4���ͺA��� �a�I�G330��饫���ϰ�ڸ��@�q \n\n²���G�D�n�]�m�]�I�]�A����B�D350���ءB�ͺA����0.2�����B��쥭�x4�y\n���[�D�F1�y�B��̹D142���ءB�ި��2�y�B�y����[2�y�έ�ͳ��_�|��6�f�]5�f�������B1�f���ˬy���^��\n�����Ѥ@�������ͥH�~�A��ͳ��_�|�����ӱN�e�U�ͺA�O�@�����U�_�|�A���ɤ���~�}��\n�ȴ��ѥ��ӥӽ����ұШ|����������A�ðt�X�_�|�����H�����P�U�}��ϥΡA�ȩ�W��8�ɦܤU��18�ɴ��ѥ����ϥΡC\n";
	allPond[7].inf = "�K�w���۵M�ͺA���� �a�I�G334��饫�K�w�Ͽ��׸�1315�� \n\n²���G�q��ϥD�J�f�i�J�A�u�ۨB�D��g����޲z���ߡA�]���@�����[�@�ث�\n��y�Ъ��ż��P�f�t��u�ѥ]�B�氮�M��R�@�س������t�A��{�����d�եΤ@�y�U�ȯ��Ӷ�\n�����F������A������Ϥ����״I�ͺA�C�������B�D�A��Ϥ����ˤ��@���B��a���x�B���[���[�D�F\n��̹D���A���O�ȤH�̥i��Z���[��h�˩ʥͺA�����I�C\n";
	allPond[14].inf = "2-6���]�O�ͺA��� �a�I�G330��饫���ϰ��פC��48�� \n\n²���G�j���ɬ��ˤl�@��3�f�p���X�֬��@�f�j���A�S�٬��u�j��v\n�b�~���ѻP�U�A�w�W���u�]�O�]YaLe�^�ͺA���v�F�u�{�]�A�F����B�D800����\n�٦�170���ت����c�B���A����������B�D�q���s�w��p�A�w���S�L�����z�Z�C\n";
	allPond[10].inf = "2-14�������B�D(���O���) �a�I�G330��饫���ϥæw��1468��70�� \n\n²���G�o�̪����O��۷�h�A���Ӯ�ا�h����A�i���ٷ|�l�ާ�h�����E��\n�]��2-14���i�H�٬��u���O��ͺA�����v�C\n";
	allPond[8].inf = "�XФ�����ͺA���� �a�I�G334��饫�K�w�ϭXФ�� \n\n²���G�XФ�����ͺA����֦����㪺�ͺA�B�M�ժ����ҡA�s�諸��`�]�����[�B�D\n�`�l�ޥ������B�䶡�A�]�A�X�M���ۦ樮�@����ϭ����C\n";
	allPond[12].inf = "���O�ͺA����� �a�I�G330��饫���Ϥ��s��1216��112�� \n\n²���G2-5���������B�D�B��ͮy�ȤβD�F�B�ө��]�ơA�úشӴ��[�Ӯ�\n���yĬ�B���ЪQ�B�W�ǵ����A�@�~�|�u�Ҧ��W�S�����A�]���`���]�O�b�o�̬���\n�ҥH�R�W�����O�ͺA�����C\n";
	//allPond[16].inf = "Ī�ˤ��ѥͺA��� �a�I�G��饫Ī�˰Ϥj���@��B�������� \n\n²���G���Ѱ��ͺA�����¦W��2-11���A�`���n��4.5�����A����850���ت����ֵL��ê�����B�D\n�O�d�즳���Ӯ�y���A�ñj�Ʃ]���ө��]�I�A������]�O�B�A�����״I���ͺA�A�]�����F��~����͹B�ʪ��n�h�B\n�b���Ǫ��j�˹Ϯ��]Ū�Ѥ��l�A�ٯ�Y�ऻ�Ѱ���]���C";
	allPond[15].inf = "��Y�ͺA��� �a�I�G334��饫�K�w�ϩM����411��19���� ���� \n\n²���G��Y���ͺA�����ݩ�۪��j�`����L����62�����A�o�@�a�E���s���ݲ[�Y�}�A�S�ٽݰ�@�}�A�Ӥ���Ǫ��E���h�s����@�}\n�]����ɤH�̦b����賡�f�Щ~��ӱo�W�A��ӦW����Ʀ���Y�A���骺�W�r�]�O�]���Ө�\n";
	//allPond[17].inf = "�C���ͺA���� �a�I�G320��饫���c�Ϥ�w��300�� \n\n²���G�u�C���v�b�x�W���K��鯸����A�g�L�W������A���������������ˤ��Ŷ��F�o�̳]�m�ˤ��w�Y�B�[�����x�B��̹D�B�H��B�D\n�Τ�~�@�����h�����C�ͪŶ��A�O�����̤@�ӹ��R�B�𶢪��n�h�B�A�ٴ��g�a��x�W���@�ؿv�����j���I";
	allPond[1].inf = "�S��ƥ�";
	allPond[2].inf = "�S��ƥ�";
	allPond[5].inf = "�S��ƥ�";
	allPond[6].inf = "�S��ƥ�";
	allPond[9].inf = "�S��ƥ�";
	allPond[11].inf = "�S��ƥ�";
	allPond[13].inf = "�S��ƥ�";
	allPond[0].inf = "�_�I";


	
	allPond[1].event = "�o�{�B�� Eric���}�� ��h5�B";
	allPond[2].event = "�o�{�]�O �]�����h�F �`�|�J��Eric ��100���ë�h2�B";
	allPond[5].event = "�o�{�f�� �߱o�f���I���ޯ� ���e3�B";
	allPond[6].event = "�o�{�ͯf���d���� �v���O150��";
	allPond[9].event = "�o�{�x�W�ӽ��� �j�a���A����";
	allPond[11].event = "�o�{�A�� Ericı�o���� ��100��";
	allPond[13].event = "�o�{���O�� Ericı�o�ܺ}�G �[100��";
	/*allPond[3].event = "�S�ưդ��n��i";
	allPond[15].event = "�S�ưդ��n��i";
	allPond[0].event = "�S�ưդ��n��i";*/


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
	std::cout << "�p�n��j�����A�Шϥ�Ctrl+�ƹ��u��\n\n�ϥܻ���: A:A���a����m B:B���a����m O:���ΪŮ�\n" << std::endl; 
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
	std::cout << " <-�o�O���P�S��ƥ��m�� P�N����(A��A���a�{�i�BB��B���a�{�i) E�N��S��ƥ�";
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
		std::cout << "����A���a�Y��l(�Ы����N������enter): \n";
		std::string temp;
		std::cin >> temp;
		
		aLoc += dice(6);
		//���� 
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
		
		
		//���or�Ŧa �S��ƥ�  
		std::cout << "�A����F: " << allPond[(aLoc)%16].inf << std::endl;
		if(allPond[(aLoc)%16].house==0 && allPond[(aLoc)%16].inf!="�S��ƥ�" && allPond[(aLoc)%16].inf!="�_�I"){
			//�{�i 
			if(aMoney >= 250){
				std::cout<<"�n��250���{�i�����v?(�p�n�п�J:Y)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					aMoney-=250;
					allPond[(aLoc)%16].house=1;
					std::cout<<"�P�±z�{�i�����"<<std::endl;
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
			
			std::cout << "�����w�Q���ߤH�hB���a�{�i ��ú��M��O100��" << std::endl;
			aMoney -= 100;
			bMoney += 100;
		}else if(allPond[(aLoc)%16].inf=="�_�I"){
			std::cout << "A���a����_�I �[100��" << std::endl;
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
		
		std::cout<< "A���a�ѤU:"<<aMoney<<"��"<<std::endl;
		if(aMoney<=0){
			//std::cout << std::endl << "B���aĹ�F �A�n�j �A�O����!!!";
			break;
		}
		
		std::cout << "-------------------------------------------------------------------------------- \n";
		std::cout << "����B���a�Y��l(�Ы����N������enter): \n";
	
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
		
		std::cout << "�A����F: " << allPond[(bLoc)%16].inf << std::endl;
		if(allPond[(bLoc)%16].house==0 && allPond[(bLoc)%16].inf!="�S��ƥ�" && allPond[(bLoc)%16].inf!="�_�I"){
			
			if(bMoney >= 250){
				std::cout<<"�n��250���{�i�����v?(�p�n�п�J:Y)"<<std::endl;
				char tem;
				std::cin>>tem;
				if(tem=='Y'){
					bMoney-=250;
					allPond[(bLoc)%16].house=2;
					std::cout<<"�P�±z�{�i�����"<<std::endl;
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
			
			std::cout << "�����w�Q���ߤH�hA���a�{�i ��ú��M��O100��" << std::endl;
			bMoney -= 100;
			aMoney += 100;
		}else if(allPond[(bLoc)%16].inf=="�_�I"){
			std::cout << "B���a����_�I �[100��" << std::endl;
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
		
	
		std::cout<< "B���a�ѤU:"<<bMoney<<"��"<<std::endl;
		stop++;
		if(bMoney<=0){
			//std::cout << std::endl << "A���aĹ�F �A�n�j �A�O����!!!";
			break;
		}
		
	}
	if(aMoney > bMoney){
		std::cout << std::endl << "A���aĹ�F �A�n�j �A�O����!!!";
	}else if(aMoney < bMoney){
		std::cout << std::endl << "B���aĹ�F �A�n�j �A�O����!!!";
	}else{
		std::cout << std::endl << "��쳣�O����!!!";
	}
		
	std::cout << std::endl << "�P�¹C��" <<std::endl << "@2021���j�I��"; 
	
	return 0;
}
 

