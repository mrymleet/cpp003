/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:33 by mel-moun          #+#    #+#             */
/*   Updated: 2023/10/18 12:03:25 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("mel-moun");
    // DiamondTrap test(diamond);
    diamond.whoAmI();
    
    diamond.ClapTrap::attack("YOU");
    diamond.attack("HIM");
}
