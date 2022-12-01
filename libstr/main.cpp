#include<iostream>
#include<string.h>

#define ENDL "\n"

using namespace std;
class str{
  private:
    //int len;
    // length will also be there in here
  char* ptr;
  char* get_str(){
    return ptr; 
  }
 
  // friend function in here
  friend void kite(str&,const char*); 
  friend void chine(str& a,int len = 5){
    char ui[len];
    cin>>ui;
    //gets(ui);  
    int lewn = strlen(ui);
    a.ptr = new char[lewn];
    for(int i = 0; i < lewn;i++){
      a.ptr[i] = ui[i];
    }
  }
  
  // at last we ae going to overload the main thing
  // such as cin operator 

  public:
    str(){}
    str(const char* as){
      int len = strlen(as);
      ptr = new char[len];
      for(int i = 0;i < len;i++){
        ptr[i] = as[i];
      }
    } 
    
    //copy constructor 
    void operator = (str& a){
      int len = strlen(a.ptr);
      ptr = new char[len];
      for(int i = 0;i < len; i++)
      {
        ptr[i] = a.ptr[i];
      } 
    }

    // making the equal operator in here    
    str& operator = (const char* s){
         int len = strlen(s);
         ptr = new char[len];
         for(int i = 0;i < len;i++){
           ptr[i] = s[i];
         }
         return *this;
     }

    // indexed mut
    char& operator [] (int i){
       return ptr[i]; 
     }

    //>> operator overloading in here
    str& operator << (const char* a){
      int k = 0;
       int len = strlen(ptr) + strlen(a);
      char* ne = new char[len];
      for(int i = 0;i < strlen(ptr);i++){
        ne[i] = ptr[i];
       k++;
      } 
      delete ptr;
      for(int i = 0;i < strlen(a);i++){
        ne[k] = a[i];
        k++;
      }
      ptr = ne;
      return *this;
    }

    // debug print
    void sprints(){
      cout << ptr << endl;
    }
    // destructor
    ~str(){ 
      cout << "deleting the stuff in here" << endl;
      delete ptr;
    } 
};

void kite(str& a,const char* as = " "){
    if(!strcmp(as,"\n") || !strcmp(as," ")){
       cout << a.ptr << as;
    }
    else{
      cout << "Invalid argument passed" << endl;
    }
}

int main()
{
  str a;
}
