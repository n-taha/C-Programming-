 #include<stdio.h>
 #include<stdbool.h>
  int main(){

  int tour = 2;    

    if (tour == 2){
        bool ship = false;
        if (ship)
        {
            printf("Lets Going To Jaflong");
        }
        else{
            printf("Lets Go On Shrimangal");
        }
    }

    else if (tour == 4)
    {
        bool ship = true;

        if (ship)
        {
            printf("Lets Go On saint Martin");
        }
        else{
            printf("Lets Go On Coxs Bazar");
        }
        
    }

    else{
        printf("Tomar kothao jawa lagbe na , tumi ghore boshe thako");
    }

    return 0;
    
  }