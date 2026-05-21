#include <iostream>
using namespace std;

    class Mattina {
        public:
        void inizioMattinata (){
            colazione();
            vestiti();
        }
        virtual void colazione (){
            cout << "mangia latte e biscotti \n";
        };
        virtual void vestiti (){
            cout << " indossa maglietta e pantaloni \n";
        };
       



        };


    class Cane : public Mattina {
            public:
            void colazione() override{
                cout<<"mangia croccantini \n";
            }  
            void vestiti () override {
                cout<<" si mette il guinzaglio \n ";
            };
    
        };
    
    class Coniglio : public Mattina {
        public:
        void colazione(){
            cout<<"mangia le carote \n";
        }
        void vestiti (){
            cout<<"indossa la pettorina \n";
        };

    };
    int main (){
        Mattina* animale1= new Cane();
        Mattina* animale2= new Coniglio();
        
        cout<<"---MATTINA DEL CANE---\n";
            animale1->inizioMattinata();
        cout<<"\n";

        cout<<"---MATTINA DEL CONIGLIO---\n";
            animale2->inizioMattinata();
        
 
            return 0;
    }