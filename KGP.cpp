/* Machine number : 36
File Name : P3601a.cpp

	Developed By :
	Name : Nabagata Saha
	E_Mail ID : ngsaha234@gmail.com
	Starting Date : 27 June 2017
	Target Completion Date : 
	Problem Statement :
*/

#include<iostream> //Streaming Input Output Library
#include<ctype.h> //Character Library
#include<stdio.h> // Standard I/O Library
#include<stdlib.h>
#include <math.h>
using namespace std; // All Names Carry Usual Meaning

int READ_INT(int,int);
char READ_CH(char,char);
float READ_REAL(float,float);

/*int main()
{ begin main 
	
	/*READ_CH('A','Z');
	return 0;
} end main */ 

int READ_INT(int I_Low,int I_High)
{/* begin function */
	int num;
	cout<<"\nEnter a number between "<<I_Low<<" and "<<I_High<<" : ";
	cin>>num; 
	if(num>I_Low && num<I_High)
	return num;
	while(num<I_Low || num>I_High)
	{	cout<<"\nThe given value = "<<num;
			cout<<" Lies outside the range 				"<<I_Low<<"-"<<I_High<<"\nTry again.Enter a number between "<<I_Low<<" and "<<I_High<<" : ";
		cin>>num;
		if(num>I_Low && num<I_High)
		return num;
	}
}/* end function */

char READ_CH(char Ch_Low, char Ch_High)
{/* begin function */
	char ch;
	cout<<"\nEnter a character between "<<Ch_Low<<" and "<<Ch_High<<" : ";
	cin>>ch;
	if(ch>Ch_Low && ch<Ch_High)
	return ch;
	else if(ch==' ')
	return ch;
	else if(ch=='$')
	exit(0);
	while(ch<Ch_Low || ch>Ch_High)
	{	cout<<"\nThe given value = "<<ch;
			cout<<" Lies outside the range 				"<<Ch_Low<<"-"<<Ch_High<<"\nTry again.Enter a character between "<<Ch_Low<<" and "<<Ch_High<<" : ";
		cin>>ch;
		if(ch>Ch_Low && ch<Ch_High)
		return ch;
		else if(ch==' ')
		return ch;
	}
}/* end function */

float READ_REAL(float F_Low,float F_High)
{/* begin function */
	float num;
	while(1)
	{	
		try
		{	cout<<"\nEnter a number between "<<F_Low<<" and "<<F_High<<" : ";
			cin>>num;
			if(num<F_Low || num>F_High)
				throw(num);
			else
				break;
		}
		catch(float)
		{	cout<<"\nThe given value = "<<num;
			cout<<"\nLies outside the range 				"<<F_Low<<"-"<<F_High<<"\nTry again.";
			continue;
		}
	}
	return num;
}/* end function */


int Check_Leap_Year(int);
void READ_DATE();
void READ_PAN();
void READ_AADHAAR();
void READ_ROLL();
void READ_NAME();

int Check_Leap_Year(int yr)
{
	
	if((yr%4==0) && (yr%100!=0))
	{
		cout<<"This is a Leap Year\n"; return 1;
	}
	else if(yr%100==0)
	{
		cout<<"This is not a Leap Year\n"; return 0;
	}
	else if(yr%400==0)
	{
		cout<<"This is a Leap Year\n"; return 1;
	}
	else
	{
		cout<<"This is not a Leap Year\n"; return 0;
	}
	
}

void READ_DATE()
{	
	cout<<"\nDATE ENTRY \n\n";
	int date;
	int year= READ_INT(1900,2000);
	int flag = Check_Leap_Year(year);
	int month = READ_INT(1,12);
	if(flag == 1)
	{	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		date = READ_INT(1,31);
		else if(month == 2)
		date = READ_INT(1,29);
		else
		date = READ_INT(1,30);
	}
	else
	{	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		date = READ_INT(1,31);
		else if(month == 2)
		date = READ_INT(1,28);
		else
		date = READ_INT(1,30);
	}
	cout<<"Entered date is : "<<date<<"/"<<month<<"/"<<year;
}

void READ_PAN()
{	char str[50];
	cout<<"\nPAN ENTRY \n\n";
	for(int i=0;i<=9;i++)
	{	if(i>=0 && i<=4)
		str[i]=READ_CH('A','Z');
		else if(i==9)
		str[i]=READ_CH('A','Z');
		else
		str[i]=READ_CH('0','9');
	}
	/*char a = READ_CH('A','Z');
	char b = READ_CH('A','Z');
	char c = READ_CH('A','Z');
	char d = READ_CH('A','Z');
	char e = READ_CH('A','Z');
	int f = READ_INT(0,9);
	int g = READ_INT(0,9);
	int h = READ_INT(0,9);
	int i = READ_INT(0,9);
	char j = READ_CH('A','Z');*/
	cout<<"Entered PAN is : "<<str;
}

	
void READ_AADHAAR()
{	char aadhaar[50];
	int i;
	cout<<"\nAADHAAR ENTRY \n\n";
	for( i=0;i<=11;i++)
	{	
		aadhaar[i]=READ_CH('0','9');
		//cout<<READ_INT(0,9);
	}
	aadhaar[i]='\0';
	/*int a = READ_INT(0,9);
	int b = READ_INT(0,9);
	int c = READ_INT(0,9);
	int d = READ_INT(0,9);
	int e = READ_INT(0,9);
	int f = READ_INT(0,9);	
	int g = READ_INT(0,9);
	int h = READ_INT(0,9);
	int i = READ_INT(0,9);
	int j = READ_INT(0,9);
	int k = READ_INT(0,9);
	int l = READ_INT(0,9);*/
	cout<<"Entered AADHAAR is : "<<aadhaar;
}

void READ_ROLL()
{	char str[50];
	cout<<"\nROLL ENTRY \n\n";
	for(int i=0;i<=9;i++)
	{	if(i>=2 && i<=3)
		str[i]=READ_CH('A','Z');
		else if(i>=0 && i<=1)
		str[i]=READ_CH('0','9');
		else
		str[i]=READ_CH('0','9');
	}
	/*int a = READ_INT(0,9);
	int b = READ_INT(0,9);
	char c = READ_CH('A','Z');
	char d = READ_CH('A','Z');
	int e = READ_INT(0,9);
	int f = READ_INT(0,9);
	int g = READ_INT(0,9);
	int h = READ_INT(0,9);*/
	cout<<"Entered ROLL is : "<<str;
}

void READ_NAME()
{	char ch;
	char str[50];
	int i=0;
	cout<<"\nNAME ENTRY \n\n";
	while(1)
	{	if(ch=='$')
		break;
		ch = READ_CH('A','Z');
		str[i]=ch;
	}
	cout<<"Entered name is :"<<str;
}

// Class to represent points.
class Point {
public:
       		float xval, yval;
public:
        // Constructor uses default arguments to allow calling with zero, one,
        // or two values.
        Point(float x = 0.0, float y = 0.0) {
                init_Point(x,y);
        }
        
        void init_Point(float x = 0.0, float y = 0.0){
        	xval = x;
            yval = y;
		}

	~ Point()
	{	cout<<"\nClass Point dies!";
	}

	Point (const Point &obj)
	{	
		xval = obj.xval;
		yval = obj.yval;
		
	}

	void read()
	{	// begin read
		cout<<"\nEnter x - co-ordinate (-99.99,99.99) : ";
		xval = READ_REAL(-99.99,99.99);
		cout<<"\nEnter y - co-ordinate (-99.99,99.99) : ";
		yval = READ_REAL(-99.99,99.99);
	} // end read
	
	void disp()
	{	// begin display func
		cout<<"\nx - co-ordinate = "<<xval;
		cout<<"\ny - co-ordinate = "<<yval;
		
	}// end display func

        // Extractors.
        float x() { return xval; }
        float y() { return yval; }

      /*  // Distance to another point.  Pythagorean thm.
        float dist(Point other) {
                float xd = xval - other.xval;
                float yd = yval - other.yval;
                return sqrt(xd*xd + yd*yd);
        }
       
        // Move the existing point.
        void move(float a, float b)
        {
                xval += a;
                yval += b;
        }

        // Print the point on the stream.  The class ostream is a base class
        // for output streams of various types.
        void print(ostream &strm)
        {
                strm << "(" << xval << "," << yval << ")";
        }
	
	
};

// Print a line of the form x op y = z, where x, y, and z are points. 
void prline(ostream &strm, Point x, char *op, Point y, Point z)
{
        x.print(strm);
        cout << " " << op << " ";
        y.print(strm);
        cout << " = ";
        z.print(strm);
        cout << endl; */
};



class Line {
public:
        Point start,end;
		float m, c, len;
public:
        // Constructor uses default arguments to allow calling with zero, one,
        // or two values.
        Line (float x = 0.0) 
		{
                initLine(x);
        }
        
        void initLine(float x = 0.0)
        {		
        		start.init_Point(x,x);
        		end.init_Point(x,x);
				len = sqrt(pow((start.xval-end.xval),2)+pow((start.yval-end.yval),2));
				m = (start.yval-end.yval)/(start.xval-end.xval);
				c = start.yval - m*start.xval;
		}

		~ Line()
		{	cout<<"\nClass Line dies!";
		}
	
	Line (const Line &obj)
	{	
		start = obj.start;
		end = obj.end;
		len = obj.len;
		m = obj.m;
		c = obj.c;
	}

	void read()
	{	// begin read
		cout<<"\nEnter x - co-ordinate of first point (-99.99,99.99) : ";
		start.xval = READ_REAL(-99.99,99.99);
		cout<<"\nEnter y - co-ordinate of first point (-99.99,99.99) : ";
		start.yval = READ_REAL(-99.99,99.99);
		cout<<"\nEnter x - co-ordinate of second point (-99.99,99.99) : ";
		end.xval = READ_REAL(-99.99,99.99);
		cout<<"\nEnter y - co-ordinate of second point (-99.99,99.99) : ";
		end.yval = READ_REAL(-99.99,99.99);
		compute_len();
		compute_m();
		compute_c();
	} // end read

	void disp()
	{	// begin display func
		cout<<"\nx - co-ordinate of first point = "<<start.xval;
		cout<<"\ny - co-ordinate of first point = "<<start.yval;
		cout<<"\nx - co-ordinate of second point = "<<end.xval;
		cout<<"\ny - co-ordinate of second point = "<<end.yval;
		cout<<"\n Length of line = "<<len;
		cout<<"\n m = "<<m;
		cout<<"\n c= "<<c;
		
	}// end display func

	void compute_len()
	{	
		len = sqrt(pow((start.xval-end.xval),2)+pow((start.yval-end.yval),2));
		//return len;
	}

	void compute_m()
	{	
		m = (start.yval-end.yval)/(start.xval-end.xval);
		//c = yval1 - m*xval1;
	}

	void compute_c()
	{	
		//m = (yval2-yval1)/(xval2-xval1);
		c = start.yval - m*start.xval;
	}

        // Extractors.
        float get_x1() { return start.xval; }
        float get_y1() { return start.yval; }
	float get_x2() { return end.xval; }
        float get_y2() { return end.yval; }

	

    /*    // Distance to another Line .  Pythagorean thm.
        float dist(Line other) {
                float xd = xval - other.xval;
                float yd = yval - other.yval;
                return sqrt(xd*xd + yd*yd);
        }

        // Add or subtract two Lines.
        Line add(Line b)
        {
                return Line (xval + b.xval, yval + b.yval);
        }
        Line sub(Line b)
        {
                return Line (xval - b.xval, yval - b.yval);
        }

        // Move the existing Line .
        void move(float a, float b)
        {
                xval += a;
                yval += b;
        }

        // Print the Line on the stream.  The class ostream is a base class
        // for output streams of various types.
        void print(ostream &strm)
        {
                strm << "(" << xval << "," << yval << ")";
        }
};

// Print a Line  of the form x op y = z, where x, y, and z are Line s. 
void prLine (ostream &strm, Line x, char *op, Line y, Line z)
{
        x.print(strm);
        cout << " " << op << " ";
        y.print(strm);
        cout << " = ";
        z.print(strm);
        cout << endl; */
};

class quad
{	
	private : Line obj[4];

	public : quad(float x=0.0)
			{	init_quad(x);
			}
			
			void init_quad(float x=0.0){
				int i;
				for(i=0;i<4;i++){
					obj[i].initLine(x);
				}
			}
			
			~quad(){
			}
			
			quad(const quad &obj1 ){
				int i;
				for(i=0;i<4;i++)
				{	obj[i].start = obj1.obj[i].start;
					obj[i].end = obj1.obj[i].end;
					obj[i].len = obj1.obj[i].len;
					obj[i].m = obj1.obj[i].m;
					obj[i].c = obj1.obj[i].c;	
				}	
		
			}
			
			void read_quad(){
				int i;
				for(i=0;i<4;i++)
				{	cout<<"\nEnter co-ordinates of points of line "<<i+1;
					obj[i].read();
				}
			}
			
			void compute_perimeter(){
				
				cout<<"\nPerimeter is "<< obj[0].len+obj[1].len+obj[2].len+obj[3].len;
			}
			
			void compute_area(){
				
				float area;
				area =  0.5 * abs(obj[0].start.xval*obj[1].start.yval+obj[1].start.xval*obj[2].start.yval+obj[2].start.xval*obj[3].start.yval + obj[3].start.xval*obj[0].start.yval - obj[1].start.xval*obj[0].start.yval - obj[2].start.xval*obj[1].start.yval - obj[3].start.xval*obj[2].start.yval - obj[0].start.xval*obj[3].start.yval );
				cout<<"\nArea is "<<area;
			}
};

int main() 
{
        // Some Quadrilaterals.
        quad obj1(0.0),obj2(0.0);
        obj1.read_quad();
        obj1.compute_perimeter();
        obj1.compute_area();
        
	return 0;
}

       

       

