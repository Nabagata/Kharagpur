#include <iostream>
#include <Complx_Class.h> // Including Complx_Class as a Component

using namespace std;

const unsigned CUI_MAXSIZE= 3;

enum PROC_CHOICE { ADD, SUB, MUL };


 class Array_Class 
 {//begin Array _Class
       private:
          unsigned int UI_ASIZE;
          Complx_Class  ARY_Complx_Obj[CUI_MAXSIZE];
       public:
   Array_Class(unsigned UI_Size=0) // Felexibility to Specify a  Different Size 
         {//begin Constructor 
			 unsigned int UI_Idx=0;
			  
			 cout<<"\n Come inside Array Class Constructor \n";
             UI_ASIZE=UI_Size;
             
             for(UI_Idx=0; UI_Idx<UI_ASIZE; UI_Idx++)
             {//begin for#1
	       cout <<"\n Constructing the "<< UI_Idx+1 <<"th Array object\n ";
	       ARY_Complx_Obj[UI_Idx].VF_Init_Complx(0.0,0.0);; 
             }//end for#1

			 cout <<"\n About to come out of Array Class Constructor \n ";
         }//end constructor
   
        ~Array_Class() // The Destructor 
			 {//begin Destructor 
				 cout << "\n Have come inside Array DESTRUCTOR \n";
			 }//end Destructor

  
   
		/** Other Function Declarations ***/

		void VF_Read_Array(void);
		void VF_Display_Array (void);
		unsigned UIF_Get_Array_Size (Array_Class);
   	    void VF_Proc_Array (PROC_CHOICE,Array_Class,Array_Class);
 };//end Array_Class
 /**** Function Definitions *******/

 /******************************************************************************/
 void Array_Class::VF_Read_Array(void)
         {//begin Read_Array
			 unsigned UI_Idx;
			 cout <<"\n Come Inside Read Complex Array Function \n";
              
              for(UI_Idx=0; UI_Idx<UI_ASIZE; UI_Idx++) 
			  {//begin for#1
			    cout << "\n Reading the "<< UI_Idx+1 <<" th Complex Number for Position within the complx array class\n";

                   ARY_Complx_Obj[UI_Idx].VF_Read_Frame_Complx(); 
              } //end for#1
			  cout << "\n About to come out of Read Complex Array Function\n";
			  return;
         }//end Read_Array
 /*******************************************************************************/        
 void  Array_Class::VF_Display_Array(void)
         {//begin Display_array

             unsigned UI_Idx;
			 cout <<"\n Come Inside Display Complex Array Function \n";
          	
			 for(UI_Idx=0; UI_Idx<UI_ASIZE; UI_Idx++) 
			 {//begin for#1
                       cout << "\n Displaying the "<< UI_Idx+1 <<" th Complex Number within the Complx Array class\n";

                       ARY_Complx_Obj[UI_Idx].VF_Display_Complx ();
              }//end for#1 
              cout << "\n About to come out of Display Complex Array Function\n";
			  return;
         }//end Display_Array        
   
 
 /******************************************************************************/
 void Array_Class::VF_Proc_Array(PROC_CHOICE Enum_Choice, Array_Class A_Complx_Obj, Array_Class B_Complx_Obj)
         {//begin Proc Array
              unsigned UI_Idx; 
			    	          

              switch (Enum_Choice)
              {//begin switch #1
                  case ADD: // DO ADDITION
					  {//begin ADD Block 
						  cout <<"\n Choice is Addition\n ";

                            for(UI_Idx=0; UI_Idx<A_Complx_Obj.UI_ASIZE; UI_Idx++)

                            {//begin for#1 
								
								cout << "\n The First Complex Number used in ADDITION the" << UI_Idx+1 << "th Element of Array Object A \n";
								
								A_Complx_Obj.ARY_Complx_Obj[UI_Idx].VF_Display_Complx();
								
								cout << "\n The Second Complex Number being ADDED with the First one the " << UI_Idx+1 << "th Element of Array Object B \n";

								B_Complx_Obj.ARY_Complx_Obj[UI_Idx].VF_Display_Complx();


                                 ARY_Complx_Obj[UI_Idx].VF_Add_Complx(A_Complx_Obj.ARY_Complx_Obj[UI_Idx],B_Complx_Obj.ARY_Complx_Obj[UI_Idx]);

		 	                    cout <<"\n The"<< UI_Idx+1 <<" th  Element of Array Object C generated AFTER ADDING First with Second = \n";

                                 ARY_Complx_Obj[UI_Idx].VF_Display_Complx();

						
							}//end for#1
                            break;
					  }//end ADD Block

                  case SUB: // DO SUBTRACTION
					  {//begin Sub_Block 
                      	  cout <<"\n Choice is Subtraction\n ";

                          for(UI_Idx=0; UI_Idx< A_Complx_Obj.UI_ASIZE; UI_Idx++)
                            {//begin for#1 

 	                             cout << "\n The First Complex Number used in SUBTRACTION the" << UI_Idx+1 << "th Element of Array Object A \n";
								
								A_Complx_Obj.ARY_Complx_Obj[UI_Idx].VF_Display_Complx();
								
								cout << "\n The Second Complex Number being SUBTRACTED from the First One the" << UI_Idx+1 << "th Element of Array Object B \n";

								B_Complx_Obj.ARY_Complx_Obj[UI_Idx].VF_Display_Complx();

                              ARY_Complx_Obj[UI_Idx].VF_Sub_Complx(A_Complx_Obj.ARY_Complx_Obj[UI_Idx],B_Complx_Obj.ARY_Complx_Obj[UI_Idx]);

			                  cout <<"\n The"<< UI_Idx+1 <<" th  Element of Array Object C generated AFTER SUBTRACTING Second FROM First = \n";

                              ARY_Complx_Obj[UI_Idx].VF_Display_Complx();
						
							}//end for#1
                            
					  }//end Sub Block
                           
                  case MUL: // DO MULTIPLICATION
                      
                         {//begin MUL_Block 
                      	  cout <<"\n Choice is Multiplication\n ";

                          for(UI_Idx=0; UI_Idx<A_Complx_Obj.UI_ASIZE; UI_Idx++)
                            {//begin for#1 
                              
							     cout << "\n The First Complex Number used in MULTIPLICATION the" << UI_Idx+1 << "th Element of Array Object A \n";
								
								A_Complx_Obj.ARY_Complx_Obj[UI_Idx].VF_Display_Complx();
								
								cout << "\n The Second Complex Number being MULTIPLIED with the First one the " << UI_Idx+1 << "th Element of Array Object B \n";

								B_Complx_Obj.ARY_Complx_Obj[UI_Idx].VF_Display_Complx();
							   
                               ARY_Complx_Obj[UI_Idx].VF_Mul_Complx(A_Complx_Obj.ARY_Complx_Obj[UI_Idx],B_Complx_Obj.ARY_Complx_Obj[UI_Idx]);

			                   cout <<"\n The"<< UI_Idx+1 <<" th  Element of Array Object C generated AFTER MULTIPLYING First with Second = \n";

                               ARY_Complx_Obj[UI_Idx].VF_Display_Complx();
							}//end for#1                          
                            break;
					  }//end MUL Block   
              }//end switch #1  
	      return;
         }//end Proc Array         
           
 /*****************************************************************************************************/

 int main() //  The Main Body
   { //begin main 
      // Create Objects & Initialize

	  cout <<"\n Starting main for Complex Array \n";
     
	  Array_Class A_Complx_1_Obj(2), A_Complx_2_Obj(2), A_Complx_3_Obj(2);

       	   cout <<"\n Reading the 1st Array \n";
       
       A_Complx_1_Obj.VF_Read_Array();

       cout <<"\n Displaying the 1st Array Class\n";

       A_Complx_1_Obj.VF_Display_Array();
	   
	   cout <<"\n Reading the 2nd Array \n";
              
	   A_Complx_2_Obj.VF_Read_Array();

       cout <<"\n Displaying the 2nd Array \n";

       A_Complx_2_Obj.VF_Display_Array();

         cout <<"\n Adding the First and 2nd Arrays to Produce the 3rd Array \n ";

	  A_Complx_3_Obj.VF_Proc_Array(ADD,A_Complx_1_Obj,A_Complx_2_Obj);

       cout <<"\n Displaying the 3rd Array AFTER Adding 1st & 2nd Array \n";
       
       A_Complx_3_Obj.VF_Display_Array();

         cout <<"\n Subtracting the 2nd Array from the First to Produce the 3rd Array \n ";

	  A_Complx_3_Obj.VF_Proc_Array(SUB,A_Complx_1_Obj,A_Complx_2_Obj);

       cout <<"\n Displaying the 3rd Array AFTER Subtracting the 2nd Array from the 1st Array \n";
       
       A_Complx_3_Obj.VF_Display_Array();

       cout <<"\n Multiplying the First and 2nd Arrays to Produce the 3rd Array \n ";

	  A_Complx_3_Obj.VF_Proc_Array(MUL,A_Complx_1_Obj,A_Complx_2_Obj);

       cout <<"\n Displaying the 3rd Array AFTER Multiplying 1st & 2nd Array \n";
       
       A_Complx_3_Obj.VF_Display_Array();
          
       cout <<"\n Finishing main \n";

       return(0);
   }//end main
