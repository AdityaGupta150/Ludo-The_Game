#pragma once

#include "die.hpp"
#include "exceptions.hpp"
#include "ludo_box.hpp"
#include "ludo_state.hpp"

#include <string_view>
#include <map>
#include <set>
#include <functional>
#include <optional>

	// only to be used by move & thinker functions
struct _smartMoveData
{
	coord finalCoord;
	Direction finalDir;

	int moveProfit; //only to be utilised by thinkers
	_smartMoveData() : _smartMoveData({}, Direction::NO_TURN){}
	_smartMoveData(const coord& c, Direction dir, int profit = 0) : finalCoord(c), finalDir(dir), moveProfit(profit){}
};

class ludo_state;

class game
{
	using goti_pointer = std::shared_ptr<ludo_goti>;
	using ludo_box_reference = std::reference_wrapper<ludo_box>;
	private:
	// typedef void (game::* functionPointer)();	// both are same ways, `using` declarations is more clear i believe
	using functionPointer = void(game::*)();

	std::vector<std::vector<ludo_box>> board;
	std::map<Colour, std::vector<ludo_box_reference>> lockedPositions;
	std::map<Colour, std::vector<std::shared_ptr<ludo_goti>>> movingGotis;
	std::map<Colour, unsigned> numfinished;

	std::vector<Colour> colourOrder;

	Player curr_player;
	Colour curr_colour;
	unsigned int number_of_GameRuns;
	unsigned int goti_per_user;

	ludo_coords _ludo_coords; //! An object to make the ludo_coords available to us

	bool gameisFinished();
	bool isPlayerPlaying(Player);
	unsigned getNumLockedGotis(Colour);
	bool unlockGoti();
	bool lockGoti(std::shared_ptr<ludo_goti>);
	void takeIntro(); //! Initializes the PlayerMap

	void endGame() const; //Only for use by shortcutsMap
	void endGame(std::string_view cause) const;
	void endGame(int n, ...) const;

	public:
	const std::map<std::string_view, functionPointer> shortcutsMap;
	// functionPointer arr[10]; //Learnt - Array of 10 function pointers to functions taking nothing, and returning void

	std::map<Colour, Player> coloursMap;

	std::map<Player, std::pair<std::string, Colour>> activePlayerMap;
	std::map<Player, RobotKind> robotPlayers;

	short moveGoti(std::shared_ptr<ludo_goti>, unsigned int dist);
	short moveGoti(std::shared_ptr<ludo_goti>, _smartMoveData moveData);			  //Moves goti to ENDPOINT 'DIRECTLY' (basic checks only)
	bool handleMoveVal(short, std::vector<_dieVal>& dieNumbers, bool isRobot = true); //Handles value returned by moveGoti() calls

	const std::optional<_smartMoveData> isMovePossible(std::shared_ptr<ludo_goti>&, int dist) const;
	bool autoMove();

	void attack(std::vector<Colour> coloursToRemove, std::shared_ptr<ludo_goti> attacker);

	void updateDisplay();
	/*NOTE - getEmptyLock(...) == {0,0} is a good test for 'ZERO LOCKED POSITIONS'*/
	coord getEmptyLock(Colour) const;

	bool InitGame(short = 1); //! Starts/Resets the game
	void play(bool = true);
	void settingsMenu();
	void notYetImplementedScr() const;
	ludo_box& getBoardBox(const coord& coords);
	const ludo_box& getBoardBox(const coord& coords) const;

	//Current State Validation Methods
	bool isValid(const coord& coords) const;
	bool isValid(const std::shared_ptr<ludo_goti>&) const;

	game();
	~game();

	friend class BoardPrinter;
	friend class ludo_state;
	friend class ludo_state;
	friend class thinker;
};
