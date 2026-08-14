#include<iostream>
using namespace std;

struct song{
	string title;
	song* next;
	song*prev;
	
	song(string t){
	
	title = t;
	next =NULL;
	prev =NULL;
}
};

class playlist{
	private:
		song* head;
		song* tail;
		song*current;
		
	public:
	playlist()
	{
		head =tail =current =NULL;
		}	
	
	void addsong(string title)
	{
		song* newsong =new song(title);
		
		if(head ==NULL){
			head =tail =current =newsong;
			
		}
		else{
			tail->next= newsong;
			newsong->prev =tail;
			tail =newsong;
			
		}
		}	
		void nextsong(){
		
		if (current!= NULL && current->next !=NULL)
    }
	else{
		cout<<"ALREADY AT THE LAST SONG/n";
		
	}	
}
   void previoussong()
   {
   	if(current !=NULL && current->prev !=NULL)
   	{
   		current=current->prev;
   		cout<<"playing:"<<current->title<<endl;
   		
	   }
	   else{
	   	cout<<"ALREADY AT FIRST SONG.\n";
	   	
	   }
   }
    void displayforward()
    {
    	song* temp =head;
    	cout<<"/n playlist (forword):";
    	while(temp != NULL)
    	{
    		cout<<temp->title<<"->";
			temp =temp ->next;
					}
		cout<<"NULL /n";			
	}
	void displayBackword()
	{
		song *temp= tail;
		
		cout<<"playlist(Backword):";
		while(temp != NULL){
			cout<<temp ->title<<"->";
			temp =temp ->temp->prev;
		}
		cout<<"NULL /n";
	}
	void currentSong()
	{if(current != NULL)
	cout<< "currentsong:"<<current->title<<endl;
	else 
	cout<< "playlist is empty./n";
	}
	
	playlist(){
		song* temp =head;
		
		while(temp!= NULL)
		{
			song*next =temp ->next;
			delete temp;
			temp =next;
		}
	}
};
int main ()
{
	playlist playlist;
	
	playlist.addsong("");
	playlist.addsong("");
	playlist.addsong("");
	return 0;
}
