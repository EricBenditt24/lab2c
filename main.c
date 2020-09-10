// Author: Eric Benditt erb5623@psu.edu 
// Collaborator: Joseph Phillips jmp7146@psu.edu
// Collaborator: Kaitlyn Byrnes krb5906@psu.edu
// Collaborator: Srihulas Nidamanuru sbn5256@psu.edu 
// Section: 4
// Breakout: 2
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char (number);
  double grade = atof("Enter your CMPSC 131 grade: ");

  if (number >=93.0) {
    printf("Your letter grade for CMPSC 131 is A."); 
    }
  else if (number >=90.0) {
   printf("Your letter grade for CMPSC 131 is A-.");
    }
  else if (number >=87.0) {
    printf("Your letter grade for CMPSC 131 is B+.");
    }
  else if (number >=83.0) {
  printf("Your letter grade for CMPSC 131 is B.");
    }
  else if (number >=80.0) {
    printf("Your letter grade for CMPSC is B-.");
    }
  else if (number >=77.0) {
    printf("Your letter grade for CMPSC 131 is C+.");
    }
  else if (number >=70.0) {
    printf("Your letter grade for CMPSC 131 is C.");
    }
  else if (number >=60.0) {
    printf("Your letter grade for CMPSC 131 is D.");
    }
  else {
    printf("Your letter grade for CMPSC 131 is F."); 
    }
  return 0;
}