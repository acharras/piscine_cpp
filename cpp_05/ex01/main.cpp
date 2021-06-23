/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:17:17 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 15:13:35 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    try
    {
        Bureaucrat test1("test1", 2);
        Bureaucrat test2("test2", 149);
        Form    form1("form1", 50);
        Form    form2("form2", 15);
        
        test1.incrementGrade();
        std::cout << "new grade test1 : " << test1.getGrade() << std::endl;
        test2.decrementGrade();
        std::cout << "new grade test2 : " << test2.getGrade() << std::endl;
        test1.signForm(form1);
        test1.signForm(form1);
        test2.signForm(form2);
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
}