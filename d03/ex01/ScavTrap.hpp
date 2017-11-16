/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:27:48 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/02 19:27:50 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap
{
private:
	unsigned int		hit_point;
	unsigned int		max_hit_point;
	unsigned int		energy_point;
	unsigned int		max_energy_point;
	unsigned int		level;
	std::string 		name;
	unsigned int		melee_attack_damage;
	unsigned int		ranged_attack_damage;
	unsigned int		armor_damage_reduction;
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();

/******************** SET ***************************/
	void 	set_hit_point(unsigned int value);
	void 	set_max_hit_point(unsigned int value);
	void 	set_energy_point(unsigned int value);
	void 	set_max_energy_point(unsigned int value);
	void 	set_level(unsigned int value);
	void 	set_melee_attack_damage(unsigned int value);
	void 	set_ranged_attack_damage(unsigned int value);
	void 	set_armor_damage_reduction(unsigned int value);
/******************** GET ***************************/
	unsigned int	get_hit_point() const;
	unsigned int	get_max_hit_point() const;
	unsigned int	get_energy_point() const;
	unsigned int	get_max_energy_point() const;
	unsigned int	get_level() const;
	unsigned int	get_melee_attack_damage() const;
	unsigned int	get_ranged_attack_damage() const;
	unsigned int	get_armor_damage_reduction() const;
};

#endif
