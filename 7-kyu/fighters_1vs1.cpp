std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker) {
    Fighter* attacker = (firstAttacker == fighter1->getName()) ? fighter1 : fighter2;
    Fighter* defender = (attacker == fighter1) ? fighter2 : fighter1;

    while (true) {
        defender->setHealth(defender->getHealth() - attacker->getDamagePerAttack());
        if (defender->getHealth() <= 0) return attacker->getName();
        std::swap(attacker, defender);
    }
}