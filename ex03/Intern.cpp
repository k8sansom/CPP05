#include "Intern.hpp"

Intern::Intern() {
	_forms[0] = new ShrubberyCreationForm();
    _forms[1] = new RobotomyRequestForm();
    _forms[2] = new PresidentialPardonForm();
}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern& Intern::operator=(const Intern& src) {
	if (this != &src) {}
	return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string &formName, const std::string &target) {
    struct FormPair {
        std::string name;
        AForm* (*createForm)(const std::string &target);
    };

	FormPair formPairs[3] = {
        {"shrubbery creation", [](const std::string &target) { return new ShrubberyCreationForm(target); }},
        {"robotomy request", [](const std::string &target) { return new RobotomyRequestForm(target); }},
        {"presidential pardon", [](const std::string &target) { return new PresidentialPardonForm(target); }},
    };
	for (int i = 0; i < 3; i++) {

	}
}