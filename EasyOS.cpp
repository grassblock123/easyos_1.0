/*

[C] : Copyright by Create.Inc (2023) & Grassinternet.Inc [2022 - 2040]

Created by {grass_block , Zhujunjie_Official , Xbodw , 不知道从哪里来的Win7}

Opraction mode (Dairy : Close)


---------------------------------------About The Opreacting System-------------------------------------------

	Model : Electicity Product (EP)		Model number : Epc-3-0010T		Useage : 0.000(≈0.00021)V/s
	Memoery Used : < 128MB (Most 256MB)		中国电器能量标识：低

-------------------------------------------------------------------------------------------------------------

*/

//Library and configs
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

//Varibles and Strings (All Dyamic)
	vector <int> var(10,1);
	string sys = "#2wrTsvhgXcE$%as$^yO&S V&(egvsvr**s34i45o3dftTHn^$32*_+ 1342$Escs.e3^&0#G#G";
	string pin = "#PIN_1*7%6^3**8)9#1";
	string pass1 = "F";
	string pass2 = "f";
	
	int ACCEPT = 0;
	//Can accept using "0" not,"1" true;
	string sys1;
	string pins;
	string password;
	string in;
	string in2;
	string dic[100] = {"var_down","var_up","change","biome","direct","locate","say","sysver","taskmgr","filemgr","diskc","terminal","regedit","run","help"};
	int a;
	int dir = 0;
	string file_tree[25] = {"vard.exe","varu.exe","chan.exe","bio.exe","dir.exe","loc.exe","say.exe","sysver.exe","taskmgr.exe","filemgr.exe","diskc.exe","terminal.exe","regedit.exe","run.exe","help.exe","sys.dll","unsi.contr","pack.cof","media.dot","internet.conf"};
	string say;
	int tmp = 0;
	int cnt = 0;
	int mem = 0;
	string way = "C";
	string lists[7] = {"Staring up","Developer","Run File","Applicates","Backup","Media","Internet"};
	int reg_var[7] = {1,0,1,1,0,0,0};
	int dirn = 0;
	int chan_now = 0;
	int cha;
	int run_out = 1;
	//1 can run,0 else

//Funtions
int install(){
	ACCEPT = 1;
	sys1 = "#2wrTsvhgXcE$%as$^yO&S V&(egvsvr**s34i45o3dftTHn^$32*_+ 1342$Escs.e3^&0#G#G";
	pins = "#PIN_1*7%6^3**8)9#1";
	Sleep(2000);
	return 1;
}

bool test(){
	if(ACCEPT == 0){
		cout << "faled in accept varible";
		return false;
	}else{
		return true;
	}
}

bool system(){
	for(int i = 0; i < 10; i++){
		if(var[i] != 1){
			cout << "faled in system tasks";
			return false;
		}
	}
	if(sys1 != sys){
		cout << "faled in system file";
		return false;
	}
	if(pins != pin){
		cout << "faled in system pin";
		return false;
	}
	return true;
}

int startingup(){
	cout << "";
}

bool login(){
	cout << "Welcom! \nplease input your password(if not,press 'F' or 'f')\n";
	cout << "@ manager - #64x <<< ";
	cin >> password;
	if(password == pass1 || password == pass2){
		return true;
	}
	return false;
}

bool chance(){
	install();
	if(!test()){
		return 0;
	}
	if(!system()){
		return 0;
	}
	if(!login()){
		cout <<"Password error! Exit task!\n";
		Sleep(2000);
		return 0;
	}else{
		cout << "\n\nWelcome!\n@ manager\nPrepareing desktop...\n\n\n";
		Sleep(2000);
		return 1;
	}
}

int input(){
	cout << way << " -> @ manager - #64x <<< ";
	cin >> in;
	return 0;
}


int clearm(){
	if(mem >= 2040){
		mem /= 2;
	}
}

int clockclr(){
	if(cnt >= 95){
		cnt /= 4;
	}
	return 0;
}


//outside applicate
int out_applicate(){
	cout << endl << endl << "Secessful Install !" << endl << endl; 
}

//All applicates
	int help(){
		cout << "\nlist:\n";
		cout << "input" << "			" << "output" << "					" << "size\n";
		cout << "filemgr" << "		" << "for see and manager files" << "			" << "1000 byte\n";
		cout << "taskmgr" << "		" << "for end or start the tasks" << "			" << "1000 byte\n";
		cout << "regedit" << "		" << "for change or add the varibles" << "		" << "2000 byte\n";
		cout << "locate" << "		" << "for find the file in the local disk" << "	" << "1000 byte\n";
		cout << "biome" << "		" << "for list the files" << "					" << "1000 byte\n";
		cout << "direct" << "		" << "change the ways to select way" << "		" << "1000 byte\n";
		cout << "sysver" << "		" << "see version of the system" << "			" << "1000 byte\n";
		cout << "var_up" << "		" << "select the varible of files or reglist up" << "	" << "10 byte\n";
		cout << "var_down" << "	" << "select the varible of files or reglist down" << "		" << "10 byte\n";
		cout << "change" << "		" << "change the varible of vavlues" << "		" << "10 byte\n";
		cout << "say" << "		" << "print the input that you type" << "			" << "1000 byte\n";
		cout << "run" << "		" << "run the application in the local disk" << "	" << "2000 byte\n";
		cout << "diskc" << "		" << "into local disk" << "						" << "2000 byte\n";
		cout << "terminal" << "	" << "run the commands" << "						" << "2000 byte\n\n";
		return 0;
	}
	
	int filemgr(){
		cout  << endl << "In local disk files:" << endl << endl;
		for(int i = 0; i < 25; i++){
			cout << file_tree[i] << endl;
		}
		return 0;
	}
	
	int sysver(){
		cout << endl << "============================================================" << endl << "About System:\n\n";
		cout << "System version : EasyOS 1.0\n\n";
		cout << "Creator : Zhujunjie_Official , Xbodw , 不知道从哪里来的Win7 , grass_block\n\n";
		cout << "[C] copyright by Create.Inc & Grassinternet.Inc\n\n";
		cout << "Design by Create.Inc in China\n\n";
		cout << "Thanks for your using and create!\n\n";
		cout << "============================================================" << endl << endl;
		return 0;
	}
	
	
	int sayf(){
		cin >> say;
		cout << endl << say << endl << endl;
		return 0;
	}
	
	int biome(){
		cout << "\nIn local disk :\n\n";
		cout << "C - \n";
		for(int i = 0; i < 25; i++){
			cout << file_tree[i] << "     ";
			tmp ++;
			if(tmp == 5){
				cout << endl;
				tmp = 0;
			}
		}
		cout << endl << endl;
		return 0;
	}
	
	int taskmgr(){
		cout << endl << "CPU useage : ";
		if(cnt <= 10){
			cout << "-";
		}
		for(int i = 0; i < cnt / 10; i++){
			cout << "-";
		}
		cout  << "  " << cnt << "%" << endl;
		cout << "[CPU : Create(R) Virtual Processcor @ 0.1GHz(1 core 2 threads)]\n\n";
		cout << "Memory Useage : " << mem << " of 2048 KB used" << endl;
		cout << "[Memory : Create(R) Enviromet clear Virtual Memory 1024hz 2 MB]\n"<< endl;
		return 0;
	} 
	
	int locate(){
		int flag = 0;
		cin >> in2;
		for(int i = 0; i < 25; i++){
			if(in2 == dic[i]){
				cout << endl << "your file is in local disk number " << i + 1<< endl << endl;
				flag = 0;
				return 0;
			}else{
				flag = 1;
				continue;
			}
		}
		if(flag == 1){
			cout << endl << "the file or application is not in the local disk" << endl << endl;
		}
		return 0;
	} 
	
	int direct(){
		cin >> in2;
		cout << endl << "set the way to " << in2 << endl << endl;
		way = in2;
		return 0;
	}
	
	int regedit(){
		chan_now = 1;
		cout << endl << "The varibles of regedit:" << endl;
		for(int i = 0; i < 7; i++){
			cout << lists[i] << "		" << reg_var[i] << endl;
		}
		dirn = 0;
		cout << endl << "Now select varible : Straing up(1st)\n\n" <<"Using 'var_up' or 'var_down' to change the varible\n";
		cout << endl << "Also use 'change' to change the varible of regedit\n[Input 'exit' to exit]\n\n";
		while(1){
			cin >> in2;
			if(in2 == "var_up" && chan_now == 1){
				if(dirn == 6){
					dirn = 0;
					cout << "Direct now : number " << dirn + 1 << "\nName : " << lists[dirn] << endl << endl;
				}else{
					dirn += 1;
					cout << "Direct now : number " << dirn + 1 << "\nName : " << lists[dirn] << endl << endl;
				}
			}else if(in2 == "var_down" && chan_now == 1){
				if(dirn == 6){
					dirn = 0;
					cout << "Direct now : number " << dirn + 1 << "\nName : " << lists[dirn] << endl << endl;
				}else if(dirn == 0){
					dirn = 6;
					cout << "Direct now : number " << dirn + 1 << "\nName : " << lists[dirn] << endl << endl;
				}else{
					dirn -= 1;
					cout << "Direct now : number " << dirn + 1 << "\nName : " << lists[dirn] << endl << endl;
				}
			}else if(in2 == "change"){
				cout << "What number do you want to change to '" << lists[dirn] << "'?" << endl << endl;
				cout << "input << ";
				cin >> cha;
				reg_var[dirn] = cha;
				cout << endl << endl << "Finish!" << endl << endl;
			}else if(in2 == "exit"){
				return 0;
			}else{
				cout << "Not clear!" << endl << endl;
			}
		}
		return 0;
	}
	
	int diskc(){
		cout << endl << "Into Local Disk " << way << " ,what application do you want to run?\n\n";
		cout << "input <<< ";
		cin >> in2;
		for(int i = 0; i < 100; i++){
			if(in2 == dic[i]){
				if(i == 3){
					biome();
					mem += 5;
					cnt += 3;
					return 0;
				}else if(i == 4){
					direct();
					mem += 3;
					cnt += 3;
					return 0; 
				}else if(i == 5){
					locate();
					mem += 10;
					cnt += 2;
					return 0;
				}else if(i == 6){
					sayf();
					mem += 1;
					cnt += 1;
					return 0;
				}else if(i == 7){
					sysver();
					mem += 10;
					cnt += 3;
					return 0;
				}else if(i == 8){
					taskmgr();
					mem += 12;
					cnt += 4;
					return 0;
				}else if(i == 9){
					filemgr();
					mem += 15;
					cnt += 7;
					return 0;
				}else if(i == 12){
					regedit();
					mem += 15;
					cnt += 7;
					return 0;
				}else if(i == 14){
					help();
					mem += 10;
					cnt += 2;
					return 0;
				}
			}else{
				mem += 15;
				cnt += 1;
				continue;
			}
		}
		return 0;
	}
	
	int run(){
		cin >> in2;
		for(int i = 0; i < 100; i++){
			if(in2 == dic[i]){
				if(i == 3){
					biome();
					mem += 5;
					cnt += 3;
					return 0;
				}else if(i == 4){
					direct();
					mem += 3;
					cnt += 3;
					return 0; 
				}else if(i == 5){
					locate();
					mem += 10;
					cnt += 2;
					return 0;
				}else if(i == 6){
					sayf();
					mem += 1;
					cnt += 1;
					return 0;
				}else if(i == 7){
					sysver();
					mem += 10;
					cnt += 3;
					return 0;
				}else if(i == 8){
					taskmgr();
					mem += 12;
					cnt += 4;
					return 0;
				}else if(i == 9){
					filemgr();
					mem += 15;
					cnt += 7;
					return 0;
				}else if(i == 10){
					diskc();
					mem += 10;
					cnt += 5;
					return 0;
				}else if(i == 12){
					regedit();
					mem += 15;
					cnt += 7;
					return 0;
				}else if(i == 14){
					help();
					mem += 10;
					cnt += 2;
					return 0;
				}
			}else{
				mem += 15;
				cnt += 1;
				continue;
			}
		}
		return 0;
	}
	
	int terminal(){
		while(1){
			cout << "Terminal x64 >";
			cin >> in;
			for(int i = 0; i < 100; i++){
				if(in == dic[i]){
					if(i == 3){
						biome();
						break;
					}else if(i == 4){
						direct();
						break;
					}else if(i == 5){
						locate();
						break;
					}else if(i == 6){
						sayf();
						break;
					}else if(i == 7){
						sysver();
						break;
					}else if(i == 8){
						taskmgr();
						break;
					}else if(i == 9){
						filemgr();
						break;
					}else if(i == 10){
						diskc();
						break;
					}else if(i == 11){
						cout << endl << "Input 'exit' to end the terinal\n\n";
						terminal();
						break;
					}else if(i == 13){
						run();
						break;
					}else if(i == 12){
						regedit();
						break;
					}else if(i == 14){
						help();
						break;
					}
				}else if(in == "out_applicate" && run_out == 1){
					out_applicate();
					break;
				}else if(in == "exit"){
					return 0;
				}else{
					continue;
				} 
			}
		}
		return 0;
	}
		
		
int process(){
	for(int i = 0; i < 100; i++){
		if(in == dic[i]){
			if(i == 3){
				biome();
				mem += 5;
				cnt += 3;
				return 0;
			}else if(i == 4){
				direct();
				mem += 3;
				cnt += 3;
				return 0; 
			}else if(i == 5){
				locate();
				mem += 10;
				cnt += 2;
				return 0;
			}else if(i == 6){
				sayf();
				mem += 1;
				cnt += 1;
				return 0;
			}else if(i == 7){
				sysver();
				mem += 10;
				cnt += 3;
				return 0;
			}else if(i == 8){
				taskmgr();
				mem += 12;
				cnt += 4;
				return 0;
			}else if(i == 9){
				filemgr();
				mem += 15;
				cnt += 7;
				return 0;
			}else if(i == 10){
				diskc();
				mem += 10;
				cnt += 5;
				return 0;
			}else if(i == 11){
				cout << endl << "Input 'exit' to end the terinal\n\n";
				mem += 24;
				cnt += 12;
				terminal();
				return 0;
			}else if(i == 13){
				run();
				mem += 10;
				cnt += 5;
				return 0;
			}else if(i == 12){
					regedit();
					mem += 15;
					cnt += 7;
					return 0;
			}else if(i == 14){
				help();
				mem += 10;
				cnt += 2;
				return 0;
			}
		}else{
			mem += 15;
			cnt += 1;
			continue;
		} 
	}
	cout << endl << "Command or file not found!" << endl << endl;
	return 0;
}

bool easyOS(){
	cout << "input commands or strings to control the system\n[input 'help' for help]\n\n";
	while(1){
		input();
		clockclr();
		clearm();
		process();
	}
}

//Maining codes
int main(){
	if(!chance()){
		return 0;
	}
	easyOS();
}
