#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main(void){
	Character* zaz = new Character("zaz");
	
	std::cout << *zaz;

	
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	Character* bob = new Character("bob");
	Enemy* c = new SuperMutant();
	
	bob->equip(pf);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->recoverAP();
	bob->recoverAP();
	bob->recoverAP();
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;
	bob->attack(c);
	std::cout << *bob;

	delete pr;
	delete pf;
	return 0;
}