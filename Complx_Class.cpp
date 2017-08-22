
/*File = Complx_Class.cpp 
Developed By : P.S.Dey 
Start Date : 12th June 2014
End Date : 12th June 2014
Last Modified Date : 30th September 2015 
Complex Class Manipulation 
*/ 
#include "My_Read_Library.h" /* Include All Required Libraries*/

#include <math.h> /* Include Mathematical Library */


  class  Complx_Class 
   {// begin Complx_Class
       private: // Data Area NOT accessible from outside                      
           float  F_Real, F_Imag, F_Mag;
	
       public: // The Functions/ Methods  accessible from outside
     Complx_Class (float F_Real=0.0, float F_Imag=0.0 ) // The Constructor
             {// begin Constructor
				       cout<< "\n Come inside Complx Class Constructor\n";
				       VF_Init_Complx(F_Real,F_Imag); // Complex Intialization Function
				       cout<<"\n One Complx Class Object Constructed\n";
             }// end Constructor
             
			 ~Complx_Class() // The Destructor 
			 {//begin Destructor 
				 cout << "\n Have come inside Complx Class DESTRUCTOR \n";
			 }//end Destructor

			 Complx_Class (Complx_Class &A_Complx_Obj) // Copy Constructor 
			 {// begin copy constructor
				  cout <<"\n Inside Copy Constructor of Complx_Class \n ";
                  F_Real = A_Complx_Obj.F_Real;
				  F_Imag = A_Complx_Obj.F_Imag;
				  F_Mag = A_Complx_Obj.F_Mag;
                  cout <<"\n One Complx Class Object Copied inside Complx_Class \n ";
			 }//end copy Constructor

                          
             //  Member Function Prototype  Defined Outside
             void VF_Read_Frame_Complx (void);
             void VF_Init_Complx(float,float); //initialisation fuction  		 
             void VF_Display_Complx ( void); //Display Function

            // The Processing Functions manipulates the Entire Complex Object with which it is called  
			 
             void VF_Add_Complx (Complx_Class R_Compx_2_Obj,Complx_Class R_Complx_3_Obj);  
             void VF_Sub_Complx (Complx_Class R_Complx_2_Obj, Complx_Class R_Complx_3_Obj);
             void VF_Mul_Complx (Complx_Class R_Complx_2_Obj, Complx_Class R_Complx_3_Obj);            
              
                          
    }; //end Complx_Class
    // Objects Needs to be created belonging to Complex Class by the 
    // Constructor 
    //  Function  Definitions given Externally
  /*************************************************************/   
void Complx_Class::VF_Init_Complx(float F_X=0.0, float F_Y=0.0)
{//begin VF_init_complex
  cout<<"\n Come inside Initialisation Function  of Complx Class \n";  
  F_Real=F_X;
  F_Imag=F_Y;
  F_Mag = sqrt (F_Real* F_Real + F_Imag * F_Imag);

 cout<<"\n About to  exit from Initialisation Function of Complx Class \n";
return;
}//end VF_init_Complx  
/********************************************************************/
void Complx_Class::VF_Read_Frame_Complx (void)
    {//begin Read_Complx
		cout <<"\n Come Inside Read & Frame Complex function of Complx Class\n";
        cout<< "\n Give Real Part in the range -99.99 .. +99.99  =\n ";
		cout<< "\n Calling Read Float function to Read Real Part with Validation \n";
        F_Real = Read_Value (-99.99, 99.99); 
        cout<< " \n The Read in Real Part="<<F_Real<<"\n";
        
		cout<< "\n Give Imag. Part in the range -99.99 .. +99.99 = \n";
        cout<< "\n Calling Read Float function to Read Imaginary  Part with Validation \n";
        F_Imag = Read_Value (-99.99, 99.99); 
        cout<<" \n The Read in Imag Part="<<F_Imag<<"\n";

		cout <<"\n\n About to Compute Magnitude \n\n";

		F_Mag = sqrt(F_Real *F_Real + F_Imag * F_Imag);

		cout <<"\n\n The Computed Magnitude = " << F_Mag << "\n\n";



        cout<<"\n About to Exit from Read & Frame Complex Function of complx Class\n ";
        return;
    }//end Read_Complx
  /*******************************************/   
	void Complx_Class::VF_Display_Complx (void)
            {//begin Display_Complx
		        cout<<"\n Come Inside Display Complex Function of Complx Class \n ";
                cout << " \n Real Part= " << F_Real <<",";
                cout << " Imaginary Part=" << F_Imag <<"\n";
				cout <<" \n\n The Magnitude =" << F_Mag <<"\n";
				cout<<"\n About to Exit from Display Complex Function of Complx class\n ";
                return;
            }//end Display_Complx  
	
/***************************************************************/
    void  Complx_Class:: VF_Add_Complx (Complx_Class R_Complx_2_Obj, Complx_Class R_Complx_3_Obj)
    {//begin Add_Complx 
		cout <<"\n Come Inside Add_Complx Function of Complx Class\n";
        F_Real=R_Complx_2_Obj.F_Real + R_Complx_3_Obj.F_Real;
        F_Imag=R_Complx_2_Obj.F_Imag + R_Complx_3_Obj.F_Imag;

        cout <<"\n\n About to Compute Magnitude \n\n";
		
		F_Mag = sqrt(F_Real *F_Real + F_Imag * F_Imag);

		cout <<"\n\n The Computed Magnitude of the Resultant Complex Number  = " << F_Mag << "\n\n";

		cout <<" \n About to exit from Add_Complx Function of Complx Class\n";
        return;
    }//end Add_Complx
  /*******************************************/     
    void Complx_Class:: VF_Sub_Complx (Complx_Class R_Complx_2_Obj,Complx_Class R_Complx_3_Obj)
    {//begin Sub_Complx 
		cout <<"\n Come Inside Sub_Complx Function of complx Class\n";
        F_Real=R_Complx_2_Obj.F_Real - R_Complx_3_Obj.F_Real;
        F_Imag=R_Complx_2_Obj.F_Imag - R_Complx_3_Obj.F_Imag;	
		
		cout <<"\n\n About to Compute Magnitude \n\n";
		F_Mag = sqrt (F_Real *F_Real + F_Imag * F_Imag);

        cout <<"\n\n The Computed Magnitude of the Resultant Complex Number  = " << F_Mag << "\n\n";

        cout <<"\n About to exit from Sub_Complx Function of Complx Class\n";
        return;
    }//end Sub_Complx
  /*******************************************/     
   
    void Complx_Class ::VF_Mul_Complx (Complx_Class R_Complx_2_Obj,Complx_Class R_Complx_3_Obj)
    {//begin Mul_Complx 
        cout <<"\n Come Inside Mul_Complx Function of Complx Class\n";
        F_Real=R_Complx_2_Obj.F_Real * R_Complx_3_Obj.F_Real - R_Complx_2_Obj.F_Imag * R_Complx_3_Obj.F_Imag ;
        F_Imag=R_Complx_2_Obj.F_Real * R_Complx_3_Obj.F_Imag + R_Complx_3_Obj.F_Real * R_Complx_2_Obj.F_Imag;	
		
		cout <<"\n\n About to Compute Magnitude \n\n";
		F_Mag = sqrt (F_Real *F_Real + F_Imag * F_Imag);

        cout <<"\n\n The Computed Magnitude of the Resultant Complex Number  = " << F_Mag << "\n\n";

        cout <<" \n About to exit from Mul_Complx Function of Complx Class\n";
        return;
    }//end Mul_Complx
    /*******************************************/     
 


 int main() //  The Main Body
   { //begin main 
      // Create Objects & Initialize
     Complx_Class  A_Complx_Obj(0.0,0.0), B_Complx_Obj(0.0,0.0), C_Complx_Obj(0.0,0.0); // Will Automatically Construct & Initialise each

       cout <<"\n Starting Main Body of Complex Class \n";

       cout << " \n Give the 1st Complex No.\n" ;
       A_Complx_Obj.VF_Read_Frame_Complx (); 
        cout << " \n\n The 1st Complex No." ;
       A_Complx_Obj.VF_Display_Complx ();
       cout << " \n Give the 2nd Complex No.\n" ;
        B_Complx_Obj.VF_Read_Frame_Complx (); 
        cout << " \n\n The 2nd Complex No." ;
        B_Complx_Obj.VF_Display_Complx ();
       
       cout << " \n Adding Two Complex Numbers\n" ;
       C_Complx_Obj.VF_Add_Complx (A_Complx_Obj,B_Complx_Obj); 
        
       cout << " \n The Resultant  Complex No After ADDITION.\n" ;
       C_Complx_Obj.VF_Display_Complx ();
              
       cout << " \n Subtracting Two Complex Numbers\n" ;
       C_Complx_Obj.VF_Sub_Complx (A_Complx_Obj,B_Complx_Obj); 
       
       cout << " \n The Resultant  Complex No After SUBTRACTION\n"; 
       C_Complx_Obj.VF_Display_Complx ();
      
       
       cout << " \n Multiplying Two Complex Numbers\n" ;
       C_Complx_Obj.VF_Mul_Complx (A_Complx_Obj,B_Complx_Obj);
      

       cout << " \n The Resultant  Complex No After Multiplying\n"; 
       C_Complx_Obj. VF_Display_Complx ();
           
      cout <<"\n About to Finish Main Body of Complex Class \n";
       return(0);
   }//end main
