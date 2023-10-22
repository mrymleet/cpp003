/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ortho-Scav.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:01:38 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/17 18:29:43 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "D-ScavTrap";
    _hit_points = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "\033[34m Default ScavTrap: " << _name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name):ClapTrap(name)
{
    _name = name;
    _hit_points = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "\033[34m ScavTrap: " << _name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy = copy._energy;
    _damage = copy._damage;
    std::cout << "\033[34m Copy ScavTrap: " << _name << " has been created" << std::endl; 
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
    {
        _name = copy._name;
        _hit_points = copy._hit_points;
        _energy = copy._energy;
        _damage = copy._damage;
    }
    std::cout << "\033[37m Assignment ScavTrap: " << _name << " has been created" << std::endl; 
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[34m ScavTrap: " << _name << " has been destroyed" << std::endl;
}

