#ifndef SHRUBBERYCREATIONForm_HPP
#define SHRUBBERYCREATIONForm_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm {
private:
	const std::string	_target;

public:
	ShrubberyCreationForm(const std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

	void	execution() const;
};


#endif