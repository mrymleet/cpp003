/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:33 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/17 17:27:35 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("mel-moun");
    ClapTrap claptrap1;
    
    claptrap.attack("D-ClapTrap");
    claptrap1.takeDamage(5);
    claptrap1.attack("Meriem");
    claptrap.beRepaired(3);
    claptrap.takeDamage(5);
    claptrap.takeDamage(10);
}
