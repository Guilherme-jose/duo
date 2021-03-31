#include "skipCard.h"

SkipCard::SkipCard(std::string color){
	_color=color;
}

void SkipCard::skip(){
	Player.skipped=1;
}
