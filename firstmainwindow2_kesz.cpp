//#ifndef FIRSTMAINWINDOW_kesz.cpp
//#define FIRSTMAINWINDOW.cpp
//TABLEok feltoltesenek KEZDESE:

void FirstMainWindow::tablakat_keszit_feltolt(){

    //Tabla 1 mainTable  memfoglalasa es oszlopok definilalasa KEZDET:
   /* this     ->    table1_main = new QTableWidget();
    table1_main    ->    setSelectionMode(QAbstractItemView::SingleSelection);
    table1_main    ->    setColumnCount(6);
    table1_main    ->  setRowCount(0);   
    this    ->     setCentralWidget(table1_main);
    //table1 oszlopainak a neveit egy QStringList tip. objektumban tárolom.
    QStringList headerlabels1;
    headerlabels1 << "vasarlo_id" <<"vasNev" << "vasEmail" << "Cipomeret" <<
                      "CipomodNev" << "dbszam" << "\n";
    table1_main->setHorizontalHeaderLabels(headerlabels1);
    connect (table1_main , SIGNAL(itemSelectionChanged()),
               this,SLOT(updateStatusText( )) );   //TABLE mainTable VEGE:
    //TABLE mainTable memfoglalasa  es oszlopok def VEGE:*/

    //Tabla 2 cipoarak lefoglalasa es oszlopok def KEZDET:
    this  -> table2_cipoarak = new QTableWidget();
    table2_cipoarak ->  setSelectionMode(QAbstractItemView::SingleSelection);
       table2_cipoarak->  setRowCount(8);    
   table2_cipoarak->  setColumnCount(3);
   // this    ->     setCentralWidget( table2_cipoarak);
       //table2 oszlopainak a neveit egy QStringList tip. objektumban tárolom.
    QStringList headerlabels2 ;
    headerlabels2 <<"Cipomodellid" << "CipomodellNev" << "CipomodellAr"<< "\n";
    table2_cipoarak->setHorizontalHeaderLabels(headerlabels2);
    connect (table2_cipoarak , SIGNAL(itemSelectionChanged()),
              this,SLOT(updateStatusText( )) );
   
    //TABLE cipoArak lefoglalasa es oszlopok def VEGE
   //idaig eljut a program

    //TABLE raktarkeszlet  peldanyositasa

    //Ezt majd folyamatosan kell feltolteni egyenkent adni hozza a sorokat
    this                    -> table3_raktarkeszlet=new QTableWidget();
    table3_raktarkeszlet    ->  setSelectionMode(QAbstractItemView::SingleSelection);
    this    ->     setCentralWidget(table3_raktarkeszlet);
    table3_raktarkeszlet    ->  setColumnCount(6);
    QStringList headerlabels3;
    headerlabels3 << "raktarkeszl" << "2" << "3" 
                                                                                    << "4 "<< "5"  << "6" << "\n";
    table3_raktarkeszlet->setHorizontalHeaderLabels(headerlabels3);
    connect ( table3_raktarkeszlet ,  SIGNAL(itemSelectionChanged()),
                                                     this, SLOT(updateStatusText( )) );
    //TABLE raktarkeszlet  peldanysa es oszlopok def VEGE:*/

//TABLEok feltoltesenek VEGE:


// Actionok  TABLAKAT MUTATO megadasa KEZDET:
    // TABLA_VALTAS megj: Actionok VEGE:
    /*mainTablaMutat_Action  = new QAction(tr("Megjelenit &mainTable-t"),this);
    mainTablaMutat_Action  -> setStatusTip( tr("tabla1 megjelenitese") );
    connect(   mainTablaMutat_Action  , SIGNAL(triggered()), this,SLOT(tablat_valts_table1MainTabla()) );
    tablaMenu -> addAction( mainTablaMutat_Action ) ;*/

    cipoarakTablaMutat_Action  = new QAction(tr("Megjelenit &cipoarak_Tablet"),this);
    cipoarakTablaMutat_Action -> setStatusTip( tr("tabla2 megjelenitese") );
    connect(  cipoarakTablaMutat_Action , SIGNAL(triggered()), this,SLOT(tablat_valts_table2CipoarakTabla()) );
    tablaMenu -> addAction( cipoarakTablaMutat_Action);

   /* raktarkeszletTablaMutat_Action  = new QAction(tr("Megjelenit &raktarkeszletTable-t"),this);
    raktarkeszletTablaMutat_Action -> setStatusTip( tr("tabla3 megjelenitese")  );
    connect( raktarkeszletTablaMutat_Action , SIGNAL(triggered()), this,SLOT(tablat_valts_table3RaktarkeszletTabla()) );
    tablaMenu -> addAction(raktarkeszletTablaMutat_Action );*/
 
    // MASIK TABLA megj: Actionok VEGE:
//Tovabbi Actionok VEGE:
};
//RENDEZESEK KEZD:
//RENDEZEZES: MAINTABLE rendezese KEZD: 
/*void FirstMainWindow::  mainTabla_rendezes_vasNev_sz(){
   table1_main->sortByColumn(0,Qt::AscendingOrder);
}*/
/*void FirstMainWindow::  mainTabla_rendezes_vasEmailcim_sz(){
   table1_main->sortByColumn(1,Qt::AscendingOrder);
}*/
/*void FirstMainWindow::   mainTabla_rendezes_cipoMeret_sz(){
   table1_main->sortByColumn(2,Qt::AscendingOrder);
}*/
/*void FirstMainWindow::mainTabla_rendezes_cipoModellId_sz(){
   table1_main->sortByColumn(3,Qt::AscendingOrder);}*/

//RENDEZEZES: MAINTABLE VEGE: 


//RENDEZEZES: TABLE CIPOARAK KEZD: 
void FirstMainWindow::cipoarakTabla_rendezes_cipoModellId_szerint(){
     table2_cipoarak->sortByColumn(0,Qt::AscendingOrder);
}
void FirstMainWindow::cipoarakTabla_rendezes_cipoAr_szerint(){
       table2_cipoarak->sortByColumn(1,Qt::AscendingOrder);
};
void FirstMainWindow::cipoarakTabla_rendezes_cipoModellNev_szerint(){
    table2_cipoarak->sortByColumn(2,Qt::AscendingOrder);
};

//RENDEZESEK KEZD:
void  FirstMainWindow::menuk_Actionjeinek_elkeszitese(){
// ACTION-ök megadasa KEZDET:

    //Fajl MENUben szereplo ACTION ök megadasa KEZDET:

     /*newContactAction = new QAction(tr("&uj bejegyzes"),this);
     newContactAction -> setStatusTip( tr("kere&ses nev alapján") );
     connect( newContactAction  , SIGNAL(triggered()), this,SLOT(addNewContact() ) );
     fileMenu -> addAction(newContactAction);*/

      //Kilepes Action START:
     /*exitAction    =    new QAction(tr("&kilep"),this);
     exitAction    ->    setShortcut(tr("Ctrl+Q"));//gyorsbillentyű megadasa az actionhöz
     exitAction    ->    setStatusTip(tr("Alkalmazas bezarasa"));//ez jon fol a "status bar"-ban
     connect(exitAction,SIGNAL( triggered() ),this,SLOT( close() ));
     fileMenu->addAction(exitAction);*/
     //Programbol Kilepes Action VEGE:


     //Kereses Action START:
    /* showSearchAction= new QAction(tr("&Kereses"),this);
     showSearchAction-> setShortcut(QKeySequence::Find);
     showSearchAction-> setStatusTip(tr("&Keresés nev alapján"));
     connect(showSearchAction, SIGNAL( triggered() ) ,this, SLOT(  showSearch() ) );
     fileMenu->addAction(showSearchAction);*/
//FILE MENU megadasa VEGE:

//Tablak Beolvas, Kiir Actionok KEZDET:

   //maintable fajlbol betoltes KEZDETE:
     /*mainTablaBetoltesFajlbol_Action= new QAction(tr("&Toltsd be a mainTablat ebbol a fajlbol: '00_Data.txt' ") ,this);
     mainTablaBetoltesFajlbol_Action  -> setStatusTip( tr("MainTabla adatok kirrasa 00_data.txt be"));
     connect( mainTablaBetoltesFajlbol_Action , SIGNAL(triggered()), 
                                                                             this,SLOT(mainTablaBetoltesFajlbol() ));
     tablaMenu->addAction( mainTablaBetoltesFajlbol_Action);*/
   //maintable fajlbol betoltes VEGE:
    
   

    //Cipoarak beolvasasa fájlbol KEZDET:
     cipoarakTablaBetoltesFajlbol_Action = 
              new QAction(tr("T&oltsd be a cipoarakat a cipoarak.txt fajlbol") ,this);
     cipoarakTablaBetoltesFajlbol_Action-> setStatusTip( tr("cipoarak betoltese"));
     connect( cipoarakTablaBetoltesFajlbol_Action  , SIGNAL( triggered() ),
              this,SLOT( cipoarakTablaBetoltesFajlbol()) );
           tablaMenu->addAction(   cipoarakTablaBetoltesFajlbol_Action );
    //Cipoarak beolvasasa fájlbol VEGE:     

   //maintable fajlba kiirása KEZDETE:
     /*mainTablaKiirasFajlba_Action=new QAction(tr("Ird ki a maintablet a 00_data.txt- be") ,this);
     mainTablaKiirasFajlba_Action  -> setStatusTip( tr("adatok kiirasa a maintablet a 00_data.txt- be"));
     connect( mainTablaKiirasaFajlba_Action , SIGNAL(triggered()), 
                       this,SLOT( mainTablaKiirasFajlba()) );
    tablaMenu->addAction(   mainTablaKiirasFajlba_Action);*/
    //maintable fajlba kiirása VEGE:
      //Cipoarak kiirasa fájlba KEZDET:
     cipoarakTablaKiirasFajlba_Action =
              new QAction(tr("&Cipoarakat ird ki a  cipoarak.txt be")  ,this);
     cipoarakTablaKiirasFajlba_Action 
                  -> setStatusTip( tr("Cipoaraktabla tartalmanak kiirasa a cipoarak.txt be"));
     connect(  cipoarakTablaKiirasFajlba_Action  , SIGNAL(triggered()),  
                         this,SLOT( cipoarakTablaKiirasFajlba()) ) ;
     tablaMenu->addAction( cipoarakTablaKiirasFajlba_Action );
    //Cipoarak kiirasa fájlba VEGE:  

    /*//raktarkeszlet tablat fajlbol beolvas KEZDETE:
    raktarkeszletTablaBetoltesFajlbol_Action=new QAction(tr("Olvasd be a raktarkeszletet a table2_raktarkeszlet.txt-bol raktarkeszlettable-be") ,this);
    raktarkeszletTablaBetoltesFajlbol_Action  -> setStatusTip( tr("raktarkeszlet_tablat fajlbol beolvas "));
     connect( raktarkeszletTablaBetoltesFajlbol_Action , SIGNAL( triggered() ),
                this,SLOT( raktarkeszletTablaBetoltesFajlbol() ) );
      tablaMenu->addAction(  raktarkeszletTablaBetoltesFajlbol_Action);
    //maintable fajlba kiirása VEGE:   */

    /*//raktarkeszlet_tablet fajlba kiir KEZDETE:
    raktarkeszletTablaKiirasFajlba_Action=new QAction(tr("Ird ki a raktarkeszletet a 02_raktarkeszlet.txt- be") ,this);
    raktarkeszletTablaKiirasFajlba_Action  -> setStatusTip( tr("Ird ki a 02_raktarkeszlet.txt- be a raktarKeszlet_tablat"));
    connect( raktarkeszletTablaKiirasFajlba_Action , SIGNAL(triggered()), 
                 this,SLOT( raktarkeszletTablaKiirasFajlba()) );
    tablaMenu->addAction(  raktarkeszletTablaKiirasFajlba_Action);*/
    //raktark tabla fajlba kiirása VEGE:  
 
 //Tablak Beolvas, Kiir Actionok VEGE:

    // Tablakat Rejt KEZDET:
    osszes_tabla_elrejtese_Action = new QAction(tr("&Osszes tablat rejt") ,this);
    osszes_tabla_elrejtese_Action -> setStatusTip( tr("foablakban elrejtem az osszes tablat"));
    connect( osszes_tabla_elrejtese_Action , SIGNAL(triggered()), this,SLOT(  osszes_tabla_elrejtese() ));
    tablaMenu->addAction(osszes_tabla_elrejtese_Action);
     // Tablakat Rejt VEGE:

    //Nyers adatok betoltese MainTable be KEZD:
    /*nyers_adatsorokBeolvasasFajlbol_Action= new QAction(tr("mainTable &feltoltese fajlbol"),this);
    nyers_adatsorokBeolvasasFajlbol_Action-> setStatusTip(tr("&mainTable feloltese fajlbol"));
    connect(  nyers_adatsorokBeolvasasFajlbol_Action, SIGNAL(triggered()), this,SLOT(  mainTablaBetoltesFajlbol() ));
    tablaMenu->addAction(osszes_tabla_elrejtese_Action);*/
    //Nyers adatok betoltese MainTable be VEGE



   //mainTabla Rendezes Menu QActionok feltoltesenek KEZDET:
   /*mainTabla_rendezes_vasNev_sz_Action = new QAction(tr("rendezd_mainTablat nev szerint!"),this);
   mainTabla_rendezes_vasNev_sz_Action -> setStatusTip( tr("Rendezd mainTablat nev szerint emelkedo sorrendbe") );
    connect(  mainTabla_rendezes_vasNev_sz_Action, SIGNAL(triggered()), this,SLOT(   mainTabla_rendezes_vasNev_sz())  );
     rendezesMenu -> addAction(mainTabla_rendezes_vasNev_sz_Action);*/

   /*mainTabla_rendezes_cipoMeret_sz_Action = new QAction(tr("rendezd mainTablat cipomeret szerint"),this);
   mainTabla_rendezes_cipoMeret_sz_Action  -> setStatusTip( tr("rendezd cipomeret szerint") );
   connect( mainTabla_rendezes_cipoMeret_sz_Action, SIGNAL(triggered()), this,SLOT(  mainTabla_rendezes_cipoMeret_sz())  );
   rendezesMenu -> addAction(    mainTabla_rendezes_cipoMeret_sz_Action);*/
   
   /*mainTabla_rendezes_vasEmailcim_sz_Action = new QAction(tr("rendezd mainTablat vasemailcim szerint emelkedo sorrendbe!"),this);
   mainTabla_rendezes_vasEmailcim_sz_Action  -> setStatusTip( tr("rendezes email szerint emelkedo sorrendbe") );
   connect(  mainTabla_rendezes_vasEmailcim_sz_Action , SIGNAL(triggered()), this,SLOT(mainTabla_rendezes_vasEmailcim_sz())  );
   rendezesMenu -> addAction(mainTabla_rendezes_vasEmailcim_sz_Action );*/

   /*mainTabla_rendezes_cipoModell_sz_Action = new QAction(tr("rendezd mainTablat cipomarka szerint"),this);
   mainTabla_rendezes_cipoModell_sz_Action  -> setStatusTip( tr("rendezd cipomodell szerint") );
   connect(   mainTabla_rendezes_cipoModell_sz_Action, SIGNAL(triggered()),
                                                                                         this,SLOT( mainTabla_rendezes_cipoModellId_sz() )  );
   rendezesMenu -> addAction(   mainTabla_rendezes_cipoModell_sz_Action);*/

   //RENDEZES MENU QActionok feltoltesenek VEGE:   
//ACTIONok megadasa VEGE:

};
void FirstMainWindow::osszes_tabla_elrejtese(){
//Ez a fuggveny elrejti a tablakat
     table1_main->hide();
     table1_main->setVisible(false);

    table2_cipoarak->hide();
    table2_cipoarak->setVisible(false);  

    table3_raktarkeszlet->hide();
    table3_raktarkeszlet->setVisible(false);

    this->centralWidget()->adjustSize();
  
} ;


 /*void FirstMainWindow:: tablat_valts_table1MainTabla(){
        this   ->    setCentralWidget(table1_main);
        table1_main->setVisible(true);
        table1_main->show();
      };*/
 
  void FirstMainWindow::tablat_valts_table2CipoarakTabla(){    
       this   -> setCentralWidget (table2_cipoarak);
        table2_cipoarak->setVisible(true);
        table2_cipoarak->show();

 };

int FirstMainWindow::cipoarakTablaBetoltesFajlbol()
{ 
   qDebug()<<"setRowCount(1) parancs elott van a program" << "\n";

   table2_cipoarak->setRowCount(	1);
   table2_cipoarak-> setColumnCount(3);

   int vanhiba=0;
   std::ifstream file2_cipoarak;

    //Ez az objektum jelenti a fajlt 

     file2_cipoarak.open("Data//01_cipoarak.txt", std::ios_base::in) ;
    if( file2_cipoarak.fail( ))
                        {vanhiba=1; return -1;
                          qDebug() <<"FirstMainWindow::cipoarakTablaBetoltesFajlbol a 01_cipoarak.txt fajl megnyitasa sikertelen\n";
                          }
     else {qDebug() <<"FirstMainWindow::cipoarakTablaBetoltesFajlbol\n"  << "A 01_cipoarak.txt fajl megnyitasa sikeres\n";}
 
 
   //eddig eljut program futasa
    std::string line1;
    char  *string_c_chars  = new char[1000];
     strcpy(string_c_chars,line1.c_str());
  
     //qDebug() << "kiirando_szoveg:"<<  string_c_chars <<"\n";

    line1="";

   if(vanhiba ==1) {return -1;}
    

      //beolvasok 3 random sort a fajlbol:

            if(!std::getline(file2_cipoarak, line1))   
                   {  qDebug()<< "fuggveny: cipoArakat fajlbol betolt: 01_cipoarak.txt teljes sor olvasasi hiba" <<"\n";  
                      vanhiba=1;   return -2 ;  }

            strcpy(string_c_chars,line1.c_str()); 

            if(file2_cipoarak.eof())  { qDebug()<< "A fajl olvasasnal a 01_cipoarak.txt fajlnak a vegere  értünk meg elso kommentes sornál" <<"\n"; 
                                                       vanhiba=0; return 2;}                      
            qDebug()<<"1. sora a kommenteknek: " <<string_c_chars <<"\n" ;

        
   
           if( !std::getline(file2_cipoarak, line1) } 
                                                     {  qDebug()<< "cipoArakat fajlbol betolt: teljes sor olvasasi hiba" <<"\n";  
                                                        vanhiba=1;   return -2 ;  }
          strcpy(string_c_chars, line1.c_str());   

           if(file2_cipoarak.eof()) 
                                                  { qDebug()<< "A fajl olvasasnal a 01_cipoarak.txt fajlnak a vegere  értünk még  az első a kommentes sornál" <<"\n"; 
                                                       vanhiba=0; return -3 ;}                      
           qDebug()<<"2. sora a kommenteknek : " <<string_c_chars <<"\n" ;

      
;
      
           if( !std::getline(file2_cipoarak, line1))  
                         {  qDebug()<< "fuggveny: cipoArakat fajlbol betolt: 01_cipoarak.txt teljes sor olvasasi hiba" <<"\n";  
                             vanhiba=1;   return -2 ;  }
          strcpy(string_c_chars,line1.c_str());  
  
          if(file2_cipoarak.eof())  { qDebug()<< "A fajl olvasasnal a 01_cipoarak.txt fajlnak a vegere  értünk még  az első a kommentes sornál" <<"\n"; 
                                                       vanhiba=0;  return -3;  }                      
           qDebug()<<"3. sora a kommenteknek: " <<string_c_chars <<"\n" ;


           if(  !std::getline(file2_cipoarak, line1))  {  qDebug()<< "fuggveny: cipoArakat fajlbol betolt: 01_cipoarak.txt teljes sor olvasasi hiba" <<"\n";  
                                                        vanhiba=1;   return -2 ;  }
          strcpy(string_c_chars,line1.c_str());   
          if(file2_cipoarak.eof())  { qDebug()<<"A fajl olvasasnal a 01_cipoarak.txt fajlnak a vegere  értünk még  az első a kommentes sornál"<<"\n"; 
                                                       vanhiba=0; return -3 ;}                      
           qDebug()<<"4. sora a kommenteknek : " <<string_c_chars <<"\n" ;

          qDebug()<<"Vege a kommentek beolvasasanak:"  << "\n" ;
            qDebug()<<"----------------------------------------"  << "\n" ;
           qDebug()  <<"\n" ;
           qDebug()  <<"\n" ;

/*itt kezdodik a tenyleges adatbeolvasas programresz*/

          std::string cipomodellId_tmp="";
          std::string cipomodellNev_tmp="";
          std::string cipomodellAr_tmp= "";
    
         const std::string delimiter=" "; 
        
        QString cipomodellId2="";
        QString cipomodellNev2="";
        QString cipomodellAr2="";


      //itt meg nem tudom hany elemet irok hozza a table hoz,
      

  //Ez itt a beolvaso ciklusom:
   //Ez itt a beolvaso ciklusom eleje:
      int sorokszama;
     int adattagok_szama_aktualis_sorban_max=3;
    int adattagok_oszlopindex;
    int hibakod; 
   int rownum;
  //While elott a hibakodok kinullazasa: ez adja majd a fv visszateresi erteket

   hibakod=0; 
  //Hibakod=0 nincs hiba
  //Hibakod=1 fajl megnyitasi hiba
  //Hibakod=2 nem eleg hosszu adatsor

   //sorokat beolvaso WHILE KEZDODIK : 
  adattagok_oszlopindex=0;
  adattagok_szama_aktualis_sorban_max=3;
  sorokszama=0;
  rownum=0;;

//WHILE NAGY START:

 qDebug() << "----  Elso nagy while mindjárt elindul ------" << "\n";
 qDebug() << "----  Fajlból beolvaso program hasznos része most jon: ------" << "\n";
 qDebug() << "----  ------" << "\n";
 qDebug() << "----  ------" << "\n";
 qDebug() << "----  ------" << "\n";

  while (1)
        { 
 
//Ebben a ciklusban minden körben beolvasunk egy sort, a sort a memóriába felbontjuk, majd beirjuk a tablaba
           qDebug()  << "Program belepett a while ciklusba\n" <<"\n" ;
      
      //Eloszor megnezem létezik egyáltalán a fájl, ha nem, akkor hibát dobok régi módszerrel:

     
          //Ha a fajl vegere ertunk, szakitsa meg a ciklust
           if(!std::getline(file2_cipoarak, line1)){
                             qDebug()  << "A fajl vegere ertunk, megtöröm a nagy while ciklust." <<"\n";
                                 hibakod=1;  break;  ;
                       }
        qDebug()  << "1 sort beolvastunk, nem vagyunk a file vegen," <<"\n" ;

           strcpy(string_c_chars,line1.c_str());           
           sorokszama++;

           
         //atmeneti stringek a beolvasashoz
   
          //sztringekbe olvasás a sorbol
          qDebug() << "beolvasott sorok szetbontasa, ennyiedik sornal tartunk: " << sorokszama << "\n";
 
         //adatsorbol kivagom az elso adatot delimiter: elvalaszto
          cipomodellId_tmp=line1.substr(0,line1.find(delimiter));
          line1.erase(0,(line1.find(delimiter))+(delimiter.length()));
         //Atmasolom a pufferbe a stringet, es kiiratom;
          strcpy(string_c_chars, cipomodellId_tmp.c_str());  
          qDebug() << "Cipoarak.txt n d ik sor   1. adat a sorban:  Cipomodell ID:" <<  string_c_chars << "\n" ;

            //adatsorbol kivagom a masodik adatot
          cipomodellNev_tmp=line1.substr(0,(line1.find(delimiter)));
          line1.erase(0,(line1.find(delimiter))+(delimiter.length()));
          strcpy(string_c_chars, cipomodellNev_tmp.c_str()); 
          qDebug() <<"Cipoarak.txt n d ik sor      2. adat a sorban: Cipomodell Nev:" <<  string_c_chars <<"\n";  

         //adatsorbol kimásolom a harmadik adatot:
          cipomodellAr_tmp=line1.substr(0,(line1.find(delimiter)));
          line1.erase(0,(line1.find(delimiter))+(delimiter.length()));
         //Atmasolom a pufferbe a stringet, hogy ne a stackre mutasson a line c_str(),;  
          strcpy(string_c_chars,           cipomodellAr_tmp.c_str()) ; 
          line1.erase(0,(line1.find(delimiter))+(delimiter.length()));
          qDebug() <<"Cipoarak.txt n d ik sor      3. adat a sorban: Cipomodell_ar"<<  string_c_chars << "\n" ;
 

          qDebug() << " Kezdés: QStringek  feltoltese meg nem pointerrel:\n" ;
          //atmasolom a Qstringekbe az ertekeket:
          cipomodellId2 = QString::fromStdString(cipomodellId_tmp);
          qDebug() << "QStringek ertekadasának eredménye:  cipomodellId2: " << cipomodellId2 << "\n";

          cipomodellNev2   =  QString::fromStdString(cipomodellNev_tmp);
          qDebug() << "QStringek ertekadasának eredménye:  cipomodellNev2: " << cipomodellNev2 << "\n";

          cipomodellAr2    =  QString::fromStdString(cipomodellAr_tmp);
          qDebug() << " QStringek ertekadasának eredménye:     CipomodellAr" << cipomodellAr2 << "\n";

        
          qDebug() << "QStringek tartalmat ellenorizd!!!"<<"\n";

          qDebug() << " A cipo QStringek ertekadasa nem fagyasztotta ki a programot\n" ;
         //nem kell c tipusu stringbe konvertalni
         
          adattagok_oszlopindex=0;

          //ez mondja meg hany

            //Elöször beszúrok egy új sort a TableWidget be:
             rownum = table2_cipoarak->rowCount() ; // current sor szama   
            qDebug() << "rownum erteke: " << rownum  <<"\n";
            table2_cipoarak->insertRow(rownum-1);
 
     //itt csak egy sort szúrok hozzá

 //cipoarak tablajanak a feltoltese KEZDETE:

         newCipomodellId2Item=new QTableWidgetItem(cipomodellId2);
	 table2_cipoarak->setItem(rownum-1,0,newCipomodellId2Item);
         qDebug() << "megtortent a QWidget n. soranak elso oszlopanak feltoltese " << "\n";   
	 adattagok_oszlopindex=1;
      
               
        newCipomodellNev2Item=new QTableWidgetItem(cipomodellNev2); 
	table2_cipoarak->setItem(rownum-1,1, newCipomodellNev2Item);
        qDebug() << "megtortent a QWidget n. soranak masodik oszlopanak feltoltese" << "\n"; 
	adattagok_oszlopindex=2;
      
	newCipomodellAr2Item=new QTableWidgetItem(cipomodellAr2);
	 table2_cipoarak->setItem(rownum-1 ,2,newCipomodellAr2Item);
	 qDebug() << "megtortent a QWidget n. soranak harmadik oszlopanak feltoltese" << "\n";
	adattagok_oszlopindex=3;

      //table_cipoarak feltoltese VEGE:
       
    

         if( adattagok_oszlopindex==3 )
                                {    adattagok_oszlopindex=0;
                                  };
          if( adattagok_oszlopindex>=3 )
                       {
                      qDebug() << "Tabla widgethez hozza lett adva egy teljes uj sor" << "\n";
                      }
        }
//WHILE "NAGY" VEGET ERT:

   table2_cipoarak->removeRow( rownum);

       qDebug()<<"A beolvaso while ciklus vegere ertunk."<< "\n";
       qDebug()<<" ekkor a beolvasott sorok szama ennyi: " << sorokszama << "\n";


 if (vanhiba <= 0)        {file2_cipoarak.close() ; hibakod=1;} 
//Ha eredmenyes volt a kiiras, lezarom a fajlt es adjon ki egyet

 if (vanhiba >0)              {    file2_cipoarak.close(); hibakod=-1;}

//visszatérési értékek beállítása a while ciklus hibakodjainak alapján

if(hibakod==1) {return -1;}
if(hibakod==2) { return -2;}
if(hibakod==3) {return -3;}
return 1;
}
 /*void FirstMainWindow::tablat_valts_table3RaktarkeszletTabla(){

         this   ->  setCentralWidget(table3_raktarkeszlet);
         table3_raktarkeszlet->setVisible(true);
         table3_raktarkeszlet->show();
      }*/

 /*void FirstMainWindow::showSearch(){ aa
   {   if(! searchDialog1->isVisible() )
            {
                this->searchDialog1->show();
            }}
*/
                                      
   /*void FirstMainWindow::addNewContact(){

//eloszor leteznie kell a main table nek hogy hozza adhassunk egy nevet
     NewContactWindow  *newContactDialog = new NewContactWindow(this);

     if(newContactDialog->exec()==QDialog::Accepted)
     {
         int currentRowsNbr=table1_main->rowCount();
       //  table1_main->setRowCount(currentRowsNbr+1);

         table1_main->insertRow(currentRowsNbr);
   
         QTableWidgetItem*  newVasarloNevItem= new QTableWidgetItem(newContactDialog->getVasNev());
         table1_main->setItem(currentRowsNbr,0,newVasarloNevItem);
         QTableWidgetItem*  newVasarloIdItem= new QTableWidgetItem(newContactDialog->getVasId());
         table1_main->setItem(currentRowsNbr,1,newVasarloIdItem);
         QTableWidgetItem * newVasEmailItem=new QTableWidgetItem(newContactDialog->getVasEmail());
         table1_main->setItem(currentRowsNbr,2,newVasEmailItem);
         QTableWidgetItem * newVasCipoMeretItem=new QTableWidgetItem(newContactDialog->getVasCipoMeret());
         table1_main->setItem(currentRowsNbr,3,newVasCipoMeretItem);
         QTableWidgetItem * newVasModellNevItem=new QTableWidgetItem(newContactDialog->getVasModellNev());
         table1_main->setItem(currentRowsNbr,4,newVasModellNevItem);
         QTableWidgetItem * newVasDbszamItem=new QTableWidgetItem(newContactDialog->getVasDbSzam());
         table1_main->setItem(currentRowsNbr,5,newVasDbszamItem);
     }
     delete newContactDialog;

};*/

