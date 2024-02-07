#include <iostream>
#include <vector>

//Uses this instead of that long crap common convention
typedef std::string text_t;
using number_t =int;
int main(){
    //typedef =reserved keyword used to create an additional
    //          (alias) for another data type.
    //          New identifier for an existing type
    //          Helps with readability and reduces typos
    //          Replaced with 'using keyword'
    text_t firstName="Ash";
    number_t age=21;
    std::cout<<age<<'\n';
    std::cout<<firstName<<'\n';
    return 0;      
}