// generated by Fast Light User Interface Designer (fluid) version 1.0109

#ifndef NodeFilterDialog_H
#define NodeFilterDialog_H
#include <FL/Fl.H>
#include "NodeFilter.H"
#include "IEffectDialog.H"
#include "NodeFilterFrei0rFactory.H"
#include "NodeFilterBezierCurveFactoryPlugin.H"
#include "NodeFilterPreviewFactoryPlugin.H"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tile.H>
#include <FL/Fl_Hold_Browser.H>
#include <FL/Fl_Scroll.H>
#include "Frei0rGraphEditor.H"
#include "VideoViewGL.H"
#include "Timeline.H"
#include <FL/Fl_Box.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Button.H>
#include <tinyxml.h>
#include <FL/Fl_File_Chooser.H>

class NodeFilterDialog : public nle::IEffectDialog {
public:
  NodeFilterDialog( nle::NodeFilter* filter );
  Fl_Double_Window *m_dialog;
  Fl_Hold_Browser *plugin_browser;
private:
  void cb_plugin_browser_i(Fl_Hold_Browser*, void*);
  static void cb_plugin_browser(Fl_Hold_Browser*, void*);
public:
  Frei0rGraphEditor *graph_editor;
private:
  void cb_graph_editor_i(Frei0rGraphEditor*, void*);
  static void cb_graph_editor(Frei0rGraphEditor*, void*);
  void cb_Close_i(Fl_Return_Button*, void*);
  static void cb_Close(Fl_Return_Button*, void*);
public:
  Fl_Button *trash_can;
private:
  void cb_Save_i(Fl_Button*, void*);
  static void cb_Save(Fl_Button*, void*);
  void cb_Load_i(Fl_Button*, void*);
  static void cb_Load(Fl_Button*, void*);
public:
  ~NodeFilterDialog();
  void show();
  int shown();
private:
  nle::NodeFilter* m_filter; 
  NodeFilterFrei0rFactory* m_factory; 
  NodeFilterBezierCurveFactoryPlugin m_bezier_curve_factory; 
  nle::NodeFilterPreviewFactoryPlugin m_preview_factory; 
};
#endif
