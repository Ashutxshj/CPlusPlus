#include <iostream>
int main()
{
   double x =(int)3.14;
   std::cout<<(char) 100 <<'\n';
   std::cout <<x<<'\n';

   int correct =8;
   int questions =10;
   double score =correct/(double)questions*100; //type conversion
   std::cout<<score<<"%";
   return 0;
}