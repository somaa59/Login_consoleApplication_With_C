#include <stdio.h>
#include <string.h>

// Define a function to register a new user
void register_user( char *user_name, char *email, char *password) {
}

// Define a function to log in a user
int login_user(char *user_name_or_email, char *password) {
}

int main() {

  // Register a new user
  char user_name[100];
  char email[100];
  char password[100];

  printf("Register\n Plz Enter your Data :\n");

  printf("User Name: ");
  scanf("%s", user_name);

  printf("E-mail: ");
  scanf("%s", email);

  printf("Password: ");
  scanf("%s", password);

  register_user( user_name, email, password);

  // Log in a user
  char user_name_or_email[100];
  char password_login[100];

  printf("\nLogin\n");
  printf("User Name or E-mail: ");
  scanf("%s", user_name_or_email);

  printf("Password: ");
  scanf("%s", password_login);

  int login_successful = login_user(user_name_or_email, password_login);

  if (login_successful) {
    printf("Successful login!\n");
  } else {
    printf("Invalid user name or email, or incorrect password.\n");
  }

  return 0;
}
