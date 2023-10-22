/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:31 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/18 12:13:58 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _energy;
    unsigned int    _damage;

public:
    ClapTrap();
    ClapTrap(const std::string &name);//check if its by reference or not
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator=(const ClapTrap& copy);
    virtual ~ClapTrap();

    virtual void attack(const std::string& target); 
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif