#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): _target(target), AForm("Shrubbery Creation Form", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): _target(copy._target), AForm(copy) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) = delete;

void	ShrubberyCreationForm::execution() const {
	 std::ofstream file((this->_target + "_shrubbery").c_str());
        if (!file) {
			std::cerr << "Cannot open/create " << this->_target + "_shrubbery" << std::endl;
			return;
		}

        file << "       ,.," << std::endl;
      	file << "      MMMM_    ,..," << std::endl;
        file << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
 		file << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
		file << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" <<std::endl;
 		file << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
        file << "        ,., _\"__ \\__./ .\"" << std::endl;
    	file << "       MMMMM_\"  \"_    ./" << std::endl;
		file << "        ''''      (    )" << std::endl;
		file << " ._______________.-'____\"---._." << std::endl;
		file << "  \\                          /" << std::endl;
		file << "   \\________________________/" << std::endl;
		file << "   (_)                    (_)" << std::endl;
        file.close();
}