#include "coloredCard.h"
#include "player.h"

class SkipCard : public ColoredCard {
public:
  SkipCard(std::string color);
  void skip();
}
