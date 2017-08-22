
/*File = My_Read_Library.h 
Developed By : P.S.Dey 
Start Date : 25th August 2015
End Date : 25th August 2015 
*/ 

#include <iostream> // Streaming Input Output Library

#include <ctype.h> // Character Library

#include <stdio.h> // Standard I/O Library

using namespace std;

template <typename T>  T Read_Value ( T const& , T const& );



char ChF_Read_Name_Char ( char, char, char) ; // The Read Character Function Prototype for Reading Characters of a Name
                                         // in the range Low Character .. High Character including White Space Terminated by  
                                         // Last Character 
 
char ChF_Read_SINGLE_Char ( char, char, char) ; // The Read Character Function Prototype for Reading One Alphabetic Character
                                          // 'A' .. 'Z' OR One Numeric Character '0' .. 9' No White Space.'$' to Terminate


bool BF_Boolean_Search_Char (char *,unsigned,char); // Linear Searching for a Specified Character [The 3rd Parameter] 
                                                  // Within a Specified List of Characters

                                                                                 
                                         
char ChF_Read_One_CHAR_In_A_Char_List (char * , unsigned); // Read a single Alphabetic Character provided it lies in a 
                                                          // Specific List of Characters. This List along with it's Size is  
                                                           // Passed as a Parameter
   
bool BF_Check_Leap_Year (unsigned); // Checking whether a Year is Leap Year or NOT

/*******************************************************************************/
template <typename T> T Read_Value ( T const& Low, T const& High )
        {// begin Read_Value 
             T Value;   cout <<"\n\n Come Inside Read  Function \n\n";
              while (1) // Loop Forever  
                 {// begin while #1 
                     try 
                      { //begin try #1 
                         cout << "\n Give a Value in the range "<< Low<<".." << High << "\t";
                         cin >> Value ;
                       if ((Value < Low) || (Value > High))
                       // begin then #1
                                throw (Value); // throw Exception
                      // end then #1 
                                else     break;
		         }//end try #1 
	catch (T Value)  
		{// begin catch #1 
                    cout << "\n The Given Value  =" << Value;
                    cout <<"\t Lies Outside the Range " << Low <<".. " << High<< "  try again \n";
					                                          
                   /*throw */ ; // To be Handled by the CATCH Inside Caller 
                    continue;
		} // end  catch #1 
       }// end while#1
        cout <<"\n\n Going out of Read Function with Return Value =" << Value <<"\n\n";
        return (Value); 
         }// end Read_Value

  
/******************************************************************************************************/

 char ChF_Read_Name_Char ( char Ch_Low='A', char Ch_High='Z', char Ch_Last ='$')  // The Function Definition
        {// begin Read_Char 
             char Ch_Value, Ch_Dummy;
             cout <<"\n\n Come Inside Read Character Function \n\n";

			 cout <<"\n\n Cleaning Leftover Character press <ENTER> Key \n\n";

			 Ch_Dummy=getchar();
			 
			 cout <<"\n\n Now Starting to Read in Actual Characters \n\n";
            while (1) // Loop Forever  
              {// begin while #1 
                  try 
                   { //begin try #1 
                       cout <<"\n Give a Character in the range "<< Ch_Low <<".." << Ch_High 
						   <<" \n\n OR White Space OR Terminating Character "<< Ch_Last <<"\t";

                       Ch_Value =getchar();

					   if (Ch_Value == Ch_Last)
					   {//begin then #1
						   cout<<"\n\n Last Character Inputted . No More Input Reqd \n\n";
						   cout <<"\n\n Exiting Read Name Char Function with Chracter Value = " << Ch_Value;
						   return(Ch_Value);
					   }//end then #1 
					   else 
					   {//begin else #1 
						   cout <<"\n\n Last Character Not Given \n\n";
						   if (!isalpha(Ch_Value))
						   {// begin then #2
							   cout<<"\n\n Non Alphabetic Character given \n\n";
							   if ((Ch_Value == ' ' ) || (Ch_Value == '\t')) 
							   {//begin then #3
								   cout <<"\n\n White Space Character given \n\n";
                                   cout <<"\n\n Exiting Read Name Char Function with Chracter Value = " << Ch_Value;
						           return(Ch_Value);
							   }//end then #3 
							   else // Non Alphabetic AS WELL AS Non White Space Character Given 
							   {//begin else #3
								   cout <<"\n\n INVALID CHARACTER GIVEN \n\n";
								   throw (Ch_Value); // Throw Exception
							   }//end else #3 
							   
						   }//end then #2 
						   else // Alphabetic Character Given
						   {//begin else #2
							   cout<<"\n\n Alphabetic Character Given \n\n";
							   if (islower (Ch_Value)) // Lowercase Alphabet given 
							   {//begin then #4
								   cout <<"\n\n  Given Input"<<Ch_Value<< "\n\n";
                                   cout<<"\n\n Lowercase alphabet"<<Ch_Value<<"converting to UPPERCASE \n\n";
                                   Ch_Value = toupper (Ch_Value);
							   }//end then #4
							   else 
							   {//begin else #4
                                    cout <<"\n\n  Given Input"<<Ch_Value<<"\n\n";
                                   cout<<"\n\n UPPERCASE alphabet"<<Ch_Value<<"is O.K. \n\n";
							   }//end else #4 
                               cout <<"\n\n Going out of Read Character Function with Return Value =" << Ch_Value <<"\n\n";
						       return(Ch_Value);
						   }//end else #2
					   }//end else #1	   
                   
				  }//end try#1 

                catch (char Ch_Value)  
           {/* begin catch #1 */
                  cout << "\n The Given Character Value = " << Ch_Value;
                  cout <<"\n Lies Outside the Range" << Ch_Low <<".. " << Ch_High
					  << " And Neither any White Space NOR  the Terminating  Character"
					  <<Ch_Last<<" Give Input Again \n\n ";
                   /* throw */ ; // To be Handled by the CATCH Inside Caller 
                 continue;
          } /* end  catch #1 */
       }// end while#1
       
         
         }// end Read_Char
/********************************************************************************************************/

 
   /**********************************************************************************************/

bool BF_Boolean_Search_Char (char * PCh_List,unsigned UI_Size,char Ch_Value)
{//begin Boolean_Search_Char
	bool B_Flag=0; 
	unsigned UI_Idx;
	
	cout<<"\n\n Entered in Character Search Function \n\n";
	
	for (UI_Idx =0; UI_Idx<=UI_Size; UI_Idx++)
	{//begin for #1
		if (PCh_List[UI_Idx] == Ch_Value) 
		{//begin then #1
			cout<<"\n\n Found a Match at the "<< UI_Idx << "th position \n\n";
			cout << "\n\n The Matched Character =" << PCh_List [UI_Idx] <<"\n\n";
			B_Flag = 1;
			break;
		}//end then #1
		else 
		{//begin else #1
			cout <<"\n\n No Match  Found Yet \n\n";
			B_Flag =0;
		}//end else #1 
	}//end for #1
	cout <<"\n\n About to Come Out of Character Search Function \n\n";
	return(B_Flag);
}//end Boolean_Search_Char  
 
   
  /***************************************************************************************************/ 
   
   char ChF_Read_One_CHAR_In_A_Char_List (char * PCh_A, unsigned UI_Size =1)

{// begin Read_One_CHAR_In_List_Char 

             char Ch_Value; unsigned UI_Idx=0; bool B_Flag =0;
			  cout <<"\n\n Come Inside Read One CHAR In A List of Characters Function \n\n";
            while (1) // Loop Forever  
              {// begin while #1 
                  try 
                   { //begin try #1 
                        cout << "\n Give a Character that lies in the following List \t";

						 for (UI_Idx=0; UI_Idx <= UI_Size; UI_Idx++)
						 {//begin for #1 
							 cout << "\n\n Displaying the Next Character in The Valid Character List \n\n";
							 cout <<"\n\n" << PCh_A [UI_Idx] <<"\n\n";
						 }//end for #1 

                       Ch_Value= getchar() ;

					   cout <<"\n\n Searching the given Character "<< Ch_Value <<" in the Specified Character List \n\n";

					   B_Flag=BF_Boolean_Search_Char (PCh_A,UI_Size,Ch_Value);

                       if (B_Flag == 0)
                       {// begin then #1
                                throw (Ch_Value); // throw Exception
					   }// end then #1 
                                else     break;
				  }//end try #1 

                catch (char Ch_Value)  
				{/* begin catch #1 */
                    cout << "\n The Given Character Value  =" << Ch_Value;
                    cout <<"\t Does not Lie in the Specified Character List try again\n\n ";
                   /*throw */ ; // To be Handled by  the Caller 
                   continue;
				} /* end  catch #1 */
       }// end while#1
        cout <<"\n\n Going out of Read One_CHAR_In_A_List_Of_Characters Function with Return Value =" << Ch_Value <<"\n\n";

        return (Ch_Value); 

         }// end Read_One_CHAR_In_List_Char
/***************************************************************************************************************/

bool BF_Check_Leap_Year (unsigned UI_Year_In)

{//begin Check_Leap_Year 

	bool B_Flag_Leap_Year=0;

	cout <<"\n\n Come Inside Check Leap Year  Function of Date Class \n\n";

	if (UI_Year_In % 400 ==0)
        
	{//begin then #1 
		cout <<"\n\n Year Divisible by 400 the Year " <<UI_Year_In <<"is a Leap Year \n\n";

		B_Flag_Leap_Year = 1; 

	}//end thern #1 

      else 
		  
	  {//begin else #1 

		  if (UI_Year_In % 4 ==0)

		  {//begin then #2 
			  
			  if (UI_Year_In %100 ==0)

			  {//begin then # 3

                  cout <<"\n\n Year Divisible by 100 the Year " <<UI_Year_In <<"is NOT a Leap Year \n\n";

                  B_Flag_Leap_Year = 0;

			  }//end then #3 

			  else 

			  {//begin else #3
				  
                  cout <<"\n\n Year Divisible by 4 and NOT Divisible by 100 the Year " <<UI_Year_In 
					  <<"is a Leap Year \n\n";

                  B_Flag_Leap_Year = 1;
			  }//end else #3

		  }//end then #2 
			  
		 else 

           {//begin else #2
				  
              cout <<"\n\n Year NOT Divisible by 4 the Year " <<UI_Year_In <<"is NOT a Leap Year \n\n";

              B_Flag_Leap_Year = 0;

		 }//end else #2

		} // end else #1
	cout <<"\n\n About to Come Out of  Check Leap Year Function of Date Class with Flag Value =" 
		<< B_Flag_Leap_Year << "\n\n";

	return (B_Flag_Leap_Year); 
}//end check leap year 
    
/************************************************************/

char ChF_Read_SINGLE_Char ( char Ch_Low='A', char Ch_High='Z' , char Ch_Last ='$')  // The Function Definition
        {// begin Read_SINGLE_Char 
             char Ch_Value, Ch_Dummy;
			 bool B_Flag=0; // Flag to Decide DIGIT or Alphabet Default ALPHABET

			  cout <<"\n\n Come Inside Read SINGLE Character Function \n\n";
              cout <<"\n\n Cleaning Leftover Character Press <Enter> Key\n\n";

			 Ch_Dummy=getchar();

			 if (isdigit(Ch_Low) && isdigit (Ch_High))

			 {//begin then#1
				 cout <<"\n\n Digits 0..9 only and Terminating Character $ is Expected as Input \n\n";
				 B_Flag=1;
			 }//end then #1 
			 else 
			 {//begin else #1

				 if (isalpha(Ch_Low) && isalpha (Ch_High))

				 {//begin then#2
                 cout <<"\n\n UPPERCASE ALPHABETS A..Z or lowercase alphabets a..z  only and $ is Expected as Input \n\n";
				 B_Flag=0;
				 }//end then#2

				 else 

				 {//begin else#2

					 cout <<"\n\n Any Other Character is INVALID will have to try Again \n\n";

				 }//end else#2 

			 }//end else#1
                 
			 
			 cout <<"\n\n Now Starting to Read in Actual Characters \n\n";
            while (1) // Loop Forever  
              {// begin while #1 
                  try 
                   { //begin try #1 
                       cout <<"\n Give a Character in the range "<< Ch_Low <<".." << Ch_High 
						   <<" \n\n  OR Terminating Character "<< Ch_Last <<"\t";

                       Ch_Value =getchar();

					   if (Ch_Value == Ch_Last)
					   {//begin then #3
						   cout<<"\n\n Last Character Inputted . No More Input Reqd \n\n";
						   cout <<"\n\n Exiting Read SINGLE Char Function with Return Value = " << Ch_Value <<"\n\n";
						   return(Ch_Value);
					   }//end then #3 
					   else 
					   {//begin else #3 
					   
						   cout <<"\n\n Last Character Not Given \n\n";
						   cout << "\n\n Other Character Expected \n\n";

						   if (B_Flag ==1)
						   {// begin then #4
                                cout<<"\n\n Digit 0..9 Expected \n\n";
							   if (isdigit (Ch_Value)) 
							   {//begin then #5
								   cout <<"\n\n Exiting Read SINGLE Char Function with Return Digit = " << Ch_Value <<"\n\n";						        return(Ch_Value);
							       return(Ch_Value);
							   }//end then #5 
						        
						        else 
								{//begin else#5
									cout <<"\n\n INVALID CHARACTER GIVEN  TRY AGAIN \n\n";
									throw(Ch_Value);
								}//end else #5
						   }//end then#4 
						   else 
						   {//begin else#4
                               cout<<"\n\n Alphabet a..z OR A..Z  Expected \n\n";							   
							   					   
							   if (islower (Ch_Value)) // Lowercase Alphabet given 
							   {//begin then #6
								   cout <<"\n\n  Given Input"<<Ch_Value<< "\n\n";
                                   cout<<"\n\n Lowercase alphabet"<<Ch_Value<<"converting to UPPERCASE \n\n";
                                   Ch_Value = toupper (Ch_Value);
							   }//end then #6
							   else 
							   {//begin else #6
								   if (isupper (Ch_Value)) 
								   {//begin then #7 
                                    cout <<"\n\n  Given Input"<<Ch_Value<<"\n\n";
                                    cout<<"\n\n UPPERCASE alphabet "<<Ch_Value<<" given. \n\n";
                                     
								   }//end then #7
								   
								   else
								   {//begin else #7
                                       cout <<"\n\n INVALID CHARACTER GIVEN , TRY AGAIN \n\n";
									   throw(Ch_Value);
								   }//end else #7
							   }//end else #6
							   cout <<"\n\n Going out of Read SINGLE Character Function with Return ALPHABET = " 
									   << Ch_Value <<"\n\n";
						           return(Ch_Value);
						   }//end else #4
						}//end else #3                             
                   
				  }//end try#1 

                catch (char Ch_Value)  
           {/* begin catch #1 */
                  cout << "\n The Given Character Value = " << Ch_Value;
                  cout <<"\n Lies Outside the Specified Range" << Ch_Low <<".. " << Ch_High
					  << " And Neither the Terminating  Character " <<Ch_Last<<" GIVE INPUT AGAIN \n\n ";
                   /* throw */ ; // To be Handled by the CATCH Inside Caller 
                 continue;
          } /* end  catch #1 */
       }// end while#1       
             
   }// end Read_SINGLE_Char
/*************************************************************/