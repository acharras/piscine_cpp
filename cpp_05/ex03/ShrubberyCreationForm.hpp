/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:21:59 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 17:04:40 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
		std::string const Target;
        ShrubberyCreationForm();

	public:
        ShrubberyCreationForm(std::string const& target);
        ShrubberyCreationForm(const ShrubberyCreationForm & cpy);
		virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm & cpy);
		
        void    execute(Bureaucrat const& executor) const;
};

#endif