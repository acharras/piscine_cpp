/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:29:35 by acharras          #+#    #+#             */
/*   Updated: 2021/06/23 15:56:06 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Intern
{
	public:
        Intern();
        Intern(const Intern & cpy);
		~Intern();
        Intern& operator=(const Intern & cpy);

        Form*   makeForm(std::string const& formName, std::string const& target);
};



#endif