// My attempt to solve the puzzle of unknown tree height on my own
#include <stdio.h>

int main(void)
{
    int smallh = 0;             //small height
    int bigh = 0;               //big height
    int sbd = 0;                //small to big distance
    int btd = 0;                //big to tree distance
    int sfeet = 0;              //small feet
    int sinches = 0;            //small inches
    int bfeet = 0;              //big feet
    int binches = 0;            //big inches
    int treeh = 0;              //height of tree
    int tfeet = 0;              //tree feet
    int tinches = 0;            //tree inches
    const int inches_per_foot = 12;
    //small height
    printf("To measure the tree we need a point of vision and a point of reference.\n");
    printf("Please provide the viewers height in feet then inches.\nFeet: ");
    scanf("%d", &sfeet);
    printf("Inches: ");
    scanf("%d", &sinches);

    smallh = (sfeet*inches_per_foot) + sinches;

    //big height
    printf("\nPlease provide the reference height in feet then inches.\nFeet: ");
    scanf("%d", &bfeet);
    printf("Inches: ");
    scanf("%d", &binches);

    bigh = (bfeet*inches_per_foot) + binches;

    // small to big distance
    printf("How far is viewer from reference?\nFeet: ");
    scanf("%d", &sfeet);
    printf("Inches: ");
    scanf("%d", &sinches);

    sbd = (sfeet*inches_per_foot) + sinches;

    // big to tree distance
    printf("\nHow far is reference from tree?\nFeet: ");
    scanf("%d", &bfeet);
    printf("Inches: ");
    scanf("%d", &binches);
    btd = (bfeet*inches_per_foot) + binches;

    // equation
    treeh = smallh + (sbd + btd)*(bigh - smallh)/sbd;
    tfeet = treeh/inches_per_foot;
    tinches = treeh%inches_per_foot;

    //output
    printf("\nThe tree is %d feet and %d inches tall", tfeet, tinches);
    return 0;

}
