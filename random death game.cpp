#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main () {
	int c=NULL,m;
	char a[] = "C:\\Windows\\System32\\shutdown.exe -s -t 5";
	while( c == NULL){
star:
		cout <<endl<< " \t\t1 : 게임 시작  2 : 게임 설명 그 외: 게임 종료 "<<endl<<endl ;
		cout << " \t\t위의 소개를 보고 선택하십시오 : " ;
		cin >> c;
	}
	string input = "";
	if(c==2){
		system("cls");
		cout <<endl<<endl<<endl<< "\t\t1~20 까지의 숫자를 추측 하시면 됩니다 ^^" << endl;
		goto star;
	} else if(c==1){
		system("cls");
		cout << endl << "\t\t랜덤 넘버게임에 오신것을 환영 합니다." << endl;
		int random_numer= rand()%20;
		short int choice = 0;
		srand((unsigned int)time(NULL));
		while (true) {
			cout << "\t\t아무 키나 누르면 실행 됩니다   :   ";
			getline(cin, input);
			if (choice != 0.0000001)
			{
				goto Number;
			}
		}
Number:

		short int g = 0;
		int num;
		int n;
		for(n=3 ; n>0 ; ) {
			cout << "\t 남은 기회 : "<< n << endl;
			cout << endl << "\t\t추측한 숫자: ";
			cin >> g;
			// cout << RAND_MAX;
			num = 20 * rand()/ RAND_MAX;
			cout << "\t\t랜덤 숫자 : " << num << " 당신이 추측한 숫자: " << g << endl;
			if (num == g){
				system("cls");
			//	cout << "\t\t정답입니다\n";
				cout<<"                         X@FDA                          ASDFHW :*"<<endl;
				cout<<"                        X@.  . ;@r                     A@ ,@M@;@S"<<endl;      
				cout<<"                       @r B@@@  @S                   ;@ ;@r.G@ @i"<<endl;    
				cout<<"                       A# @h.M@  @5                  @r @r.:@;.@"<<endl;    
				cout<<"                        @r @r.@#  @s                A@ @3.,B# @i"<<endl;               
				cout<<"                        ,@ :@;,@@ .@:              :@ X@,,S@ i@"<<endl;          
				cout<<"                         r@ r@:,@M ;@              @r @;,;@,.@ "<<endl;           
				cout<<"                          2@ X@.:@X S@;;5&AAHAAAAXM@:@9.:@S @,"<<endl;       
				cout<<"                           3@ AH.r@M2@ASr;:.....,,::sMHH@@ Ai"<<endl;       
				cout<<"                            hB @@As,   ,;S2333XX2s;,    ;5#@,"<<endl;       
				cout<<"                             @@r   sABH92ir;;;r;rsSX&BH2;   A@2"<<endl;       
				cout<<"                           :@5  i#Hi,.     ....        :5BH;  &@2"<<endl;       
				cout<<"                          A@. 9@S.   ......,,,,,.. .:;;:. ,3@s  @@."<<endl;       
				cout<<"                         @@ .@X     .....,,,,,,..2@@M&h&H#Mr.A@. 5@,"<<endl;       
				cout<<"                        #@ :@;  :ShAAA&2;..,,,.s@M,       ,M@.r@r S@"<<endl;       
				cout<<"                       2@ .@: ;@@hi;:;rh@@r.,.r@:           5@ ,@r h@"<<endl;       
				cout<<"                       @, @S 2@;         r@3  @&      ,      MM :@, @@XS:"<<endl;       
				cout<<"                    .:B@ 5@ :@.           .@s @h     X@X     s@  #@B3XXA@@"<<endl;       
				cout<<"                   @@HX3A@@rXH     i@.     ## i@      .      B&:@A,     .H@"<<endl;       
				cout<<"                  @A      :B@#     r#.     B&  &@,          h@9@;   ..... @9"<<endl;       
				cout<<"                 S@  ....   S@:           .@G2h2#@#2;,.,;5B@G5@. .,,,,,, :@"<<endl;       
				cout<<"                 ,@. .,,,..  G@.         r@@@@@@@A;&M#@@#Hi. @; .,,,,,,.;@:"<<endl;              
				cout<<"                  M@..,,,,,.  @@&5srrS9#@B,r@@@@@s  ri      2@  ,,,,,.:#@,"<<endl;            
				cout<<"                   H@;.,,,,,. 5@sXHMBA2G@    .XH    @@      MA  .....2@i"<<endl;                   
				cout<<"                    i@2 .,,,, ,@,      .@#:.  &@XiS#@: .r3A9@@&HG2;,M@;"<<endl;                     
				cout<<"                     ,@H .,.  .@B:;:     XMM@@#B@@@:  ;@@Gs;,:ri2A#@@@"<<endl;                  
				cout<<"                       @& .sH#BHMAH@@s      H@9  B@. ,@9           .i@:"<<endl;              
				cout<<"                        @@@@5,      ;@i  .. i@h  G@s .@5,rrr;:.      ;@;"<<endl;                 
				cout<<"                        @#,      ;5G&@@Mr . .@#  G@3  &@HABB##@#As... M@"<<endl;            
				cout<<"                      ,@s  ...,h@#Gr,..5@s   S@  9@& i@.      ,;X@i.. r@"<<endl;              
				cout<<"                      @#  .,,X@H:       9@    X@ #@r 5@           .,, r@."<<endl;              
				cout<<"                      @3 .,,:#r  .  .:rs@@.    ,59r .;@M2XXSs;.  .,,, 2@"<<endl;             
				cout<<"                      3@..,,.  .,.;A@@H2sB@A992srriX2i@@2XhAM@@@s.,,, @X"<<endl;              
				cout<<"                       @@ ....,,,5@A:     @Miisrssisri@:      ,s;,,, i@"<<endl;           
				cout<<"                        @@, .,,,,:,     ;@X.;rrrrr;:. M@        ....2@:"<<endl;           
				cout<<"                         M@A;....    ,X@M.             A@Air;;:;rSG@#"<<endl;           
				cout<<"                           2@#A2srSh#@A.                 r9&AA&GG9r"<<endl;       
				cout << "\t\t\t\t정답입니다\n";
				int com;
				while((com = getchar()) != '.'){
				}
				return 0;
			}
			else{
				cout << "\t\t정답이 아닙니다"<<endl;
				n--;
			}
		}
		system("cls");
		cout<<"                                      .s25;         5252s"<<endl;
		cout<<"                                     @@B22@@X     G@#;:r@@,"<<endl;
		cout<<"                                   @@  rr .@5   ;@. :3: X@  "<<endl;
		cout<<"                                  ,@  @M@@ s@   #@ 2@9@i @@ "<<endl;
		cout<<"                                  .@ r@,.@G #@  ;@ i@..@X A@"<<endl;
		cout<<"                                  :@ ;@,.@@ i@  .@ ;@,.#@ ,@"<<endl;
		cout<<"                                  :@ r@,.A@ .@   @. @:.5@  @:"<<endl;
		cout<<"                                  .@ :@:.h@  @;  @; @r.:@: @&"<<endl;
		cout<<"                                   @  @;.2@  @h  @2 @2.,@3 H@"<<endl;
		cout<<"                                   @  @; i@  @@  @@ @@:,#@ ,@"<<endl;
		cout<<"                                   @r @@#@@@H@@@#MMhM@##@@X2@s"<<endl;
		cout<<"                                ,3@@9r:                    ,rh@@@S"<<endl;
		cout<<"                            .@@#.    :9#@@@@#MBHG9GABM#@@@@#9;    G@@    "<<endl;
		cout<<"                           &@M    2@@@&r:.                .;5B@@S   @@s   "<<endl;
		cout<<"                          @@   :@@A;       .........  ;2ABBAGhhM@@i  :@M   "<<endl;
		cout<<"                        .@@  .@@Gi2GH##MHX: .,,,,,.3@#i:@@@@@@@ @@@   @@  "<<endl;
		cout<<"                       @A  s@Hhi,         ;h@@:.,,@#              .@@   @@  "<<endl;
		cout<<"                      @&  @@:                r@, A#       .HX       @.@5  @A "<<endl;
		cout<<"                     .@. .@@        r&        @i X@       .@@       @.5@  2@ "<<endl;
		cout<<"                     r@  X@@        G@,       @5 ,@.                @,.@,  @,"<<endl;
		cout<<"                     2@  @2#X                 @:  M@              .H@  @A  @s"<<endl;
		cout<<"                     :@  @i @:               ##    @@.            &@2  #@  @S "<<endl;
		cout<<"                      @. @A @@A      :rssr,.## ,s5s.2@MX@@@@@@@@@   h@iA@  @S"<<endl;
		cout<<"                      @S #@2:    iB@@@@@#@@@@:X@@@@@i:@@2;,..:r&@@    i@@  @S"<<endl;
		cout<<"                      @@@@#     9@@i.       h@@@@@@&M@M   ....   5@:M  :hB:@s"<<endl;
		cout<<"                      ,@H;   3.&@.      ;2HAr .###@A  r@Hr. ....  s@@@2A@H@@"<<endl;
		cout<<"                     S@@.  M@@@@  ..,rG#&r   i@M:,r@@;  r##h;  ... :H.G@@s:@3"<<endl;
		cout<<"                .ir,@@@@@#h@@@S  ,.X@@@2   S@@A     @@#   hB@@@@@@#&hS@, #X,#@"<<endl;
		cout<<"    ,BA        5@5#@:@@@9@; @3  ,,.:##5A .@H;@  ... X@2@9 ;@A2r;,.s:,X@h :@  "<<endl;
		cout<<"    i@@&;.@@s  r@rHA      @  @#....M@@@i&@r HA .,,. B@@,&@@r&r    3@:  9@@. "<<endl;
		cout<<"       ;@@@@@@   .    .;r;#@: M@S  .93iB2  ,@, ,,,. @.i@,@9r@  ... G@   .@#"<<endl;
		cout<<"        @@r  :@s.  ;@@@@@#A#@X ,@@iA@5i    ## ,,,, X@  ..@,G@  ... 2@     @S"<<endl;
		cout<<"       .ABhh&;i@@@@@H9#A&##9i@@ .@@@@@i;;,:@: ,,,,.@:    @..@B:..:2@5 @i  @@"<<endl;
		cout<<"            ;@@@@AA@2h@. #ri@i@@5S;   iH@#@& .,,, h@A#@#@@. ,B@@@@B; S@:  @@"<<endl;
		cout<<"             i@@A@@Xss&@B@ri@XrM@        ,@ .,,,,.@;.,. :@.   @@3    @X  s@."<<endl;
		cout<<"               rH@h;iiss23h9iiss@@@BB@@3;@s ,,,, @B     :@   @B#@  :@@  h@:"<<endl;
		cout<<"                 G@isssi@&rsiis@X@h   :s@A .,,:.s@       @@M@@  #@@@H@@@@"<<endl;
		cout<<"                  h@@##@#iiSSi@3 &@  ..   .,,,,.@;        ,. @:  ..   .&@"<<endl;
		cout<<"                  ,@23XiriSii2@   @@;.   .,,,. @B            @@        @M"<<endl;
		cout<<"                  r@Ss##iSH#s9@    G@@#A2r:,:i@#              @A      5@. "<<endl;
		cout<<"                   Arr@@22@@S#@     @# ;X#@@@H:               .@@@##@@@. "<<endl;
		//system(a);
		cout<< "목.숨.을 모.두 잃.으.셨.습.니.다.  곧 컴퓨터가 꺼집니다 ^^";
		cin >> c;
	}
	else{
		while( c= getchar() != '.'){
			system("cls");
			cout<< endl<< endl<< "\t\t . EnTer 를 누르면 종료 됩니다.";
		}
	}
}
