#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void guessLang(int x, int &count){
    if(x==1){
        cout<<"#include <stdio.h>\nint main(){\n\tprintf(\"Hello World\");\n\treturn 0;\n}"<<endl;
        cout<<"1.GO"<<endl;
        cout<<"2.Python"<<endl;
        cout<<"3.C++"<<endl;
        cout<<"4.C\n"<<endl;
        int res;
        cin>>res;
        if(res==4){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was C."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if (x==2){
        cout<<"#include <iostream>\nusing namespace std;\nint main(){\n\tcout<<\"Hello World\";\n\treturn 0;\n}"<<endl;
        cout<<"1.C++"<<endl;
        cout<<"2.C"<<endl;
        cout<<"3.Kotlin"<<endl;
        cout<<"4.C#\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was C++."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==3){
        cout<<"IDENTIFICATION DIVISION.\nPROGRAM-ID. Hello-world.\nPROCEDURE DIVISION.\n\tDISPLAY \"Hello World\""<<endl;
        cout<<"1.Scala"<<endl;
        cout<<"2.Java"<<endl;
        cout<<"3.C#"<<endl;
        cout<<"4.COBOL\n"<<endl;
        int res;
        cin>>res;
        if(res==4){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was COBOL."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==4){
        cout<<"object HelloWorld extends App {\n\tprintIn(\"Hello World\")\n}"<<endl;
        cout<<"1.Scala"<<endl;
        cout<<"2.C++"<<endl;
        cout<<"3.Matlab"<<endl;
        cout<<"4.Stack\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Scala."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==5){
        cout<<"disp('Hello World');"<<endl;
        cout<<"1.Java"<<endl;
        cout<<"2.Matlab"<<endl;
        cout<<"3.Kotlin"<<endl;
        cout<<"4.C#\n"<<endl;
        int res;
        cin>>res;
        if(res==2){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Matlab."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==6){
        cout<<"namespace HelloWorld\n{\n\tclass Hello {\n\t\tstatic void Main(string[] args)\n\t\t{\n\t\t\tSystem.Console.WriteLine(\"Hello World\");\n\t\t}\n\t}\n}"<<endl;
        cout<<"1.Dart"<<endl;
        cout<<"2.Delphi"<<endl;
        cout<<"3.MongoDB"<<endl;
        cout<<"4.C#\n"<<endl;
        int res;
        cin>>res;
        if(res==4){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was C#."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==7){
        cout<<"console.lof 'Hello World'"<<endl;
        cout<<"1.Dart"<<endl;
        cout<<"2.Delphi"<<endl;
        cout<<"3.CoffeeScript"<<endl;
        cout<<"4.HTML\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was CoffeeScript."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==8){
        cout<<"program HelloWorld;\nbegin\n\tWriteLn('Hello World');\nend."<<endl;
        cout<<"1.Dart"<<endl;
        cout<<"2.Delphi"<<endl;
        cout<<"3.CoffeeScript"<<endl;
        cout<<"4.Java\n"<<endl;
        int res;
        cin>>res;
        if(res==2){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Delphi."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==9){
        cout<<"main(){\n\tprint('Hello World');\n}"<<endl;
        cout<<"1.Dart"<<endl;
        cout<<"2.Pascal"<<endl;
        cout<<"3.Haskell"<<endl;
        cout<<"4.Java\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Dart."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==10){
        cout<<"module Main where\n\nmain :: IO ()\nmain = putStrLn \"Hello World\""<<endl;
        cout<<"1.Python"<<endl;
        cout<<"2.Ruby"<<endl;
        cout<<"3.Haskell"<<endl;
        cout<<"4.R\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Haskell."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==11){
        cout<<"program Hello;\nbegin\n\twriteln ('Hello, world.');\nend."<<endl;
        cout<<"1.Pascal"<<endl;
        cout<<"2.Ruby"<<endl;
        cout<<"3.Haskell"<<endl;
        cout<<"4.Matlab\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Pascal."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }    

    else if(x==12){
        cout<<"puts 'Hello World'"<<endl;
        cout<<"1.Pascal"<<endl;
        cout<<"2.Ruby"<<endl;
        cout<<"3.Haskell"<<endl;
        cout<<"4.Matlab\n"<<endl;
        int res;
        cin>>res;
        if(res==2){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Ruby."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==13){
        cout<<"print(\"Hello World\")"<<endl;
        cout<<"1.Java"<<endl;
        cout<<"2.Python"<<endl;
        cout<<"3.PHP"<<endl;
        cout<<"4.Matlab\n"<<endl;
        int res;
        cin>>res;
        if(res==2){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Python."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==14){
        cout<<"\tglobal _main\n\textern _printf\n\n\tsection .text\n_main:\n\tpush    message\n\tcall    _printf\n\tadd        esp, 4\nmessage:\n\tdb    'Hello World', 10, 0"<<endl;
        cout<<"1.Swift"<<endl;
        cout<<"2.Dart"<<endl;
        cout<<"3.Assembly"<<endl;
        cout<<"4.Kotlin\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Assembly."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==15){
        cout<<"cat('Hello World')"<<endl;
        cout<<"1.R"<<endl;
        cout<<"2.Dart"<<endl;
        cout<<"3.Assembly"<<endl;
        cout<<"4.Kotlin\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was R."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==16){
        cout<<"println('Hello World');"<<endl;
        cout<<"1.R"<<endl;
        cout<<"2.Dart"<<endl;
        cout<<"3.Assembly"<<endl;
        cout<<"4.Swift\n"<<endl;
        int res;
        cin>>res;
        if(res==4){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Swift."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==17){
        cout<<"fun main(args: Array<String>){\n\tprintln(\"Hello World\")\n}"<<endl;
        cout<<"1.R"<<endl;
        cout<<"2.F#"<<endl;
        cout<<"3.Kotlin"<<endl;
        cout<<"4.Swift\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Kotlin."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==18){
        cout<<"echo \"Hello World\";"<<endl;
        cout<<"1.R"<<endl;
        cout<<"2.F#"<<endl;
        cout<<"3.Kotlin"<<endl;
        cout<<"4.PHP\n"<<endl;
        int res;
        cin>>res;
        if(res==4){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was PHP."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }

    else if(x==19){
        cout<<"import java.io.*;\n\nclass HelloWorld {\n\tpublic static void main (String[] args) {\n\t\tSystem.out.println(\"Hello World\");\n\t}\n}"<<endl;
        cout<<"1.Java"<<endl;
        cout<<"2.F#"<<endl;
        cout<<"3.C#"<<endl;
        cout<<"4.PHP\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Java."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==20){
        cout<<"println(\"Hello World\");"<<endl;
        cout<<"1.GO"<<endl;
        cout<<"2.F#"<<endl;
        cout<<"3.C#"<<endl;
        cout<<"4.PHP\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was GO."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==21){
        cout<<"printfn \"Hello World\""<<endl;
        cout<<"1.Java"<<endl;
        cout<<"2.F#"<<endl;
        cout<<"3.C#"<<endl;
        cout<<"4.Lisp\n"<<endl;
        int res;
        cin>>res;
        if(res==2){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was F#."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==22){
        cout<<"(print \"Hello World\")"<<endl;
        cout<<"1.Java"<<endl;
        cout<<"2.Lisp"<<endl;
        cout<<"3.C#"<<endl;
        cout<<"4.CPP\n"<<endl;
        int res;
        cin>>res;
        if(res==2){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Lisp."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==23){
        cout<<"console.log(\"Hello World\");"<<endl;
        cout<<"1.Java"<<endl;
        cout<<"2.Lisp"<<endl;
        cout<<"3.Javascript"<<endl;
        cout<<"4.CPP\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Javascript."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==24){
        cout<<"BEGIN DISPLAY(\"Hello World\") END."<<endl;
        cout<<"1.ALGOL"<<endl;
        cout<<"2.Lisp"<<endl;
        cout<<"3.Javascript"<<endl;
        cout<<"4.CPP\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was ALGOL."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==25){
        cout<<"#!/usr/bin/perl\nprint \"Hello World\";"<<endl;
        cout<<"1.Matlab"<<endl;
        cout<<"2.F#"<<endl;
        cout<<"3.Perl"<<endl;
        cout<<"4.Bash\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Perl."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==26){
        cout<<"puts \"Hello World\""<<endl;
        cout<<"1.F#"<<endl;
        cout<<"2.R"<<endl;
        cout<<"3.TCL"<<endl;
        cout<<"4.C#\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was TCL."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==27){
        cout<<"console.log 'Hello World'"<<endl;
        cout<<"1.Java"<<endl;
        cout<<"2.TypeScript"<<endl;
        cout<<"3.Javascript"<<endl;
        cout<<"4.Kotlin\n"<<endl;
        int res;
        cin>>res;
        if(res==2){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Typescript."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==28){
        cout<<"program helloworld\n\tprint *, \"Hello World\"\nend program helloworld"<<endl;
        cout<<"1.C#"<<endl;
        cout<<"2.R"<<endl;
        cout<<"3.Fortran"<<endl;
        cout<<"4.CPP\n"<<endl;
        int res;
        cin>>res;
        if(res==3){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Fortran."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==29){
        cout<<"echo \"Hello World\""<<endl;
        cout<<"1.Bash"<<endl;
        cout<<"2.Lisp"<<endl;
        cout<<"3.Dart"<<endl;
        cout<<"4.Delphi\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was Bash."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
    
    else if(x==30){
        cout<<"<!DOCTYPE html>\n<html>\n <head>\n </head>\n <body>\n\t<h1>Hello World<h1>\n </body>\n</html>"<<endl;
        cout<<"1.HTML"<<endl;
        cout<<"2.Typescript"<<endl;
        cout<<"3.Javascript"<<endl;
        cout<<"4.Shell\n"<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"======================================================="<<endl;
            cout<<"You are right!"<<endl;
            cout<<"=======================================================\n"<<endl;
        
            (count)++;
        }   
        else{
            cout<<"======================================================="<<endl;
            cout<<"You are wrong!, the answer was HTML."<<endl;
            cout<<"=======================================================\n"<<endl;
        }
        Sleep(2000);
    }
}

int main(){
    cout<<"======================================================="<<endl;
    cout<<"Welcome to Guess the Language!!"<<endl;
    cout<<"======================================================="<<endl;
    cout<<"The Rules are: "<<endl;
    cout<<"1. You have to guess the language of the code snippet."<<endl;
    cout<<"Fairly Simple, Right?"<<endl;
    cout<<"Enter the number of Rounds : ";
    int rounds;
    cin>>rounds;
    cout<<"So let's start!"<<endl;
    cout<<"======================================================="<<endl;
    Sleep(5000);
    srand(time(0));
    int count=0;
    int *ptr=&count;
    float x=0;
    vector <int> vec;
    for(int i=0;i<rounds;i++){
        start:
        x=rand();
        int count=0;
        x=ceil((x/RAND_MAX * 30));
        if(find(vec.begin(),vec.end(),x)==vec.end()){
            guessLang(x,*ptr);
            vec.push_back(x);
        }
        else{
            goto start;
        }
    }
    cout<<"======================================================="<<endl;
    cout<<"Game End"<<endl;
    cout<<"You have guessed "<<count<<" out of "<<rounds<<" languages."<<endl;
    cout<<"Your Score is "<<((float)count/(float)rounds)*100<<"%."<<endl;
    cout<<"======================================================="<<endl;
}