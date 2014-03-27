	#include <iostream>
	#include <windows.h>
	#include <string>
	#include "generalfunctions.h"
	#include "menu.h"
	#include "character.h"
	#include <stdlib.h>
	using namespace std;
	int start(){
		string _ANSWER;
		bool _START = true;
		print("Thank you for playing this game.\n");
		while(_START){
			cout<<"Menu\nStart\nLoad(not available yet)\nQuit\n";
			cin>>_ANSWER;
			for(int i=0;i<_ANSWER.size();i++){
				if(_ANSWER[i]> 64 && _ANSWER[i]< 90){
					_ANSWER[i] = _ANSWER[i]+(97-65);
				}
			}
			switch(_ANSWER[0]){
				case 's': _START = false;return 1;break;
				case 'q':return 0;break;
			}
		}	
	}
	void CharacterCreation(){
		string _name;
		int _age=0;
		int str,dex,sta,in,chr,luk;
		print("Write a name for your character: ");
		cin>>_name;
		while(_age<6 || _age>90){
		print("Now select an age between 6 and 90: ");
		cin>>_age;
	}
	if(_age<35){
		str=95*((_age/91)+1);
	}else{
		str=95/((_age/91)+1);
	}
	if(_age<43){
		sta=84*((_age/96)+1);
	}else{
		sta=84/((_age/96)+1);
	}
	if(_age<19){
		dex=87*((_age/95)+1);
	}else{
		dex=87/((_age/95)+1);
	}
	in = 64*((_age/92)+1);
	if(_age<48){
		chr=35*((_age/89)+1);
	}else{
		chr=35/((_age/98)+1);
	}
	luk = 31 + (rand() % 15);
	
	
	
	print("Your stats currently looks like the following:\n");
	cout<<"Strength: "<<str<<endl;
	cout<<"Stamina: "<<sta<<endl;
	cout<<"Dexterity: "<<dex<<endl;
	cout<<"Intelligence: "<<in<<endl;
	cout<<"Charisma: "<<chr<<endl;
	cout<<"Luck: "<<luk<<endl;
	int _statpoints=10;
	MainCharacter mc;
	mc.setstats(_name,_age,str,sta,dex,in,luk,chr,1,0,_statpoints);
	print("You may allocate up to 10 different stat pooints.\n");
	//AllocateStatPoints(_statpoints);// make this function
	}