#include <iostream>
#include <vector>
#include <string>

int main()
{
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::string sentence;
  std::vector<char> translation;

  std::cout << "What sentence do want to translate to whale talk\n";
  std::cout << "Enter the sentence below:\n";
  std::getline(std::cin, sentence);

  for(int i = 0; i < sentence.size(); i++)
    {
      for(int j = 0; j < vowels.size(); j++)
        {
          if (sentence[i] == vowels[j]) 
          {
            //if any index is equal it is replaced with the corresponding value
            translation.push_back(sentence[i]);
            //if e or u it is added to the translation
            if (sentence[i] == 'e' || sentence[i] == 'u') 
            {
              translation.push_back(sentence[i]);
            }
          }
          
          //Prints the results of the translation to the consel
          for (int k = 0; k < translation.size(); k++) 
          {
            std::cout << translation[k];
          }
        }
    }
  std::cout << "\n";
  
}