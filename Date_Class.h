/* File = Date_Class.h

  
  Developed By: Partha Sarathi Dey
  Start Date : 16th November 2015 
  End Date : 2nd December 2015 */


class Date_Class 

   {//begin Date_Class
	
       private : // Not Accessible outside
             unsigned int UI_Date, UI_Month,UI_Year;
			 
             
       public :                
		        void VF_INIT_Date (unsigned,unsigned,unsigned);

				Date_Class (unsigned UI_Date= 1, unsigned UI_Month=1, unsigned UI_Year = 1925) 

				{//begin Initializing Constructor
					
					cout <<"\n\n Come Inside Initializing Date Constructor \n\n";

                     VF_INIT_Date (UI_Date, UI_Month, UI_Year);

                    cout <<"\n\n About to Come out of Initializing Date Constructor \n\n";
				}//end Initializing Constructor

            /******************************************************************************/
				
                Date_Class ( Date_Class &Obj_One_Date) 

				{//begin Copy Constructor
					
					cout <<"\n\n Come Inside Copy Constructor for Date  \n\n";

					cout <<"\n\n Copying values \n\n";

                     UI_Year = Obj_One_Date.UI_Year;
					 
					 UI_Month = Obj_One_Date.UI_Month; 
					 
					 UI_Date=Obj_One_Date.UI_Date;

                    cout <<"\n\n About to Come out of Copy Constructor for Date \n\n";

				}//end Copy Constructor

				/***************************************************************************/
				void VF_Read_Date (void);

                void VF_Display_Date (void);  

    };//end Date_Class 

/***************The Member Functions Definitions ***********/

void Date_Class :: VF_INIT_Date (unsigned UI_Given_Date =0, unsigned UI_Given_Month=0,unsigned UI_Given_Year=0)
{//begin Init Date
	
	cout<<"\n\n Come Inside INIT DATE Function of Date Class \n\n";

	UI_Date = UI_Given_Date;
	
	UI_Month= UI_Given_Month;
	
	UI_Year = UI_Given_Year;

    cout<<"\n\n About to Come Out of  INIT DATE Function of Date Class \n\n";

	return;
}//end Init Date 
/*****************************************************************************/
void Date_Class :: VF_Read_Date (void)

       {// begin Read Date 
		
		    bool B_Flag_Leap_Year=0;

		    cout<<"\n\n Come Inside Read Date Function of Date Class \n\n";

			cout <<"\n\n Give Year in the range 1900 .. 2015 \n\n";

            UI_Year = Read_Value <unsigned> ( 1900, 2015);

			cout <<"\n\n Check if the Year is a Leap Year \n\n"; 

			B_Flag_Leap_Year = BF_Check_Leap_Year (UI_Year);

            cout <<"\n\n Give Month in the range 1 .. 12 \n\n";

            UI_Month = Read_Value ( 1, 12);

			if (UI_Month == 2)
				
			{//begin then#1 

				cout <<"\n\n Month February Check for Leap Year \n\n";

				if (B_Flag_Leap_Year == 1) 

				{//begin then #2

					cout <<"\n\n Month February and Year = " << UI_Year << " which is a Leap Year \n\n";
					cout <<"\n\n Give Date in the range 1..29 \n\n"; 
					UI_Date = Read_Value (1, 29);

				}//end then #2 

				 else 

				 {//begin else #2

				    cout <<"\n\n Month February and Year = " << UI_Year << " which is NOT a Leap Year \n\n";
					cout <<"\n\n Give Date in the range 1..28 \n\n"; 
					UI_Date = Read_Value (1,28);
					 
				 }//end else #2 

			}//end then #1 

			else 

			{//begin else #1 

				cout <<"\n\n Month Not February Chech for 31 Day/ 30 Day Months \n\n";

				if ((UI_Month ==1) || (UI_Month ==3) || (UI_Month == 5) || (UI_Month == 7) || (UI_Month == 8) ||
					(UI_Month == 10) || (UI_Month == 12))

				{//begin then #3

					cout << "\n\n 31 Day Month \n\n";
                    cout <<"\n\n Give Date in the range 1..31 \n\n"; 
					UI_Date = Read_Value <unsigned> (1,31); 

				}//end then #3

				else 

				{//begin else #3 

                   if ((UI_Month ==4) || (UI_Month == 6) || (UI_Month == 9) || (UI_Month == 11) )
					

				   {//begin then #4
					   
					   cout << "\n\n 30 Day Month \n\n";
					   cout <<"\n\n Give Date in the range 1..30 \n\n"; 
					   UI_Date = Read_Value (1,30); 

				   }//end then #4

					
				}//end else #3
			}//end else #1

            cout<<"\n\n About to Exit Out of Read Date Function of Date Class \n\n";

			return;

        }// end Read Date
/********************************************************************/
  void Date_Class :: VF_Display_Date (void) 
	  
         {// begin Display  Date
	  
               cout <<"\n\n Come Inside Display Date Function of Date Class \n\n";

               cout << "\n\n Date  = " <<UI_Date<<"\n\n";

               cout<< "\n\n Month  =   " <<UI_Month <<"\n\n";  
               
               cout <<"\n\n Year =  " <<UI_Year<<"\n\n";

			   cout <<"\n\n About to Come Out of Display Date Function of Date Class \n\n";
               
               return;
        }// end Display Date
               
/***************************************************************************************/

