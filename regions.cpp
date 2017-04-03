#include <iostream>
#include <cv.h>
#include <highgui.h>
#include <math.h>
using namespace cv;
using namespace std;
int main(int, char**){
  Mat image;
    int xP1,xP2,yP1,yP2;
  //Primeiro Ponto 
  cout<< "Digite os pontos P1 e P2"<<endl;
  cout<< "X de P1: "<<endl;
  cin>> xP1;
  cout<< "Y de P1: "<<endl;
  cin>> yP1;
  cout<< "P1 = ("<<xP1<<","<<yP1<<")"<<endl;
  //Segundo Ponto
  cout<< "X de P2: "<<endl;
  cin>> xP2;
  cout<< "Y de P2: "<<endl;
  cin>> yP2;
  cout<< "P2 = ("<<xP2<<","<<yP2<<")"<<endl;
  //Load da Imagem
  image= imread("biel.png",CV_LOAD_IMAGE_GRAYSCALE);
  //Negativo
  for(int i=xP1;i<xP2;i++){
    for(int j=yP1;j<yP2;j++){
      image.at<uchar>(i,j)= 255 - image.at<uchar>(i,j);
    }
  }
  //Mostrar a imagem
  imshow("janela", image);  
  waitKey();
  return 0;
}
