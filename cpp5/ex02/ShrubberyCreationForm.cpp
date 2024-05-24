#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm::AForm("shrubbery creation", 145, 137), target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("shrubbery creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) :  AForm::AForm("shrubbery creation", 145, 137) {
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    if (this != &copy)
        target = copy.target;
    return *this; 
}

void ShrubberyCreationForm::specificExecute(void) const {
    std::ofstream o((target + ".shrubbery"));

    o << "                                                         .\n";
    o << "                                              .         ;  \n";
    o << "                 .              .              ;%     ;;   \n";
    o << "                   ,           ,                :;%  %;   \n";
    o << "                    :         ;                   :;%;'     .,   \n";
    o << "           ,.        %;     %;            ;        %;'    ,;\n";
    o << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    o << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    o << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    o << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    o << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    o << "                    `:%;.  :;bd%;          %;@%;'\n";
    o << "                      `@%:.  :;%.         ;@@%;'   \n";
    o << "                        `@%.  `;@%.      ;@@%;         \n";
    o << "                          `@%%. `@%%    ;@@%;        \n";
    o << "                            ;@%. :@%%  %@@%;       \n";
    o << "                              %@bd%%%bd%%:;     \n";
    o << "                                #@%%%%%:;;\n";
    o << "                                %@@%%%::;\n";
    o << "                                %@@@%(o);  . '         \n";
    o << "                                %@@@o%;:(.,'         \n";
    o << "                            `.. %@@@o%::;         \n";
    o << "                               `)@@@o%::;         \n";
    o << "                                %@@(o)::;        \n";
    o << "                               .%@@@@%::;         \n";
    o << "                               ;%@@@@%::;.          \n";
    o << "                              ;%@@@@%%:;;;. \n";
    o << "                          ...;%@@@@@%%:;;;;,..  \n";
    o.close();
}
