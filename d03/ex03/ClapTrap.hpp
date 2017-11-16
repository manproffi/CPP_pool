/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:42:26 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/02 21:42:28 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

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
	std::string		get_name() const;
};

#endif