/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Orthodox.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:55:27 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/17 18:52:49 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("D-ClapTrap"), _hit_points(10), _energy(10),_damage(0)
{
    std::cout << "Default ClapTrap: " << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    :_name(name), _hit_points(10), _energy(10),_damage(0)
{
    std::cout << "ClapTrap: " << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy):ClapTrap(copy)
{
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy = copy._energy;
    this->_damage = copy._damage;
    std::cout << "Copy ClapTrap: " << _name << " has been created" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hit_points = copy._hit_points;
        this->_energy = copy._energy;
        this->_damage = copy._damage;
    }
    std::cout << "Assignment ClapTrap: " << _name << " has been created" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: " << _name << " has been destroyed" << std::endl;
}
