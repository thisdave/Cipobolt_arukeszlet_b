#include "firstmainwindow.h"
#include "firstmainwindow2_kesz.cpp"

 FirstMainWindow::FirstMainWindow (QWidget *parent):
                           QMainWindow(parent)
{
   /*table2_cipoarak->horizontalHeader () -> setResizeMode (QHeaderView :: Stretch);
    table2_cipoarak->verticalHeader () -> setResizeMode (QHeaderView :: Stretch);*/
   
   this->resize(1024, 768);
   this->setWindowTitle("FirstMainWindow");
  
//Menuk megadasa: Start:
   fileMenu=this->menuBar()->addMenu(tr("&fajl"));//tr az eltero nyelvek támogatása miatt kell
   tablaMenu=this->menuBar()->addMenu(tr("&tablat_megjelenit")) ;
   rendezesMenu=this->menuBar()->addMenu(tr("&rendezes"));
//Menuk megadasa: vege:

//A mar elkeszitett actionok megadasa
 menuk_Actionjeinek_elkeszitese();

//Tablak elkeszitese es feltoltese
tablakat_keszit_feltolt();
//Tablak elkeszitese es feltoltese VEGE:
};
 

// RENDEZES: RAKTARKESZLET  KEZD:
/*void FirstMainWindow::raktarkeszletTabla_rendezes_cipoId_szerint(){
   table1_main->sortByColumn(0,Qt::AscendingOrder);
};*/

// RENDEZES: RAKTARKESZLET  VEGE:




// BEOLVASAS CIPOARAKAT 01_cipoarak.txt bol


int FirstMainWindow::cipoarakTablaKiirFajlba(){

   qDebug()  << " CipoarakTable-t kiirom cipoarak.txt fajlba\n" <<"\n";
   std::fstream file_cipoarak_kim;//Ez az objektum jelenti a fajlt

        file_cipoarak_kim.open("Data//01_cipoarak.txt", std::ios_base::out) ;  //alapbol out
       
   int currentRowsNumber=table2_cipoarak->rowCount();
   int i;

             file_cipoarak_kim << "// Ebben a fajlban vannak a cipomodellek arai eltarolva\n";
             file_cipoarak_kim << "//2 kulcsos tabla\n";
             file_cipoarak_kim << "//cipomodellID CipomodellNev cipomodellAr\n";
             file_cipoarak_kim  << "//\n";
            
            for(i=0;i<currentRowsNumber;i++){
  
              file_cipoarak_kim <<table2_cipoarak->itemAt(0,i)->text().toStdString();
              qDebug() << table2_cipoarak->itemAt(i,0)->text() <<  "\n";

                if( !file_cipoarak_kim.is_open() ) {return -1;}
               file_cipoarak_kim << " ";
               file_cipoarak_kim << table2_cipoarak->itemAt(i,1)->text().toStdString();
               qDebug() <<  table2_cipoarak->itemAt(i,1)->text()  <<  "\n";
               if( ! file_cipoarak_kim.is_open() ) {return -1;}
               file_cipoarak_kim << " ";
               file_cipoarak_kim << table2_cipoarak->itemAt(i,2)->text().toStdString();
                qDebug() << table2_cipoarak->itemAt(i,2)->text() << "\n";
               if( ! file_cipoarak_kim.is_open() ) {return -1;}
               file_cipoarak_kim << "\n";
               if( ! file_cipoarak_kim.is_open() ){ break ;}
              
          }
 
  //irasi puffer kiuritese:
   file_cipoarak_kim.flush() ;
  //fajl lezarasa:
   file_cipoarak_kim.close();
   return 0;
};



//raktarkeszlet beolvasasa fajlbol KEZDET:
/*int FirstMainWindow::raktarkeszletTablaBetolteseFajlbol(){
return 0;
};*/
//raktarkeszlet beolvasasa fajlbol VEGE:

/*//raktarkeszlet tabla kiirasa KEZDET:
int FirstMainWindow::raktarkeszletTablaKiirasaFajlba(){
return 0;
};
//raktarkeszlet tabla kiirasa VEGE*/





//felkesz függvények kezd:


//felkesz fuggvenyek vege:

/*int  FirstMainWindow::mainTablaBetoltesFajlbol(){
return 1;
};*/


/*int FirstMainWindow::mainTablaKiirasFajlba(){
  return 1;
};*/











void FirstMainWindow::updateStatusText(){
    QList<QTableWidgetItem*> selectedItems = table1_main -> selectedItems();

    if(selectedItems.length()  > 0) 
     {
        this->statusBar()->showMessage(        "Name: " %
         table1_main->item(selectedItems.first()->row(), 0)->text()      );
     
     }
};

void FirstMainWindow::closeEvent(QCloseEvent* event)
{
     msg.setWindowTitle("Kilepes");
     msg.setText("Tenyleg Kilepes?");
     msg.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);

    if(msg.exec()==QMessageBox::Yes)
              {event->accept();}
    else event->ignore();
    return;
};

