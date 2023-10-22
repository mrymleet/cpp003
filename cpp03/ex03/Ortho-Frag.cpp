/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ortho-Frag.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:13:30 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/18 11:56:39 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    // _name = "D-FragTrap";
    _hit_points = 100;
    _damage = 30;
    std::cout << "\033[36m Default FragTrap: " << _name << " has been created" << std::endl;
}

FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
    // _name = name;
    _hit_points = 100;
    _damage = 30;
    std::cout << "\033[36m FragTrap: " << _name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy = copy._energy;
    _damage =  copy._damage;
    std::cout << "\033[36m Copy FragTrap: " << _name << " has been created" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        _name = copy._name;
        _hit_points = copy._hit_points;
        _energy = copy._energy;
        _damage =  copy._damage;
    }
    std::cout << "\033[36m Assignment FragTrap: " << _name << " has been created" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "\033[36m FragTrap: " << _name << " has been destroyed" << std::endl;
}