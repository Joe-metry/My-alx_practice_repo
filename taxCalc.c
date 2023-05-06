#include <stdio.h>
#include <ctype.h>
#define TAX_RATE 0.10

int main(void) {
  char yOn;
  float price, TaxOnItem, costPostTax;
  do
    {
      printf("Enter the price in this format $AMOUNT:\n");
      scanf(" $%f", &price);

      TaxOnItem = price * TAX_RATE;
      costPostTax = TaxOnItem + price;
      printf("\n10%% tax on item is %.1f.\n", TaxOnItem);
      printf("Price after tax is %.2f\n", costPostTax);

      printf("\nDo you want to perform another operation?\n Y for Yes and N for No.\n\n");
      scanf(" %c", &yOn);
      yOn = tolower(yOn);

      if(yOn == 'n')
      {
        printf("\nThanks for using app!\n");
      }

      puts("\n");
    }
  while(yOn != 'n');
  
  return 0;
}
