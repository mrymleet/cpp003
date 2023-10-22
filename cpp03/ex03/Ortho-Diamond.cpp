/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ortho-Diamond.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:36:12 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/18 12:10:21 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("D-DiamondTrap_clap_name"), FragTrap("D-DiamondTrap"), ScavTrap("D-DiamondTrap"), _name("D-DiamondTrap")
{
    std::cout << "\e[35m Default DiamondTrap: " << _name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name):ClapTrap(name + "_clap_name"), FragTrap(name),ScavTrap(name), _name(name)
{
    std::cout << "\e[35m Diamond: " << _name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) //attack ?
{
    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy = copy._energy;
    _damage = copy._damage;
    std::cout << "\e[35m Copy Diamond: " << _name << " has been created" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy) //attack??
{
    if (this != &copy)
        *this = copy;
    std::cout << "\e[35m Assignmemt Diamond: " << _name << " has been created" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "\e[35m Diamond: " << _name << " has been destroyed" << std::endl;
}