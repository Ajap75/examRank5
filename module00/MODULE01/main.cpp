/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:01:31 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/11 19:44:16 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Warlock.hpp"
#include "Fwoosh.hpp"


int main()
{
  Warlock richard("Richard", "the Titled");
  


  Fwoosh* fwoosh = new Fwoosh();
  ASpell *test;
  test = fwoosh->clone();
  test->getEffect();
  test->getName();
  delete(fwoosh);
}