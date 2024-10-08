#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern& Intern::operator=(const Intern& src) {
	if (this != &src) {}
	return *this;
}

Intern::~Intern() {}

const char * Intern::FormNotFound::what() const throw() 
{
    return ("Form Not Found");
}

AForm*   Intern::makeForm( std::string name, std::string target ) {

    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm*    forms[] = {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    
    for ( int i(0); i < 3; i++ ) {
        if ( name == formNames[i] ) {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return nullptr;
}