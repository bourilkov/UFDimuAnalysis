#include "Sample.h"
#include "DiMuPlottingSystem.h"
#include "CutSet.h"
#include "Cut.h"
#include <sstream>

int main(int argc, char* argv[])
{
    for(int i=1; i<argc; i++)
    {   
        std::stringstream ss; 
        ss << argv[i];
    }   

   CutSet cuts();
   //Cut cut();  // Abstract class, can't initialize
   Sample* sample = new Sample();
   DiMuPlottingSystem* dps = new DiMuPlottingSystem();

   return 0;
}
