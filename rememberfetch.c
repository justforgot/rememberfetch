#include<stdio.h>
#include<stdlib.h>

/*
A fetch tool written in C called rememberfetch.

AUTHOR=justforgot
*/

int main(){

  //first prints a questionmark ASCII
  printf("                            @@@@@@@@@@@@@@                           \n                        @@@@@@@@@@@@@@@@@@@@@                        \n                      @@@@@@@@@@@@@@@@@@@@@@@@@                      \n                     @@@@@@@@@@@@@ @@@@@@@@@@@@@                     \n                    @@@@@@@@@           @@@@@@@@@                    \n                   @@@@@@@@@             @@@@@@@@@                   \n                   @@@@@@@@               @@@@@@@@                   \n                                          @@@@@@@@                   \n                                          @@@@@@@@                   \n                                         @@@@@@@@@                   \n                                        @@@@@@@@@                    \n                                      @@@@@@@@@@                     \n                                    @@@@@@@@@@                       \n                                  @@@@@@@@@@                         \n                                 @@@@@@@@@                           \n                               @@@@@@@@@                             \n                               @@@@@@@@                              \n                              @@@@@@@@                               \n                              @@@@@@@@                               \n                              @@@@@@@                                \n                                                                     \n                                                                     \n                                                                     \n                              @@@@@@@@                               \n                            @@@@@@@@@@@                              \n                            @@@@@@@@@@@@                             \n                            @@@@@@@@@@@@                             \n                            @@@@@@@@@@@                              \n                              @@@@@@@@                               \n");

  
  //opens and reads the first line of /etc/os-release
  FILE *file = fopen("/etc/os-release", "r");

  //buffer aray to store the characters on the first line of /etc/os-release
  char buffer[32];

  if (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("OS %s", buffer);
  }

  fclose(file);

  return 0;
  
}
