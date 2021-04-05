#include "Board.hpp"
#include <iostream>
#include <string>
#include <map>
#include "Direction.hpp"

namespace ariel
{
    
Board::Board() {
}

void Board::post(unsigned int i , unsigned int j ,ariel::Direction d, std::string ad){
    unsigned int q=0;
    if(d==ariel::Direction::Horizontal){
        for(std::string::iterator it = ad.begin(); it != ad.end(); ++it,q++) {
            m[i][j+q]=*it;
        }
    }
    else{ //its Vertical
        q=0;
        for(std::string::iterator it = ad.begin(); it != ad.end(); ++it,q++) {
            m[i+q][j]=*it;
        }
    }
}

std::string Board::read(unsigned int i , unsigned int j ,ariel::Direction d, unsigned int len){
    std::string s="";
    std::map<unsigned int,std::map<unsigned int,char>>::iterator it1;
    std::map<unsigned int,char>::iterator it2;
    unsigned int q;
    if(d==ariel::Direction::Horizontal){
        for(q=0;q<len;q++){
            it1= m.find(i);
            it2= m[i].find(j+q);
            if(it1 != m.end() && it2 !=m[i].end()){
                s+=m[i][j+q];
            }
            else{ //index m[i][j+q] not found or is empty
                s+='_';
            }
        }
    }
    else{ // Read in Vertical mode
        for(q=0;q<len;q++){
                it1= m.find(i+q);
                it2= m[i+q].find(j);
                if(it1 != m.end() && it2 !=m[i+q].end()){
                    s+=m[i+q][j];
                }
                else{ //index m[i][j+q] not found or is empty
                    s+='_';
                }
            }
    }
    return s;
}
void Board::show(){
    const unsigned int ten=10;
    std::map<unsigned int,std::map<unsigned int,char>>::iterator it1;
    std::map<unsigned int,char>::iterator it2;
    unsigned int i,j;
    for(i=0;i<ten;i++){
        for(j=0;j<ten;j++){
            it1= m.find(i);
            it2= m[i].find(j);
            if(it1 != m.end() && it2 !=m[i].end()){
                std::cout<<m[i][j]<<" ";
            }
            else{ //index m[i][j] not found or is empty
                std::cout<<"_"<<" ";
            }
        }
        std::cout<<std::endl;
    }
}


}