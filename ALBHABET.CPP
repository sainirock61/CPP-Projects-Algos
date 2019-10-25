/*  WAP that prints a table indicating the number of occurences of each alphabet in the text entered as command line
       arguements.*/
 <section id="workshop" class="section-padding">
      <div class="container">
        <div class="row">
          <div class="col-12">
            <div class="section-title-header text-center">
              <h1 class="section-title wow fadeInUp" data-wow-delay="0.2s">Workshops</h1>
              <p class="wow fadeInDown" data-wow-delay="0.2s">Learn From Industry Experts</p>
            </div>
          </div>
        </div>
        <div class="row">
          <div class="col-xs-12 col-md-6 col-lg-6">
            <div class="about-item">
              <img class="img-fluid" src="assets/img/about/img1.jpg" alt="">
              <div class="about-text">
                <h3><a href="#">Coding Ninja</a></h3>
                <p>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.<br>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.</p>
              
              </div>
            </div>
          </div>
          <div class="col-xs-12 col-md-6 col-lg-6">
            <div class="about-item">
              <img class="img-fluid" src="assets/img/about/img2.jpg" alt="">
              <div class="about-text">
                <h3><a href="#">Andriod Development</a></h3>
                <p>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.<br>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.</p>
                
              </div>
            </div>
          </div>
          <div class="col-xs-12 col-md-6 col-lg-6">
            <div class="about-item">
              <img class="img-fluid" src="assets/img/about/img3.jpg" alt="">
              <div class="about-text">
                <h3><a href="#">Machine Learning</a></h3>
                <p>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.<br>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.</p>
               
              </div>
            </div>
          </div>
		  <div class="col-xs-12 col-md-6 col-lg-6">
            <div class="about-item">
              <img class="img-fluid" src="assets/img/about/img3.jpg" alt="">
              <div class="about-text">
                <h3><a href="#">Ethical Hacking</a></h3>
                <p>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.<br>Lorem ipsum dolor sit amet, consectetuer commodo ligula eget dolor.</p>
              
              </div>
            </div>
          </div>
		  
        </div>
		<br><br>
		<div class="row">
		<div class="col-md-12 text-center">
            <a href="#" class="btn btn-common">Register</a>
          </div>
		</div>
      </div>
    </section>
	

#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    system("color f3");
    string str="";
    static int alphabet[26];
    int x;
    cout<<"\n\nCommand-Line Arguement\n";
    for(int i=0;i<argc;i++)
    {
        cout<<"\n"<<argv[i];
        str+=argv[i];
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            x=((int)str[i])-65;
            alphabet[x]++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            x=((int)str[i])-97;
            alphabet[x]++;
        }
    }
    //Displaying number of occurences of each alphabets in the command line arguement
    cout<<"\n\n~~~~~~~~~~~~~\n Alphabet number of occurences\n~~~~~~~~~~~~~~";
    for(int i=0;i<26;i++)
    {
        cout<<"\n"<<(char)(65+i)<<" "<<alphabet[i];
    }
    system("pause");
    return 0;
	  static int alphabet[26];
    int x;
    cout<<"\n\nCommand-Line Arguement\n";
    for(int i=0;i<argc;i++)
    {
}
col-md-6 col-lg-6">
            <div class="about-item">
              <img class="img-fluid" src="assets/img/about/img2.jpg" alt="">
              <div class="about-text">
