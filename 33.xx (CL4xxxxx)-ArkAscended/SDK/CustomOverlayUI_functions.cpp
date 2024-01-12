#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CustomOverlayUI.CustomOverlayUI_C
// (None)

class UClass* UCustomOverlayUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomOverlayUI_C");

	return Clss;
}


// CustomOverlayUI_C CustomOverlayUI.Default__CustomOverlayUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomOverlayUI_C* UCustomOverlayUI_C::GetDefaultObj()
{
	static class UCustomOverlayUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomOverlayUI_C*>(UCustomOverlayUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomOverlayUI.CustomOverlayUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCustomOverlayUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomOverlayUI.CustomOverlayUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UCustomOverlayUI_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "Tick");

	Params::UCustomOverlayUI_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.AddChildToCanvas
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Child                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FVector2D                   Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// int32                              ZOrder                                                           (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UCustomOverlayUI_C::AddChildToCanvas(class UUserWidget* Child)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "AddChildToCanvas");

	Params::UCustomOverlayUI_C_AddChildToCanvas_Params Parms{};

	Parms.Child = Child;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetArrowAlpha
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TheLeftRightAlpha                                                (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              TheUpDownAlpha                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

float UCustomOverlayUI_C::SetArrowAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetArrowAlpha");

	Params::UCustomOverlayUI_C_SetArrowAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerScale
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)

void UCustomOverlayUI_C::SetPointerScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetPointerScale");

	Params::UCustomOverlayUI_C_SetPointerScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.ShowReticule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

bool UCustomOverlayUI_C::ShowReticule()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "ShowReticule");

	Params::UCustomOverlayUI_C_ShowReticule_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerColorAdd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Add                                                              (Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate)

float UCustomOverlayUI_C::SetPointerColorAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetPointerColorAdd");

	Params::UCustomOverlayUI_C_SetPointerColorAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetInnerRingScales
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale0                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Scale1                                                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Scale2                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

float UCustomOverlayUI_C::SetInnerRingScales()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetInnerRingScales");

	Params::UCustomOverlayUI_C_SetInnerRingScales_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.ExecuteUbergraph_CustomOverlayUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UUserWidget*                 K2Node_Event_Child                                               (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   K2Node_Event_Size                                                (ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_zOrder                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (Edit, BlueprintVisible, ExportObject, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_2                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// float                              K2Node_Event_theLeftRightAlpha                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_theUpDownAlpha                                      (BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_3                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_Event_scale                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_show                                                (ExportObject, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_4                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_5                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              K2Node_Event_add                                                 (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale0                                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale1                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale2                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_6                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_Bottom_ImplicitCast                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast               (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast                  (Edit, ConstParm, ExportObject, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetPointerScale_NewParam_ImplicitCast                   (ConstParm, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetPointerColorAdd_Add_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale0_ImplicitCast                  (BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale1_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale2_ImplicitCast                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UPanelSlot* UCustomOverlayUI_C::ExecuteUbergraph_CustomOverlayUI(class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget, bool* K2Node_DynamicCast_bSuccess, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UUserWidget** K2Node_Event_Child, const struct FVector2D& K2Node_Event_Size, int32 K2Node_Event_zOrder, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool* K2Node_DynamicCast_bSuccess_1, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_1, bool* K2Node_DynamicCast_bSuccess_2, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_2, bool* K2Node_DynamicCast_bSuccess_3, float K2Node_Event_theLeftRightAlpha, float K2Node_Event_theUpDownAlpha, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_3, bool* K2Node_DynamicCast_bSuccess_4, float* K2Node_Event_scale, bool K2Node_Event_show, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_4, bool* K2Node_DynamicCast_bSuccess_5, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_5, bool* K2Node_DynamicCast_bSuccess_6, float* K2Node_Event_add, float* K2Node_Event_scale0, float* K2Node_Event_scale1, float* K2Node_Event_scale2, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_6, bool* K2Node_DynamicCast_bSuccess_7, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast, double CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast, double* CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast, double* CallFunc_SetPointerScale_NewParam_ImplicitCast, double* CallFunc_SetPointerColorAdd_Add_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale0_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale1_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale2_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "ExecuteUbergraph_CustomOverlayUI");

	Params::UCustomOverlayUI_C_ExecuteUbergraph_CustomOverlayUI_Params Parms{};

	Parms.K2Node_Event_Size = K2Node_Event_Size;
	Parms.K2Node_Event_zOrder = K2Node_Event_zOrder;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_Event_theLeftRightAlpha = K2Node_Event_theLeftRightAlpha;
	Parms.K2Node_Event_theUpDownAlpha = K2Node_Event_theUpDownAlpha;
	Parms.K2Node_Event_show = K2Node_Event_show;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Bottom_ImplicitCast = K2Node_MakeStruct_Bottom_ImplicitCast;
	Parms.CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast = CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsCustom_Mouse_Widget != nullptr)
		*K2Node_DynamicCast_AsCustom_Mouse_Widget = Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_Event_Child != nullptr)
		*K2Node_Event_Child = Parms.K2Node_Event_Child;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsCustom_Mouse_Widget_1 != nullptr)
		*K2Node_DynamicCast_AsCustom_Mouse_Widget_1 = Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_AsCustom_Mouse_Widget_2 != nullptr)
		*K2Node_DynamicCast_AsCustom_Mouse_Widget_2 = Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_2;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_AsCustom_Mouse_Widget_3 != nullptr)
		*K2Node_DynamicCast_AsCustom_Mouse_Widget_3 = Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_3;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (K2Node_Event_scale != nullptr)
		*K2Node_Event_scale = Parms.K2Node_Event_scale;

	if (K2Node_DynamicCast_AsCustom_Mouse_Widget_4 != nullptr)
		*K2Node_DynamicCast_AsCustom_Mouse_Widget_4 = Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_4;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (K2Node_DynamicCast_AsCustom_Mouse_Widget_5 != nullptr)
		*K2Node_DynamicCast_AsCustom_Mouse_Widget_5 = Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_5;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (K2Node_Event_add != nullptr)
		*K2Node_Event_add = Parms.K2Node_Event_add;

	if (K2Node_Event_scale0 != nullptr)
		*K2Node_Event_scale0 = Parms.K2Node_Event_scale0;

	if (K2Node_Event_scale1 != nullptr)
		*K2Node_Event_scale1 = Parms.K2Node_Event_scale1;

	if (K2Node_Event_scale2 != nullptr)
		*K2Node_Event_scale2 = Parms.K2Node_Event_scale2;

	if (K2Node_DynamicCast_AsCustom_Mouse_Widget_6 != nullptr)
		*K2Node_DynamicCast_AsCustom_Mouse_Widget_6 = Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_6;

	if (K2Node_DynamicCast_bSuccess_7 != nullptr)
		*K2Node_DynamicCast_bSuccess_7 = Parms.K2Node_DynamicCast_bSuccess_7;

	if (CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast != nullptr)
		*CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast = Parms.CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast;

	if (CallFunc_SetPointerScale_NewParam_ImplicitCast != nullptr)
		*CallFunc_SetPointerScale_NewParam_ImplicitCast = Parms.CallFunc_SetPointerScale_NewParam_ImplicitCast;

	if (CallFunc_SetPointerColorAdd_Add_ImplicitCast != nullptr)
		*CallFunc_SetPointerColorAdd_Add_ImplicitCast = Parms.CallFunc_SetPointerColorAdd_Add_ImplicitCast;

	if (CallFunc_SetInnerRingScales_Scale0_ImplicitCast != nullptr)
		*CallFunc_SetInnerRingScales_Scale0_ImplicitCast = Parms.CallFunc_SetInnerRingScales_Scale0_ImplicitCast;

	if (CallFunc_SetInnerRingScales_Scale1_ImplicitCast != nullptr)
		*CallFunc_SetInnerRingScales_Scale1_ImplicitCast = Parms.CallFunc_SetInnerRingScales_Scale1_ImplicitCast;

	if (CallFunc_SetInnerRingScales_Scale2_ImplicitCast != nullptr)
		*CallFunc_SetInnerRingScales_Scale2_ImplicitCast = Parms.CallFunc_SetInnerRingScales_Scale2_ImplicitCast;

	return Parms.ReturnValue;

}

}


