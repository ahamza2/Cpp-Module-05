#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("default")
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm : copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	// std::cout <<  executor.getGrade() << " ----- " << getExecGrade() << std::endl;
	if (!getSign() || executor.getGrade() > getExecGrade())
	{
        throw AForm::GradeTooLowException();
    }
	// // std::cout << executor.getGrade() << std::endl;
	// std::cout << this->target << std::endl;
    // std::ofstream file(target + "_shrubbery");
    // if (file.is_open()) {
    //     file << "ASCII trees" << std::endl;
    //     file.close();
    // } else {
    //     throw std::runtime_error("Unable to open file");
    // }


    std::ofstream file(this->target.c_str());
    file << "                                                     . " << std::endl;
    file << "                                          .         ;   " << std::endl;
    file << "             .              .              ;%     ;;    " << std::endl;
    file << "               ,           ,                :;%  %;    " << std::endl;
    file << "                :         ;                   :;%;'     .,    " << std::endl;
    file << "       ,.        %;     %;            ;        %;'    ,; " << std::endl;
    file << "         ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
    file << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'  " << std::endl;
    file << "           ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
    file << "            `%;.     ;%;     %;'         `;%%;.%;' " << std::endl;
    file << "             `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
    file << "                `:%;.  :;bd%;          %;@%;' " << std::endl;
    file << "                  `@%:.  :;%.         ;@@%;'    " << std::endl;
    file << "                    `@%.  `;@%.      ;@@%;          " << std::endl;
    file << "                      `@%%. `@%%    ;@@%;         " << std::endl;
    file << "                        ;@%. :@%%  %@@%;        " << std::endl;
    file << "                          %@bd%%%bd%%:;      " << std::endl;
    file << "                            #@%%%%%:;; " << std::endl;
    file << "                            %@@%%%::; " << std::endl;
    file << "                            %@@@%(o);  . '          " << std::endl;
    file << "                            %@@@o%;:(.,'          " << std::endl;
    file << "                        `.. %@@@o%::;          " << std::endl;
    file << "                           `)@@@o%::;          " << std::endl;
    file << "                            %@@(o)::;         " << std::endl;
    file << "                           .%@@@@%::;          " << std::endl;
    file << "                           ;%@@@@%::;.           " << std::endl;
    file << "                          ;%@@@@%%:;;;.  " << std::endl;
    file << "                      ...;%@@@@@%%:;;;;,.. " << std::endl;
    file << "haarab                                         " << std::endl;
  
    file.close();
}
