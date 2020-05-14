#include "board.hpp"

#include<iostream>
#include<util_func.hpp>
#include<exceptions.hpp>

using namespace std;

//  BOARD_PRINTER_METHODS
void _BoardPrinter::type1(int boxlen, int nrow,const std::vector<std::vector<ludo_box>>& board){
	string content;

	//Actual-Row Start
	for(size_t j=0; j<boxlen; ++j){
		std::cout<<'|';
		for (size_t i = 0; i < (boxlen+1)*6 - 1; i++)
			std::cout<<'\\';

		std::cout<<'|';

		for (size_t i = 0; i < 3; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<'|';
		}

		for (size_t i = 0; i < (boxlen+1)*6 - 1; i++)	std::cout<<'\\';
		std::cout<<"|\n";
	}
	//Actual-Row End

	//Inter-Row line Start
	std::cout<<'|';
	for (size_t i = 0; i < boxlen; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < (boxlen)*2 + 1; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < boxlen; i++) std::cout<<'\\';
	std::cout<<'|';

	for (size_t i = 0; i < (boxlen+1)*3-1; i++) std::cout<<'-';

	std::cout<<'|';
	for (size_t i = 0; i < boxlen; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < (boxlen)*2 + 1; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < boxlen; i++) std::cout<<'\\';
	std::cout<<"|\n";
	//Inter-Row Line end
}

void _BoardPrinter::type2(int boxlen, int nrow,const std::vector<std::vector<ludo_box>>& board){
	//Actual-Row Start
	for(size_t j=0; j<boxlen; ++j){
		std::cout<<'|';
		for (size_t i = 0; i < boxlen; i++)	std::cout<<'\\';
		for (size_t i = 0; i < boxlen+2; i++) std::cout<<' ';
		for (size_t i = 0; i < (boxlen)*2 + 1; i++)	std::cout<<'\\';
		for (size_t i = 0; i < boxlen+2; i++) std::cout<<' ';
		for (size_t i = 0; i < boxlen; i++) std::cout<<'\\';
		std::cout<<'|';


		for (size_t i = 0; i < 3; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<'|';
		}

		for (size_t i = 0; i < boxlen; i++)	std::cout<<'\\';
		for (size_t i = 0; i < boxlen+2; i++) std::cout<<' ';
		for (size_t i = 0; i < (boxlen)*2 + 1; i++)	std::cout<<'\\';
		for (size_t i = 0; i < boxlen+2; i++) std::cout<<' ';
		for (size_t i = 0; i < boxlen; i++) std::cout<<'\\';
		std::cout<<"\n";
	}
	//Actual-Row End

	//Inter-Row line Start
	std::cout<<'|';
	for (size_t i = 0; i < boxlen; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < (boxlen)*2 + 1; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < boxlen; i++) std::cout<<'\\';
	std::cout<<'|';

	for (size_t i = 0; i < (boxlen+1)*3-1; i++) std::cout<<'-';

	std::cout<<'|';
	for (size_t i = 0; i < boxlen; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < (boxlen)*2 + 1; i++)	std::cout<<'\\';
	for (size_t i = 0; i < boxlen+2; i++) std::cout<<'-';
	for (size_t i = 0; i < boxlen; i++) std::cout<<'\\';
	std::cout<<"|\n";
	//Inter-Row Line end

}

void _BoardPrinter::type3(int boxlen, int nrow,const std::vector<std::vector<ludo_box>>& board){
	//Actual-Row Start
	for(size_t j=0; j<boxlen; ++j){
		std::cout<<'|';
		for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'\\';
		std::cout<<'|';


		for (size_t i = 0; i < 3; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<'|';
		}

		for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'\\';
		std::cout<<"|\n";
	}
	//Actual-Row End

	//Inter-Row line Start
	std::cout<<'|';
	for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'\\';
	std::cout<<'|';

	for (size_t i = 0; i < (boxlen+1)*3-1; i++) std::cout<<'-';

	std::cout<<'|';
	for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'\\';
	std::cout<<"|\n";
	//Inter-Row Line end
}

void _BoardPrinter::type4(int boxlen, int nrow,const std::vector<std::vector<ludo_box>>& board){
	//Actual-Row Start
	for(size_t j=0; j<boxlen; ++j){
		std::cout<<'|';
		for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'\\';
		std::cout<<'|';


		for (size_t i = 0; i < 3; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<'|';
		}

		for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'\\';
		std::cout<<"|\n";
	}
	//Actual-Row End

	//Inter-Row line Start
	std::cout<<'|';
	for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'-';

	for (size_t i = 0; i < (boxlen+1)*3-1+2; i++) std::cout<<'-';

	for (size_t i = 0; i < (boxlen+1)*6-1; i++)	std::cout<<'-';
	std::cout<<"|\n";
	//Inter-Row Line end
}

void _BoardPrinter::type5(int boxlen, int nrow,const std::vector<std::vector<ludo_box>>& board){
	//Actual-Row Start
	for(size_t j=0; j<boxlen; ++j){
		std::cout<<'|';
		for (size_t i = 0; i < 6; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<'|';
		}

		for (size_t i = 0; i < (boxlen+1)*3 -1; i++) std::cout<<' ';	
		std::cout<<'|';

		for (size_t i = 0; i < 6; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<'|';
		}
	}
	//Actual-Row End

	//Inter-Row line Start
	std::cout<<'|';
	for (size_t i = 0; i < (boxlen+1)*6-1; i++) std::cout<<'-';
	std::cout<<'|';

	for (size_t i = 0; i < (boxlen+1)*3 -1; i++) std::cout<<' ';	
	std::cout<<'|';

	for (size_t i = 0; i < (boxlen+1)*6-1; i++) std::cout<<'-';
	std::cout<<'|';
	//Inter-Row Line end
}

void _BoardPrinter::type6(int boxlen, int nrow,const std::vector<std::vector<ludo_box>>& board){
	//Actual-Row Start
	for(size_t j=0; j<boxlen; ++j){
		std::cout<<'|';
			util_func::align_text_center(boxlen, board[nrow][6].get_box_content());
			std::cout<<'|';
		for (size_t i = 0; i < 5; i++){
			util_func::align_text_center(boxlen, board[nrow][7+i].get_box_content());
			std::cout<<' ';
		}

		for (size_t i = 0; i < (boxlen+1)*3 -1; i++) std::cout<<' ';	
		std::cout<<'|';

		for (size_t i = 0; i < 4; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<' ';
		}
		for (size_t i = 0; i < 2; i++){
			util_func::align_text_center(boxlen, board[nrow][6+i].get_box_content());
			std::cout<<'|';
		}

	}
	//Actual-Row End
	//Inter-Row line Start
	std::cout<<'|';
	for (size_t i = 0; i < (boxlen+1)*6-1; i++) std::cout<<'-';
	std::cout<<'|';

	for (size_t i = 0; i < (boxlen+1)*3 -1; i++) std::cout<<' ';	
	std::cout<<'|';

	for (size_t i = 0; i < (boxlen+1)*6-1; i++) std::cout<<'-';
	std::cout<<'|';
	//Inter-Row Line end	
}
//  BOARD_PRINTER_METHODS

//GAME_CLASS_DEFINTIONS START
void game::player_move(vector<int> &consq_moves){
	//TODO
}

void game::moveGoti(ludo_goti& the_goti, unsigned int dist){
	int x_increment=0, y_increment=0;	//[NOTE] - Can store these in the ludo_box class itself, besides the corner specification
	direction turnDirection;

	board[the_goti.curr_coords.getKey()][the_goti.curr_coords.getVal()].removeGoti(the_goti.gotiColour);

	while(dist--){

		x_increment = y_increment = 0;

		turnDirection = dir_to_turn_ifCoord_in_CornerCoordsVec(the_goti.getCoords(), ludo_coords::inner_turns);
		if(turnDirection != NO_TURN){
			if(turnDirection == NORTH){
				x_increment = 2;
				y_increment = 1;
			}
			else if(turnDirection == EAST){
				x_increment = 1;
				y_increment = -2;
			}
			else if(turnDirection == WEST){
				x_increment = -1;
				y_increment = 2;
			}
			else if(turnDirection == SOUTH){
				x_increment = -2;
				y_increment = -1;
			}
		}
		else{

			turnDirection = dir_to_turn_ifCoord_in_CornerCoordsVec(the_goti.getCoords(), ludo_coords::outer_corners);
			if(turnDirection != NO_TURN){
				if(turnDirection == NORTH){
					x_increment = 0;
					y_increment = 1;
				}
				else if(turnDirection == EAST){
					x_increment = 1;
					y_increment = 0;
				}
				else if(turnDirection == WEST){
					x_increment = -1;
					y_increment = 0;
				}
				else if(turnDirection == SOUTH){
					x_increment = 0;
					y_increment = -1;
				}
			}

			else{
				if(the_goti.get_curr_direction() == NORTH){
					x_increment = 0;
					y_increment = 1;
				}
				else if(the_goti.get_curr_direction() == EAST){
					x_increment = 1;
					y_increment = 0;
				}
				else if(the_goti.get_curr_direction() == WEST){
					x_increment = -1;
					y_increment = 0;
				}
				else if(the_goti.get_curr_direction() == SOUTH){
					x_increment = 0;
					y_increment = -1;
				}
			}
		}
	}

	board[the_goti.curr_coords[0]][the_goti.curr_coords[1]].appendGoti(the_goti);
	updateDisplay();

}

void game::startGoti(colours gotiColour){
	if(num_laalGoti >= goti_per_user || num_hariGoti >= goti_per_user || num_peeliGoti >= goti_per_user || num_neeliGoti >= goti_per_user){
		cerr<<"Goti request makes the number of ludo_goti of RedColour more than "<<goti_per_user<<endl;
		return;
	}
	else if (gotiColour == UnknownColour)
	{
		cerr<<"startGoti() request made for Unknown Colour"<<endl;
		return;
	}	
	else{
		board[ludo_coords::start_coords[gotiColour][0]][ludo_coords::start_coords[gotiColour][1]];
	}
}

ludo_box& game::getBox(const ludo_goti& inGoti){
	if(inGoti.getCoords().getKey() < 15 || inGoti.getCoords().getVal() < 15 || inGoti.getCoords().getKey() >= 0 || inGoti.getCoords().getVal() >= 0){
		throw OutOfBoundException("Board");
	}
	return board[inGoti.getCoords().getKey()][inGoti.getCoords().getVal()];
}

void game::takeIntro(){
	intTuple tmpDimen(0,0);

	do{	
		tmpDimen = util_func::getTerminalDimen();

	}while( min(tmpDimen[0],tmpDimen[1]) < 16 || max(tmpDimen[0],tmpDimen[1]) < 31 );

	util_func::align_text_center(tmpDimen[1], string("Welcome to \"Ludo-The Game\""));
	cout<<endl;
	for (size_t i = 0; i < tmpDimen[1]; i++)
	{
		cout<<'=';
	}
	
	string playerName;
	player i=Player1;
	cout<<"\n\nEnter names of the Players (0 if not playing) : \n";
	
	while(i<=Player4){
		cout<<"Player"<<i<<" - ";
		
		getline(cin, playerName);		
		if(util_func::trimString(playerName) != "0"){
			playerMap.insert(make_pair(i,make_pair(playerName,make_pair((colours)i,vector<reference_wrapper<ludo_goti>>()))));
			activePlayers.insert(i);
		}
	}

	cout<<endl<<"\nPress Enter to go to the board...";
	cin.get();
}

bool game::isPlayerPlaying(player p){
	return playerMap.find(p) != playerMap.end();
}

int game::rolldie(){
	bool *b= new bool;
	uintptr_t retval = reinterpret_cast<uintptr_t>(b);
	delete b;

	return (retval%6)+1;
}


void game::updateDisplay(){
	int boxlen = 0;
	intTuple tmpDimen(0,0);

	do{	
		tmpDimen = util_func::getTerminalDimen();
		boxlen = (min(tmpDimen[0],tmpDimen[1]) - 16)/15;

	}while( min(tmpDimen[0],tmpDimen[1]) < 16 || max(tmpDimen[0],tmpDimen[1]) < 31 );

	for (size_t i = 0; i <(boxlen+1)*15 + 1; i++)
	{
		cout<<'-';
	}
	
	_BoardPrinter::type1(boxlen,0,board);
	_BoardPrinter::type2(boxlen,1,board);
	_BoardPrinter::type3(boxlen,2,board);
	_BoardPrinter::type1(boxlen,3,board);
	_BoardPrinter::type2(boxlen,4,board);
	_BoardPrinter::type4(boxlen,5,board);

	_BoardPrinter::type5(boxlen,6,board);
	_BoardPrinter::type6(boxlen,7,board);
	_BoardPrinter::type5(boxlen,8,board);

	_BoardPrinter::type4(boxlen,9,board);
	_BoardPrinter::type2(boxlen,10,board);
	_BoardPrinter::type1(boxlen,11,board);
	_BoardPrinter::type3(boxlen,12,board);
	_BoardPrinter::type2(boxlen,13,board);
	_BoardPrinter::type1(boxlen,14,board);

	cout<<"\n\nCONSOLE\n";
	for (size_t i = 0; i < tmpDimen[1]; i++)
	{
		cout<<'-';
	}
	cout<<"\nPress Enter to roll the die...";

}

bool game::InitGame(short playerConsent){	//1 for reset, 2 is with previous playerMap

	if(playerConsent !=1 && playerConsent !=2){
		return false;
	}

	if( !firstRun ){
		goti_per_user = 4;
		num_laalGoti = 0;
		num_hariGoti = 0; 
		num_peeliGoti = 0; 
		num_neeliGoti = 0;

		for (auto &&row : board)
		{
			for (auto &&box : row)
			{
				box.content.clear();
				box.inBoxGotis.clear();
			}
		}
		
		if( playerConsent == 1 ){
			activePlayers.clear();
			Coloursmap.clear();
			playerMap.clear();

			takeIntro();
		}

		player currentPlayer = *activePlayers.begin();
		colours currentGotiColour = playerMap[currentPlayer].second.first;
	}

	return true;
}

void game::play(bool boolVal){
	if( !boolVal ){
		return;
	}
	else{
		std::vector<int> dieNumbers;
		while (true){
			currentGotiColour = playerMap[currentPlayer].second.first;
			
			updateDisplay();
			cin.get();
			dieNumbers.push_back(rolldie());
			cout<<"\nRoll Output - ";
			for (auto &&i : dieNumbers)
			{
				cout<<i<<' ';
			}
			
			if(dieNumbers.back() == 6){
				continue;
			}
			startGoti(currentGotiColour);
			moveGoti(board[6][1].getGoti(ColourLAAL), 5);

			// player_move(dieNumber);	//then calls moveGoti()

			
			///Update current Player here
			
		}

	}
}

game::game(){
	firstRun = true;
	goti_per_user = 0;
	num_laalGoti = 0;
	num_hariGoti = 0; 
	num_peeliGoti = 0; 
	num_neeliGoti = 0;

	board.reserve(15);	//Initialising board
	for (size_t i = 0; i < 15; i++) {
		board.emplace_back(vector<ludo_box>());
		for (size_t j = 0; j < 15; j++) {
			board[i].emplace_back(ludo_box());
		}
	}
}
//GAME_CLASS_DEFINTIONS END

//COORD_CLASS_DEFINTIONS START
void ludo_coords::InitCoords(){

	ludo_coords::stops = std::vector<intTuple>({

	});

	ludo_coords::outer_corners = std::map<intTuple,direction>({
		std::make_pair(intTuple(0,6), NORTH),
		std::make_pair(intTuple(0,8), EAST),
		std::make_pair(intTuple(14,6), WEST),
		std::make_pair(intTuple(14,8), SOUTH),
		std::make_pair(intTuple(6,0), NORTH),
		std::make_pair(intTuple(8,0), WEST),
		std::make_pair(intTuple(6,14), EAST),
		std::make_pair(intTuple(8,14), SOUTH)
	});
		
	ludo_coords::inner_turns = std::map<intTuple,direction>({
		std::make_pair(intTuple(6,6), WEST),
		std::make_pair(intTuple(6,8), NORTH),
		std::make_pair(intTuple(8,6), SOUTH),
		std::make_pair(intTuple(8,8), EAST)
	});

	ludo_coords::start_coords = std::map<colours,intTuple>({
		std::make_pair(ColourLAAL, intTuple(6,1)),
		std::make_pair(ColourHARA, intTuple(1,8)),
		std::make_pair(ColourNEELA, intTuple(8,13)),
		std::make_pair(ColourPEELA, intTuple(13,6)),
	});
}

inline intTuple get_initCoords(colours gotiColour){
	for(auto &&i : ludo_coords::start_coords){
		if( i.first == gotiColour )
			return i.second;
	}
	
	return intTuple(0,0);
}

direction dir_to_turn_ifCoord_in_CornerCoordsVec(const intTuple& curr_coords, const std::map<intTuple, direction> &corner_vec){
	for ( auto corner : corner_vec ){
		if(curr_coords == corner.first){
			return corner.second;
		}
	}
	return NO_TURN;
}
//COORD_CLASS_DEFINTIONS START

//  LEARNT|+QUESTIONS  //
/*[LEARNT] - Nesting functions (ie. function declaration inside function) is not supported by standards in C/C++
				 But, gcc supports it as a 'non-standard' extension
				 BUT, in C++ mode, it's not allowed, 'Local Functions' aren't supported
				 BUT, FROM C++11, IT IS SUPPORTED, using LAMDAs {Imp. - Lambdas have a semicolon at end}*/
/*LAMBDAs - 1. Have a ';' at end
			2. '[]' is the "capture clause", also called 'lambda-introducer'
			3. parameter list '()' is optional
			4. These are the parts:
					[] () mutable throw() -> int {//body//}
					 |  |   |        |       |    
		capture clause  |  optional  |  trailing-return-type(optional)
					parameters   exception specification(optional)
*/
		//QUestion - Why didnt this lambda work?
	// }while ( (tmpDimen.getKey() < 31 || tmpDimen.getVal() < 31) ? true : []{	//Lamda Function (used to declare this 'local' function)
	// 	cerr<<"INSUFFICIENT HEIGHT/WIDTH FOR DISPLAY!"<<endl;
	// 	return false;
	// } );