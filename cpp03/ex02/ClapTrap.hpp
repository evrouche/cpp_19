
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap const& copy);

		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		meleeAttack(std::string const &target);
		void		rangeAttack(std::string const &target);

	protected:
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		int			_meleeDamage;
		int			_rangedDamage;
		int			_armorReduction;
		std::string	_name;
	
	private:
};

#endif
