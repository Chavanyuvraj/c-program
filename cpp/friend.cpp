  #include<iostream>
         using namespace std;
         class y;

         class x{
            int data;
            public:
            void setvalue(int value){
            }
                 friend void add(x,y);
         };

           class y{
            int num;
            public:
            void setvalue(int value){
                num=value;
            }
            friend void add(x,y);
         };
    void add (x o1,y o2){
        cout<<"summing data of x and y ojects given me"<<o1.data+o2.num;
    }
         int main{
            x a;
            a.setvalue(3);
            y b;

            b.setvalue(5);

            add(a , b);

            return 0;

         }       
