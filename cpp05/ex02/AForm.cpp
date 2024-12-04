/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:28:23 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/04 18:06:41 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( std::string name, int sign, int exec) : name(name), sign(false), gradeToSign(sign), gradeToExec(exec)
{
}

AForm::AForm( ) : name("omar"), sign(false), gradeToSign(50), gradeToExec(50)
{
}

AForm::AForm(AForm &obj) : name(obj.name), sign(obj.sign), gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec)
{
}

AForm & AForm::operator=(const AForm &obj)
{
        if (this != &obj)
                this->sign = obj.sign;
        return (*this);
}

std::string     AForm::getName() const
{
        return (name);
}

bool    AForm::getSign() const
{
        return (sign);
}

int     AForm::getGradeToSign() const
{
        return (gradeToSign);
}

int     AForm::getGradeToExec() const
{
        return (gradeToExec);
}

void    AForm::beSigned(Bureaucrat &b)
{
        try
        {
                if (b.getGrade() > this->gradeToSign || b.getGrade() > this->getGradeToExec())
                        throw GradeTooLowException();
                this->sign = true;
        } catch (const std::exception &e)
        {
                std::cout << e.what() << std::endl;
                std::cout << "can't sign" << std::endl;
                this->sign = false;
        }
}

const char *AForm::GradeTooHighException::what() const throw()
{
        return ("Grade is to height");
}

const char *AForm::GradeTooLowException::what() const throw()
{
        return ("Grade is to low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
        return ("Form is not signed");
}

AForm::GradeTooHighException::GradeTooHighException()
{}

AForm::GradeTooLowException::GradeTooLowException()
{}

AForm::FormNotSignedException::FormNotSignedException()
{}

std::ostream&    operator << (std::ostream &os, const AForm &obj)
{
        os << "Form: " << obj.getName()
        << ", Signed: " << (obj.getSign() ? "Yes" : "No")
        << ", Grade to Sign: " << obj.getGradeToSign()
        << ", Grade to Execute: " << obj.getGradeToExec();
        return (os);
}
