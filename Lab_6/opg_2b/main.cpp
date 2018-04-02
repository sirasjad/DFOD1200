#include "main.h"

int main(){
  try{
    Contact c;
    c.load_contacts();
    c.show_menu();
  }
  catch(invalid_option){
    cerr << "Error: Invalid option. Please try again!" << endl;
  }
  catch(invalid_file){
    cerr << "Error: Could not open file!" << endl;
  }
  return 0;
}
