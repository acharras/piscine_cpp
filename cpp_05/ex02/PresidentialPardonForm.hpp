/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:20:16 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 16:55:25 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		std::string const Target;
        PresidentialPardonForm();


	public:
        PresidentialPardonForm(std::string const& target);
        PresidentialPardonForm(const PresidentialPardonForm & cpy);
		virtual ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm & cpy);
		
        void    execute(Bureaucrat const& executor) const;
};

#endif