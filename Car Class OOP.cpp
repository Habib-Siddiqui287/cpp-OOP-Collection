#include<iostream>
using namespace std;
class car
{
	private:
	char direction;
	int position;
	public:
		car(char dir,int pos)
		{
			direction =dir;
			position =pos;
		}
		void Turn()
		{
			if(direction=='E')direction=='S';
			else if(direction=='S')direction=='W';
			else if(direction=='W')direction=='N';
			else if(direction=='N')direction=='E';
		}
		void Turn(char newdir)
		{
			direction = newdir;
		}
		void move(int dist)
		{
			position=position+dist;
		}
		void show()
		{
			cout<<"Direction: "<<direction<<" Position: "<<position<<endl;
		}
};
int main()
{
	car c('E',0);
	c.move(10);
	c.Turn();
	c.show();
	c.Turn('N');
	c.move(5);
	c.show();
}
