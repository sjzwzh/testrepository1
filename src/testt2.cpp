/*
 ============================================================================
 Name        : testt2.cpp
 Author      : wzh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */
#include <gtk/gtk.h>
//#include<glade/glade.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#include<string.h>
int main(int argc, char * argv[]){
 /*   GtkWidget * window;
    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect_swapped(G_OBJECT(window), "destroy",
            G_CALLBACK(gtk_main_quit), G_OBJECT(window));
getchar();
printf("this is a test");

    gtk_widget_show(window);
    gtk_main();

    return 0;*/
        GtkBuilder * builder;
  	GtkWidget * window;
  	GtkWidget * box;
  	GtkWidget * button;
  	GtkWidget * label;
  	GtkWidget * image;
  	gtk_init (&argc,&argv);
  	builder=gtk_builder_new();
  	//gtk_builder_get_object(builder,"window1");
  	gtk_builder_add_from_file(builder,"src/3.glade",NULL);
  	//window = GTK_WIDGET (gtk_builder_get_object (builder, TOP_WINDOW));
  	window=GTK_WIDGET(gtk_builder_get_object(builder,"applicationwindow1"));
  	  if (!window)
  	        {
  			g_critical ("Widget \"%s\" is missing in file %s.",
  					"window",
  					"3.glade");
  	        }
  	  getchar();
  	  int i =0;
  	for (i = 0; i < 10; i++)
  	  {
  	 std::cout << "!!!Hello World!!!" << endl;

	}
  	string tests = "asjdflkasjfdlkjsadkljflsajfd";
  	cout<<tests<<endl;
  /*
  	button=GTK_WIDGET(gtk_builder_get_object(builder,"button1"));
  	label=GTK_WIDGET(gtk_builder_get_object(builder,"label1"));
  	image=GTK_WIDGET(gtk_builder_get_object(builder,"image1"));*/
  	gtk_builder_connect_signals(builder,NULL);
  	g_object_unref(G_OBJECT(builder));


  	/*gtk_widget_show(button);
  	gtk_widget_show(label);
  	gtk_widget_show(image);
  	gtk_widget_show(box);*/
  	gtk_widget_show(window);
  	//gtk_widget_show_all(window);

  	gtk_main();
  	return 0;
}


