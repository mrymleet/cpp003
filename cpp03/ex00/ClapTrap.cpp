/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:28 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/17 17:20:08 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string& target)
{
    if (_hit_points > 0 && _energy > 0)
    {
        _energy--;
        std::cout << "ClapTrap: " << _name << " attacks: " << target << " causing: " << _damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap: " << _name << "couldn't attack ! 💀" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points >= amount && _hit_points > 0)
    {
        _hit_points -= amount;
        std::cout << "Target: " << _name << " lost this amount of hit points: " << amount << std::endl;
    }
    else
        std::cout << "Target: " << _name << " is dead! 💀" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points > 0 && _energy > 0)
    {
        _hit_points += amount;
        _energy--;
        std::cout << "ClapTrap: " << _name << " repaired this amount of hit points! " << amount << std::endl;
    }
    else
        std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
}
