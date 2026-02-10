// Assignment 1 - skeleton code

// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  // Declare variables here
  const double rydberg_energy = 13.6; // The rydberg energy in eV.
  int Z; // Atomic number
  int n_i; // Initial quantum number
  int n_f; // Final quantum number
  string repeat; // Answer to question to repeat

  do{
    while (true){
      // Ask user to enter atomic number
      cout << "Please enter an atomic number:";
      cin >> Z;
    
      // Ask user to enter initial and final quantum numbers
      cout << "Please enter the initial quantum number:";
      cin >> n_i;
    
      cout << "Please enter the final quantum number:";
      cin >> n_f;
    
      // Check that final quantum number < initial qunatum number
      if (n_f <= n_i) {
          cout << "Inputs accepted." << endl;
          break; // exit the loop if inputs are valid
        }
    
      else{
          cout << "Error: final quantum number must be less than initial quantum number." << endl;
          cout << "Please try again." << endl;
  
      }
  
    }
  
    // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_f^2-1/n_i^2) eV
    double E = rydberg_energy * (1.0/(Z*Z)) * (1.0/(n_f*n_f) - 1.0/(n_i*n_i));
    
    // Output answer
    cout << "Here is my answer:" << E << "eV" << endl;
  
    // Ask if user would like to repeat
    cout << "Would you like to repeat this calculation? (Y/N):";
    cin >> repeat;
    } while (repeat == "Y" || repeat == "y"); // repeat if user enters Y or y
  
  return 0;
}
