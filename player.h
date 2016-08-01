// holds player values such as attributes, movement speed, class
#ifndef PLAYER_H
#define PLAYER_H

class player {
	public:
		// movement speed
		float x, y;
		// strength, mind, hp, mp, imn(intelligence), charism, vitality, dexterity, agility, evasion, defense
		int att, str, mnd, hp, mp, imn, chr, vit, dex, agi, eva, def;
		// holds class choice
		char job;
		// determine initial attribute values
		int instantiate();
};
#endif
