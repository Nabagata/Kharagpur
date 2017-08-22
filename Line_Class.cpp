/* File = Line_Class.cpp

  Inheritance Virtual Function Example 1
  Developed By: Partha Sarathi Dey
  Start Date : 2nd November 2015
  End Date : 2nd November 2015 */


#include <Point_Class.h>

#include <math.h>

class Line_Class

   {//begin Line_Class
       private :

             Point_Class Obj_End_Point1,Obj_End_Point2;

			 float F_Line_Length;

			 float F_Line_Grad , F_Const;

       public :

		       void VF_Init_Line (float F_Value=0.0)
			   {//begin Init_Line
				   cout <<"\n\n Come Inside Init Line Function \n\n";
				   Obj_End_Point1.VF_Init_Point (F_Value,F_Value);
				   Obj_End_Point2.VF_Init_Point (F_Value, F_Value);
				   F_Line_Length = F_Value;
				   F_Line_Grad = F_Const = F_Value;
                   cout <<"\n\n About to Come out from Init Line Function \n\n";
				   return;
			   }//end init line

			   /*****************************************************************/
			   Line_Class (void)
			   {//begin Constructor
                  cout <<"\n\n Come Inside Line Constructor \n\n";
				  cout <<"\n\n About to Call Initializing Function\n\n";
				  VF_Init_Line (0.0);
                  cout <<"\n\n About to Come out from Line Constructor \n\n";
     			  return;
			   }//end Constructor
			   /*****************************************************************/
                ~Line_Class (void)
			   {//begin Destructor
                  cout <<"\n\n Come Inside Line Destructor \n\n";

                  cout <<"\n\n About to Come out from Line Destructor \n\n";
     			  return;
			   }//end Constructor
		       /*******************************************************************/
				Line_Class (Line_Class const & Obj_Line_A)
				{//begin Copy Constructor
                  cout <<"\n\n Come Inside Line Copy Constructor \n\n";

                   Obj_End_Point1 = Obj_Line_A.Obj_End_Point1 ;
				   Obj_End_Point2 = Obj_Line_A.Obj_End_Point2;
				   F_Line_Length =Obj_Line_A.F_Line_Length;
				   F_Line_Grad = Obj_Line_A.F_Line_Grad;
				   F_Const = Obj_Line_A.F_Const;

                  cout <<"\n\n About to Come out from Line Constructor \n\n";
     			  return;
			   }//end Constructor

				/*****************************************************************/
		       void VF_Read_End_Points (void);

			   Point_Class ObjF_Get_End_Point1 (void);

			   Point_Class ObjF_Get_End_Point2 (void);

               float F_Get_Line_Length (void);

			   void VF_Compute_Line_Length (Point_Class,Point_Class);

			   void VF_Compute_Line_Grad (Point_Class,Point_Class);

               void VF_Compute_Line_Const (Point_Class,Point_Class);

               void VF_Display_Line (void);
    };//end Point_Class
/***************The Member Functions Definitions ***********/
    void Line_Class :: VF_Read_End_Points (void)

       {// begin Read End Points
		    cout<<"\n\n Come Inside Read End Points Function \n\n";

			cout <<"\n\n Reading End Point No. 1 \n\n";

            Obj_End_Point1.VF_Read_Point_Co_Ordinate ();

			cout <<"\n\n Displaying End Point No. 1 Co_Ordinates \n\n";

            Obj_End_Point1.VF_Display_Point_Co_Ordinate ();

            cout <<"\n\n Reading End Point No. 2 \n\n";

			Obj_End_Point2.VF_Read_Point_Co_Ordinate ();

            cout <<"\n\n Displaying End Point No. 2 Co_Ordinates \n\n";

            Obj_End_Point2.VF_Display_Point_Co_Ordinate ();

			cout<<"\n\n About to Come Out of Read End Points  Function \n\n";

            return;

        }// end Read End_Points
/********************************************************************/
	Point_Class Line_Class:: ObjF_Get_End_Point1 (void)

	{//begin Get End Point #1

		cout<<"\n\n Inside Get End Point #1 \n\n";

		cout<< "\n\n About to Come Out of Get End Point #1 \n\n";

		return (Obj_End_Point1);

	}//end Get End Point #1
/********************************************************************/
	Point_Class Line_Class:: ObjF_Get_End_Point2 (void)

	{//begin Get End Point #2

		cout<<"\n\n Inside Get End Point #2 \n\n";

		cout<< "\n\n About to Come Out of Get End Point #2 \n\n";

		return (Obj_End_Point2);

	}//end Get End Point #2

/***************************************************************************/
	float Line_Class::F_Get_Line_Length (void)
{//begin Get Line Length

		cout<<"\n\n Inside Get Line Length \n\n";

		cout<< "\n\n About to Come Out of Get Line Length \n\n";

		return (F_Line_Length);

	}//end Get Line Length

/*********************************************************************/
  void Line_Class :: VF_Compute_Line_Length (Point_Class Obj_End_Point1, Point_Class Obj_End_Point2)

         {// begin Compute Length

               float F_X_Diff, F_Y_Diff;

               cout <<"\n\n Come Inside Compute Length Function  \n\n";

               cout <<"\n\n Computing Difference of X Co-Ordinates \n\n";

               F_X_Diff = Obj_End_Point1.FF_Get_X_Co_Ord() - Obj_End_Point2.FF_Get_X_Co_Ord();

               cout <<"\n\n Computing Difference of Y Co_Ordinates \n\n";

               F_Y_Diff = Obj_End_Point1.FF_Get_Y_Co_Ord() - Obj_End_Point2.FF_Get_Y_Co_Ord();

               cout <<"\n\n  Now Computing Line Length \n\n";

               F_Line_Length = sqrt(pow(F_X_Diff, 2.0) + pow(F_Y_Diff,2.0));

			   cout <<"\n\n The Computed Line Length = "<<F_Line_Length <<"\n\n";

			   cout <<"\n\n About to Come Out of Compute Length Function \n\n";

               return;

        }// end Compute Length

/***************************************************************************************/

 void Line_Class :: VF_Compute_Line_Grad (Point_Class Obj_End_Point1, Point_Class Obj_End_Point2)

         {// begin Compute Line Grad

               float F_X_Diff, F_Y_Diff;

               cout <<"\n\n Come Inside Compute Gradient Function  \n\n";

               cout <<"\n\n Computing Difference of X Co-Ordinates \n\n";

               F_X_Diff = abs(Obj_End_Point1.FF_Get_X_Co_Ord() - Obj_End_Point2.FF_Get_X_Co_Ord());

               cout <<"\n\n Computing Difference of Y Co_Ordinates \n\n";

               F_Y_Diff = abs(Obj_End_Point1.FF_Get_Y_Co_Ord() - Obj_End_Point2.FF_Get_Y_Co_Ord());

               cout <<"\n\n  Now Computing Line Gradient \n\n";

               F_Line_Grad = F_Y_Diff / F_X_Diff;

			   cout <<"\n\n The Computed Line Gradient = "<<F_Line_Grad <<"\n\n";

			   cout <<"\n\n About to Come Out of Compute Line Gradient Function \n\n";

               return;

        }// end Compute Line Grad

 /**************************************************************************************************/
void Line_Class :: VF_Compute_Line_Const (Point_Class Obj_End_Point1, Point_Class Obj_End_Point2)

         {// begin Compute Line Const


               cout <<"\n\n Come Inside Compute Constant Function  \n\n";

			   cout <<"\n\n  Now Computing Line Gradient \n\n";


               F_Const = Obj_End_Point1.FF_Get_Y_Co_Ord() - F_Line_Grad*Obj_End_Point1.FF_Get_X_Co_Ord();

               cout <<"\n\n The Computed Line Constant = "<< F_Const <<"\n\n";

			   cout <<"\n\n About to Come Out of Compute Line Constant Function \n\n";

               return;

        }// end Compute Line Grad

/***************************************************************************************/
  void Line_Class :: VF_Display_Line (void)

  {// begin Display Line

	  cout <<"\n\n Come Inside Display Line Function \n\n";

	  cout <<"\n\n The Co_Ordinate of End Point #1 \n\n";

	  Obj_End_Point1.VF_Display_Point_Co_Ordinate ();

      cout <<"\n\n The Co_Ordinate of End Point #2 \n\n";

	  Obj_End_Point2.VF_Display_Point_Co_Ordinate ();

	  cout <<"\n\n The Line Length =  "<< F_Line_Length <<"\n\n";

      cout <<"\n\n The Line Gradient =  "<< F_Line_Grad <<"\n\n";

	  cout <<"\n\n The Line Constant =  "<< F_Const <<"\n\n";


      cout <<"\n\n About to Come Out of Display Line Function \n\n";
	  return;
  }//end Display Line

/**************************************************************************/
  int main()

  {//begin main

	  Line_Class Obj_A_Line;

	  cout << "\n\n Come Inside Main Body \n\n";

	  cout << "\n\n Give Co_Ordinate of End Points of the Line \n\n";

	  Obj_A_Line.VF_Read_End_Points ();

	  cout <<"\n\n Computing Length of the Line \n\n";

	  Obj_A_Line.VF_Compute_Line_Length (Obj_A_Line.ObjF_Get_End_Point1 () , Obj_A_Line.ObjF_Get_End_Point2 ());

	  cout <<"\n\n Computing Gradient of the Line \n\n";

	  Obj_A_Line.VF_Compute_Line_Grad (Obj_A_Line.ObjF_Get_End_Point1 () , Obj_A_Line.ObjF_Get_End_Point2 ());

      cout <<"\n\n Computing the Line Constant \n\n";

	  Obj_A_Line.VF_Compute_Line_Const (Obj_A_Line.ObjF_Get_End_Point1 () , Obj_A_Line.ObjF_Get_End_Point2 ());


	  cout <<"\n\n Displaying the Line \n\n";

	  Obj_A_Line.VF_Display_Line ( );

	  cout <<"\n\n About to Come Out of Main Body \n\n";
	  return(0);
  }//end main



