//This file is automatically generated by generator.lua from https://github.com/cimgui/cimgui
//based on implot.h file version 0.1 WIP from Dear ImGui https://github.com/ocornut/imgui

#include "./implot/implot.h"
#include "cimplot.h"



CIMGUI_API ImPlotRange* ImPlotRange_ImPlotRange(void)
{
    return IM_NEW(ImPlotRange)();
}
CIMGUI_API void ImPlotRange_destroy(ImPlotRange* self)
{
    IM_DELETE(self);
}
CIMGUI_API bool ImPlotRange_Contains(ImPlotRange* self,const ImVec2 p)
{
    return self->Contains(p);
}
CIMGUI_API ImPlotStyle* ImPlotStyle_ImPlotStyle(void)
{
    return IM_NEW(ImPlotStyle)();
}
CIMGUI_API void ImPlotStyle_destroy(ImPlotStyle* self)
{
    IM_DELETE(self);
}
CIMGUI_API bool igBeginPlot(const char* title_id,const char* x_label,const char* y_label,const ImVec2 size,ImPlotFlags flags,ImAxisFlags x_flags,ImAxisFlags y_flags)
{
    return ImGui::BeginPlot(title_id,x_label,y_label,size,flags,x_flags,y_flags);
}
CIMGUI_API void igEndPlot()
{
    return ImGui::EndPlot();
}
CIMGUI_API void igPlotFloatPtrInt(const char* label_id,const float* values,int count,int offset,int stride)
{
    return ImGui::Plot(label_id,values,count,offset,stride);
}
CIMGUI_API void igPlotFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,int count,int offset,int stride)
{
    return ImGui::Plot(label_id,xs,ys,count,offset,stride);
}
CIMGUI_API void igPlotVec2Ptr(const char* label_id,const ImVec2* data,int count,int offset)
{
    return ImGui::Plot(label_id,data,count,offset);
}
CIMGUI_API void igPlotFnPtr(const char* label_id,ImVec2(*getter)(void* data,int idx),void* data,int count,int offset)
{
    return ImGui::Plot(label_id,getter,data,count,offset);
}
CIMGUI_API void igPlotBarFloatPtrInt(const char* label_id,const float* values,int count,float width,float shift,int offset,int stride)
{
    return ImGui::PlotBar(label_id,values,count,width,shift,offset,stride);
}
CIMGUI_API void igPlotBarFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,int count,float width,int offset,int stride)
{
    return ImGui::PlotBar(label_id,xs,ys,count,width,offset,stride);
}
CIMGUI_API void igPlotBarFnPtr(const char* label_id,ImVec2(*getter)(void* data,int idx),void* data,int count,float width,int offset)
{
    return ImGui::PlotBar(label_id,getter,data,count,width,offset);
}
CIMGUI_API void igPlotBarHFloatPtrInt(const char* label_id,const float* values,int count,float height,float shift,int offset,int stride)
{
    return ImGui::PlotBarH(label_id,values,count,height,shift,offset,stride);
}
CIMGUI_API void igPlotBarHFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,int count,float height,int offset,int stride)
{
    return ImGui::PlotBarH(label_id,xs,ys,count,height,offset,stride);
}
CIMGUI_API void igPlotBarHFnPtr(const char* label_id,ImVec2(*getter)(void* data,int idx),void* data,int count,float height,int offset)
{
    return ImGui::PlotBarH(label_id,getter,data,count,height,offset);
}
CIMGUI_API void igPlotErrorBarsFloatPtrInt(const char* label_id,const float* xs,const float* ys,const float* err,int count,int offset,int stride)
{
    return ImGui::PlotErrorBars(label_id,xs,ys,err,count,offset,stride);
}
CIMGUI_API void igPlotErrorBarsFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,const float* neg,const float* pos,int count,int offset,int stride)
{
    return ImGui::PlotErrorBars(label_id,xs,ys,neg,pos,count,offset,stride);
}
CIMGUI_API void igPlotErrorBarsFnPtr(const char* label_id,ImVec4(*getter)(void* data,int idx),void* data,int count,int offset)
{
    return ImGui::PlotErrorBars(label_id,getter,data,count,offset);
}
CIMGUI_API void igPlotPieChart(char** label_ids,float* values,int count,const ImVec2 center,float radius,bool show_percents,float angle0)
{
    return ImGui::PlotPieChart(label_ids,values,count,center,radius,show_percents,angle0);
}
CIMGUI_API void igPlotLabel(const char* text,float x,float y,bool vertical,const ImVec2 pixel_offset)
{
    return ImGui::PlotLabel(text,x,y,vertical,pixel_offset);
}
CIMGUI_API bool igIsPlotHovered()
{
    return ImGui::IsPlotHovered();
}
CIMGUI_API void igGetPlotMousePos(ImVec2 *pOut)
{
    *pOut = ImGui::GetPlotMousePos();
}
CIMGUI_API ImPlotRange igGetPlotRange()
{
    return ImGui::GetPlotRange();
}
CIMGUI_API bool igIsPlotQueried()
{
    return ImGui::IsPlotQueried();
}
CIMGUI_API ImPlotRange igGetPlotQuery()
{
    return ImGui::GetPlotQuery();
}
CIMGUI_API ImPlotStyle* igGetPlotStyle()
{
    return &ImGui::GetPlotStyle();
}
CIMGUI_API void igSetPlotPalette(const ImVec4* colors,int num_colors)
{
    return ImGui::SetPlotPalette(colors,num_colors);
}
CIMGUI_API void igRestorePlotPalette()
{
    return ImGui::RestorePlotPalette();
}
CIMGUI_API void igPushPlotColorU32(ImPlotCol idx,ImU32 col)
{
    return ImGui::PushPlotColor(idx,col);
}
CIMGUI_API void igPushPlotColorVec4(ImPlotCol idx,const ImVec4 col)
{
    return ImGui::PushPlotColor(idx,col);
}
CIMGUI_API void igPopPlotColor(int count)
{
    return ImGui::PopPlotColor(count);
}
CIMGUI_API void igPushPlotStyleVarFloat(ImPlotStyleVar idx,float val)
{
    return ImGui::PushPlotStyleVar(idx,val);
}
CIMGUI_API void igPushPlotStyleVarInt(ImPlotStyleVar idx,int val)
{
    return ImGui::PushPlotStyleVar(idx,val);
}
CIMGUI_API void igPopPlotStyleVar(int count)
{
    return ImGui::PopPlotStyleVar(count);
}
CIMGUI_API void igSetNextPlotRange(float x_min,float x_max,float y_min,float y_max,ImGuiCond cond)
{
    return ImGui::SetNextPlotRange(x_min,x_max,y_min,y_max,cond);
}
CIMGUI_API void igSetNextPlotRangeX(float x_min,float x_max,ImGuiCond cond)
{
    return ImGui::SetNextPlotRangeX(x_min,x_max,cond);
}
CIMGUI_API void igSetNextPlotRangeY(float y_min,float y_max,ImGuiCond cond)
{
    return ImGui::SetNextPlotRangeY(y_min,y_max,cond);
}
CIMGUI_API void igGetPlotPos(ImVec2 *pOut)
{
    *pOut = ImGui::GetPlotPos();
}
CIMGUI_API void igGetPlotSize(ImVec2 *pOut)
{
    *pOut = ImGui::GetPlotSize();
}
CIMGUI_API void igPixelsToPlot(ImVec2 *pOut,const ImVec2 pix)
{
    *pOut = ImGui::PixelsToPlot(pix);
}
CIMGUI_API void igPlotToPixels(ImVec2 *pOut,const ImVec2 plt)
{
    *pOut = ImGui::PlotToPixels(plt);
}
CIMGUI_API void igPushPlotClipRect()
{
    return ImGui::PushPlotClipRect();
}
CIMGUI_API void igPopPlotClipRect()
{
    return ImGui::PopPlotClipRect();
}
CIMGUI_API void igShowImPlotDemoWindow(bool* p_open)
{
    return ImGui::ShowImPlotDemoWindow(p_open);
}



