
/*File = String_Read_Library.h
Developed By : P.S.Dey
Start Date : 16th November 2015
End Date : 16th November 2015
*/


#include "My_Read_Library.h"

#include <string.h> // String Library

 const unsigned  CUI_Max_St_Length =80; /* Max. 20 Character String */

  typedef  char St01_T [CUI_Max_St_Length]; /* String Data Type */


 void VF_Read_Name (St01_T) ; /* Function Prototype for Reading any Name Composed of UPPERCASE Alphabets and Whitespaces*/

 void VF_Read_Part_Name (St01_T); /* Reading a Portion of a Name (First Name, Middle Name Last Name ) composed of
                                      UPPERCASE ALPHABETS only */

 void VF_Read_PAN (St01_T,unsigned); // Reading a PAN Number

 void VF_Read_ROLL_No (St01_T,unsigned); // Reading a Roll Number

 void VF_Read_AADHAR (St01_T,unsigned);  // Reading AADHAR

 char ChF_Read_Sex (void); // Reading SEX

 char ChF_Read_Marital_Status (void); // Reading Marital Status


/*****************************************************************************/

 void VF_Read_Name (St01_T St_A)  /* Function Definition */

/* Reading a single Name till the terminating character $ i.e. character by character.The String may contain only
UPPERCASE OR White space Characters e.g. RAMESH  CHAUHAN */

 {/*begin Read_Name */
     char Ch_St_Element;
	 unsigned UI_St_Idx =0;
     cout <<"\n\n Come Inside Read Name Function  \n\n";
     St_A [UI_St_Idx] = '\0'; /* Put String Terminating Character */



	 cout<<"\n\n Give the First Character A..Z OR give $ to Exit \n\n";
	 Ch_St_Element = ChF_Read_Name_Char ('A', 'Z','$');
	 if (Ch_St_Element =='$')
	 {// begin then #1
		 cout <<"\n\n No Input Exiting \n\n";
		 return;
     }//end then #1
	 else
	 {//begin else #1
		 cout << "\n\n First Character Obtained \n\n";
		 St_A[UI_St_Idx]=Ch_St_Element;
		 UI_St_Idx++;
		 St_A[UI_St_Idx] = '\0';
		 cout << "\n\n The Name Formed so far = " << St_A << "\n\n";

         Ch_St_Element = ChF_Read_Name_Char ('A', 'Z','$');

		 while ((Ch_St_Element !='$') && (UI_St_Idx <CUI_Max_St_Length-1))

             {//begin while #1

	            St_A [UI_St_Idx] = Ch_St_Element;
                UI_St_Idx++;
                St_A [UI_St_Idx] = '\0'; // Shift String Terminator
                cout << "\n\n The Name Formed so far = " << St_A << "\n\n";
   	            cout<<"\n Give  the Next Character A..Z or White Space OR  $ To END \n ";
                Ch_St_Element = ChF_Read_Name_Char ('A', 'Z', '$');
           }//end while #1
         cout <<"\n\n Exiting  from Read Name Function\n\n";
		 return;
	 }//end elae #1
	 }//end Read_Name
 /*************************************************************************************************/

 void VF_Read_Part_Name (St01_T St_B )  /* Function Definition */

/* Reading the First / Middle / Last  Name till the terminating character $ i.e. character by character.
The String may contain only UPPERCASE ALPHABETS e.g. RAMESH */

 {/*begin Read_Part_Name */
     char Ch_St_Element;
	 unsigned UI_St_Idx =0;
     cout <<"\n\n Come Inside Read Part Name Function  \n\n";
     St_B [UI_St_Idx] = '\0'; /* Put String Terminating Character */



	 cout<<"\n\n Give the First Character A..Z OR give $ to Exit \n\n";
	 Ch_St_Element = ChF_Read_SINGLE_Char ('A', 'Z');
	 if (Ch_St_Element =='$')
	 {// begin then #1
		 cout <<"\n\n No Input Exiting \n\n";
		 return;
     }//end then #1
	 else
	 {//begin else #1
		 cout << "\n\n First Character Obtained \n\n";
		 St_B[UI_St_Idx]=Ch_St_Element;
		 UI_St_Idx++;
		 St_B[UI_St_Idx] = '\0';
		 cout << "\n\n The Part Name Formed so far = " << St_B << "\n\n";

         Ch_St_Element = ChF_Read_SINGLE_Char ('A', 'Z');

		 while ((Ch_St_Element !='$') && (UI_St_Idx <CUI_Max_St_Length-1))

             {//begin while #1

	            St_B [UI_St_Idx] = Ch_St_Element;
                UI_St_Idx++;
                St_B [UI_St_Idx] = '\0'; // Shift String Terminator
                cout << "\n\n The Part Name Formed so far = " << St_B << "\n\n";
   	            cout<<"\n Give  the Next Character A..Z OR  $ To END \n ";
                Ch_St_Element = ChF_Read_SINGLE_Char ('A', 'Z');
           }//end while #1
         cout <<"\n\n Exiting  from Read Part Name Function\n\n";
		 return;
	 }//end elae #1
	 }//end Read_Part_Name
 /*************************************************************************************************/

 void VF_Read_PAN (St01_T St_PAN,unsigned UI_Size) // Reading a PAN Number

 {//begin Read_PAN

	 unsigned UI_St_Idx =0;

	 St_PAN[UI_St_Idx] ='\0';

	 cout<<"\n\n Come Inside Read PAN Function\n\n";

     cout <<"\n\n About to go Inside the First Reading Loop of PAN reading \n\n";

	 for (UI_St_Idx = 0 ; UI_St_Idx <=4 ; UI_St_Idx++)

	 {//begin for #1

			cout <<"\n\n Reading First Five(5) Characters of PAN each an UPPERCASE ALPHABET \n\n";
            St_PAN[UI_St_Idx] = Read_Value ('A', 'Z');

			St_PAN[UI_St_Idx+1] ='\0';
			cout<<"\n\n The PAN Number Formed so far = " <<St_PAN << "\n\n";
	 }//end for#1

	 cout <<"\n\n About to go Inside the Second & Last Reading Loop of PAN reading \n\n";

	  for (UI_St_Idx = 5 ; UI_St_Idx <=8 ; UI_St_Idx++)
	  {//begin for#2

		  cout <<"\n\n Reading Next Four(4) Characters of PAN each a Digit \n\n";
          St_PAN[UI_St_Idx] = Read_Value ('0', '9');

          St_PAN[UI_St_Idx + 1] ='\0';
		  cout<<"\n\n The PAN Number Formed so far = " <<St_PAN <<"\n\n";
	  }//end for#2


  	  cout <<"\n\n Reading the Very Last Character of PAN an UPPERCASE ALPHABET \n\n";

	  St_PAN [UI_St_Idx] = Read_Value ('A', 'Z');

	  cout <<"\n\n Putting the PAN String Terminating Character at the Last Position \n\n";

      St_PAN[UI_St_Idx+1] ='\0';
	  cout<<"\n\n The PAN Number Formed so far = " <<St_PAN;

	 cout <<"\n\n The Read In PAN Number ="<<St_PAN <<"\n\n";
     cout<<"\n\n About to Exit from  Read PAN Function\n\n";
	 return;
 }//end Read_PAN

 /************************************************************************************/

  void VF_Read_ROLL_No (St01_T St_ROLL_No, unsigned UI_Size) // Reading a Roll Number

 {//begin Read_ROLL_No

	 unsigned UI_St_Idx =0;
     St_ROLL_No [UI_St_Idx] ='\0';
	 cout<<"\n\n Come Inside Read ROLL No Function\n\n";

     cout <<"\n\n About to go Inside the First Reading Loop of ROLL_NO Reading\n\n";

	 for (UI_St_Idx = 0 ; UI_St_Idx <=1 ; UI_St_Idx++)

	 {//begin for #1

			cout <<"\n\n Reading First Two(2) Characters of ROLL NO each a Digit \n\n";
            St_ROLL_No[UI_St_Idx] = Read_Value ('0', '9');

            St_ROLL_No[UI_St_Idx+1] ='\0';
			cout<<"\n\n The Roll No Formed so far = " <<St_ROLL_No<<"\n\n";;
	}//end for #1

	 cout <<"\n\n About to go Inside the Second Reading Loop of ROLL_NO Reading\n\n";

	 for (UI_St_Idx = 2 ; UI_St_Idx <=3 ; UI_St_Idx++)

		{//begin for #2

			     cout <<"\n\n Reading Next Two(2) Characters of ROLL NO each an UPPERCASE ALPHABET \n\n";
                 St_ROLL_No[UI_St_Idx] = Read_Value ('A', 'Z');

				 St_ROLL_No[UI_St_Idx+1] ='\0';
			     cout<<"\n\n The Roll No Formed so far = " <<St_ROLL_No<<"\n\n";

		 }//end for #2

    cout <<"\n\n About to go Inside the Third & Last Reading Loop of ROLL_NO Reading\n\n";

	for (UI_St_Idx = 4 ; UI_St_Idx <=7 ; UI_St_Idx++)

			 {//begin for#3

                 cout <<"\n\n Reading Last Four(4) Characters of ROLL NO each a Digit \n\n";
                 St_ROLL_No[UI_St_Idx] = Read_Value ('0', '9');

				 St_ROLL_No[UI_St_Idx+1] ='\0';
			     cout<<"\n\n The Roll No Formed so far = " <<St_ROLL_No<<"\n\n";

			 }//end for #3

			 cout <<"\n\n Putting the ROLL NO String Terminating Character at the Last Position \n\n";
			 St_ROLL_No [UI_St_Idx+1] = '\0';

	 cout <<"\n\n The Read In Roll Number ="<<St_ROLL_No ;
     cout<<"\n\n About to Exit from  Read ROLL No Function\n\n";
	 return;
 }//end Read_ROLL_No

 /************************************************************************************/


 void VF_Read_AADHAR (St01_T St_AADHAR , unsigned UI_Size)  // Reading AADHAR
{//begin Read_AADHAR

	 unsigned UI_St_Idx =0;
	 St_AADHAR [UI_St_Idx] ='\0';

	 cout<<"\n\n Come Inside Read AADHAR Function\n\n";

     cout <<"\n\n About to go Inside the  First Reading Loop of AADHAR Reading \n\n";

	 for (UI_St_Idx = 0 ; UI_St_Idx <=3 ; UI_St_Idx++)

	 {//begin for #1

			cout <<"\n\n Reading the First Four Digits of the AADHAR Number \n\n";
            St_AADHAR[UI_St_Idx] = Read_Value ('0', '9');
			St_AADHAR[UI_St_Idx + 1] ='\0';
			cout<<"\n\n The AADHAR Formed so far = " <<St_AADHAR<<"\n\n";

	 }//end for #1

     cout <<"\n\n Putting in the First White Space Character of AADHAR \n\n";
	 St_AADHAR [4] = '\t' ;

	 cout <<"\n\n About to go Inside the Second Reading Loop of AADHAR Reading \n\n";

	 for (UI_St_Idx = 5 ; UI_St_Idx <=8 ; UI_St_Idx++)

	 {//begin for #1

			cout <<"\n\n Reading the Second Four Digits of the AADHAR Number \n\n";
            St_AADHAR[UI_St_Idx] = Read_Value ('0', '9');
			St_AADHAR[UI_St_Idx + 1] ='\0';
			cout<<"\n\n The AADHAR Formed so far = " <<St_AADHAR<<"\n\n";

	 }//end for #1

     cout <<"\n\n Putting in the Next White Space Character of AADHAR \n\n";
	 St_AADHAR [9] = '\t' ;


     cout <<"\n\n About to go Inside the Third & Last  Reading Loop of AADHAR Reading \n\n";

	 for (UI_St_Idx = 10 ; UI_St_Idx <=13 ; UI_St_Idx++)

	 {//begin for #1

			cout <<"\n\n Reading the Last Four Digits of the AADHAR Number \n\n";
            St_AADHAR[UI_St_Idx] = Read_Value ('0', '9');

			St_AADHAR[UI_St_Idx + 1] ='\0';
			cout<<"\n\n The AADHAR Formed so far = " <<St_AADHAR<<"\n\n";



	 }//end for #1

     cout <<"\n\n Putting in the AADHAR String Terminating Character at the End \n\n";
	 St_AADHAR [UI_St_Idx] = '\0' ;


     cout <<"\n\n The Read In AADHAR Number ="<<St_AADHAR ;
     cout<<"\n\n About to Exit from  Read AADHAR Function\n\n";
	 return;
 }//end Read_PAN

 /************************************************************************************/

 char ChF_Read_Sex (void) // Reading SEX

 {//begin Read Sex
	 char Ch_Sex;

	 St01_T ACh_Sex_List = {'M', 'F', 'O'};

	 cout << "\n\n Come Inside Read Sex Function \n\n";


	 cout << "\n\n Give The Sex M for Male F for Female O for Others \n\n";

	 Ch_Sex = ChF_Read_One_CHAR_In_A_Char_List (ACh_Sex_List , 3);

	 cout <<"\n\n The Read In Sex = " <<Ch_Sex;
	 cout << "\n\n About to Exit from Read Sex Function \n\n";
	 return (Ch_Sex);
 }//end Read Sex
 /********************************************************************************************/
 char ChF_Read_Marital_Status (void) // Reading Marital Status

{//begin Read Marital_Status

	 char Ch_Mar_Status;

	 St01_T ACh_Mar_Status_List = {'S', 'M', 'W'};

	 cout << "\n\n Come Inside Read Marital Status Function \n\n";

	 cout << "\n\n Give The Marital Status S for Single M for Married W for Widow/ Widower \n\n";


	 Ch_Mar_Status= ChF_Read_One_CHAR_In_A_Char_List (ACh_Mar_Status_List , 3);


	 cout <<"\n\n The Read In Marital_Status = " <<Ch_Mar_Status;
	 cout << "\n\n About to Exit from Read Marital Status Function \n\n";
	 return (Ch_Mar_Status);

 }//end Read Marital Status
 /********************************************************************************************/
