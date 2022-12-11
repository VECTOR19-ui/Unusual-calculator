#ifndef BUSINESS_H_INCLUDED
#define BUSINESS_H_INCLUDED
int business(){
//This program tries to take out very basic business and economics calculations:
//business variable declaration:
float net_income,revenue,expense,asset,liability,equity,cogs,beginning_inventory,break_even_point,fixed_cost,sales_price_per_unit,var_costs_per_unit,roi,investment_gain,cost_of_investment,profit_margin,cur_ratio,cur_assets,cur_liabilities,markup_percentage,purchases_during_the_period,ending_inventory;
int i,j,k,n,ass_eq;
float sales_revenue,gross_profit,gross_profit_margin;
//asking user to choose operation:
printf("\nChoose your operation below\n");
printf("\n1,Net income\n");
printf("\n2,Assets\n");
printf("\n3,Cost of goods sold\n");
printf("\n4,Break even point\n");
printf("\n5,Gross profit margin\n");
printf("Choose your operation here: ");
scanf("%d",&n);
switch(n){
case 1:
    system("cls");
    printf("Put revenue: ");
    scanf("%f",&revenue);
    printf("Put expense: ");
    scanf("%f",&expense);
    net_income=revenue-expense;
    printf("\nNet income=%f\n",net_income);
    break;
case 2:
    printf("\nAsset or Equity");
    scanf("%d",ass_eq);
    if(ass_eq==1){
printf("\nPut value for liability: ");
        scanf("%f",&liability);
        printf("]nPut value for equity: ");
        scanf("%f",&equity);
        asset=liability+equity;
        printf("\nAsset=%f",asset);
    }else{
    printf("Put asset: ");
    scanf("%f",&asset);
    printf("Put liability: ");
    scanf("%f",&liability);
    equity=asset-liability;
    printf("\nEquity=%f",equity);
    }
    break;
case 3:
    printf("\nCOGS: ");
    scanf("%f",&cogs);
    printf("\nBeginning inventory: ");
    scanf("%f",&beginning_inventory);
    printf("\nPurchases during the period: ");
    scanf("%f",&purchases_during_the_period);
    printf("\nEnding inventory: ");
    scanf("%f",&ending_inventory);
    cogs=beginning_inventory+purchases_during_the_period-ending_inventory;
    printf("\nCOGS=%f",cogs);
    break;
case 4:
    printf("\nVariable costs per unit: ");
    scanf("%f",&var_costs_per_unit);
    printf("\nSales price per unit: ");
    scanf("%f",&sales_price_per_unit);
    printf("\nFixed costs: ");
    scanf("%f",&fixed_cost);
    break_even_point=sales_price_per_unit-var_costs_per_unit*fixed_cost;
    printf("\nBreak even pount=%f",break_even_point);
    break;
case 5:
    printf("Gross profit: ");
    scanf("%f",&gross_profit);
    printf("Sales revenue: ");
    scanf("%f",&sales_revenue);
    gross_profit_margin=gross_profit/sales_revenue*100;
    printf("Gross profit margin:%f\n",gross_profit);
default:
    printf("Fuck all of you");
    break;
    }
return 0;
}


#endif // BUSINESS_H_INCLUDED
