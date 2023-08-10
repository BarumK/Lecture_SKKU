#include <stdio.h>

void helloMsg(void){
  printf("Hello, This is the StarBugs :)\n");
  printf("*************************\n");
  printf("*        M E N U        *\n");
  printf("*                       *\n");
  printf("* 1. Americano          *\n");
  printf("* 2. Latte              *\n");
  printf("* 3. Caffe Mocha        *\n");
  printf("* 4. Tea                *\n");
  printf("*                       *\n");
  printf("*************************\n\n");
  printf("Type your order as a number sequence on the menu.\nEx) 1132 : means Two-Americano, One-Caffe Mocha, and One-Latte.\n");
  printf("\n\n");
  printf("0(zero) can only be used for separating customers.\nEx) 442012 : means Two-Tea, One-Latte for customer1 and\nOne-Americano and One-Latte for customer2.\n");
  printf("\n\n");
}

int checkOrder(int queue){
	int counter = 0;
	for (;;) {
		if (queue >= 10) {
			if (queue % 10 > 4){
				return 0;
			}
			counter++;
			queue = queue / 10;
		}
		else{
			if (queue % 10 > 4){
				return 0;
			}
			counter ++;
			break;
		}
	}
	return counter;
}

int power(int a, int b){
  int rst = 1;
  while(b){
    rst *=a;
    b--;
  }
  return rst;
}

void processQ(int queue, int order_len) {
	long long int reverseQueue = 0;
	int temp1;

	for(;;) {
		if (queue >= 10) {
			reverseQueue *= 10;
			temp1 = queue % 10;
			reverseQueue += temp1;
			queue = (queue - temp1) / 10;
		}
		else{
			reverseQueue *= 10;
			reverseQueue += queue;
			break;
		}
	}

	int customerNum = 1;
	int ame = 0, lat = 0, cm = 0, tea = 0;
	for (;;) {
		if (reverseQueue >= 10) {
			if (reverseQueue % 10 == 0) {
				printf("Thank you, Customer (%d). Here is your Americano(%d), Latte(%d), Caffe Mocha(%d), Tea(%d).\n", customerNum, ame, lat, cm, tea);
				customerNum++;
				ame = 0;
				lat = 0;
				cm = 0;
				tea = 0;
			}
			else{
				switch (reverseQueue % 10) {
					case 1:
						ame++;
						break;
					case 2:
						lat++;
						break;
					case 3:
						cm++;
						break;
					case 4:
						tea++;
						break;
				}
			}
			reverseQueue = reverseQueue / 10;
		}
		else {
			switch (reverseQueue % 10) {
				case 1:
					ame++;
					break;
				case 2:
					lat++;
					break;
				case 3:
					cm++;
					break;
				case 4:
					tea++;
					break;
			}
			printf("Thank you, Customer (%d). Here is your Americano(%d), Latte(%d), Caffe Mocha(%d), Tea(%d).\n", customerNum, ame, lat, cm, tea);
			break;
		}
	}
}
int main(void) {
  int serv_queue;
  int ret;

  helloMsg();

  while(1){
    printf("Your order? : ");
    scanf("%d", &serv_queue);

    ret = checkOrder(serv_queue);

    if(ret > 0){
      printf("Okay. please wait.(ret=%d)\n", ret);
      break;
    }else{
      printf("You can only order what is on the menu.(ret=%d)\n", ret);
    }
  }

  printf("serv_queue: %d\n", serv_queue);
  processQ(serv_queue, ret);

  return 0;
}
