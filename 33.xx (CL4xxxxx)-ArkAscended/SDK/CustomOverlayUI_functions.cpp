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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UCustomOverlayUI_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "Tick");

	Params::UCustomOverlayUI_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.AddChildToCanvas
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Child                                                            (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
// int32                              ZOrder                                                           (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

struct FVector2D UCustomOverlayUI_C::AddChildToCanvas(int32* ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "AddChildToCanvas");

	Params::UCustomOverlayUI_C_AddChildToCanvas_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ZOrder != nullptr)
		*ZOrder = Parms.ZOrder;

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetArrowAlpha
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TheLeftRightAlpha                                                (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TheUpDownAlpha                                                   (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              Scale                                                            (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)

void UCustomOverlayUI_C::SetPointerScale(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetPointerScale");

	Params::UCustomOverlayUI_C_SetPointerScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function CustomOverlayUI.CustomOverlayUI_C.ShowReticule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              Scale0                                                           (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Scale1                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Scale2                                                           (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget                         (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UUserWidget*                 K2Node_Event_Child                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   K2Node_Event_Size                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_zOrder                                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_1                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_2                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// float                              K2Node_Event_theLeftRightAlpha                                   (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_theUpDownAlpha                                      (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_3                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_Event_scale                                               (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_show                                                (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_4                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_5                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              K2Node_Event_add                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale0                                              (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale1                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale2                                              (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_6                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_Bottom_ImplicitCast                            (Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetPointerScale_NewParam_ImplicitCast                   (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetPointerColorAdd_Add_ImplicitCast                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale0_ImplicitCast                  (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale1_ImplicitCast                  (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale2_ImplicitCast                  (ConstParm, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

double UCustomOverlayUI_C::ExecuteUbergraph_CustomOverlayUI(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "ExecuteUbergraph_CustomOverlayUI");

	Params::UCustomOverlayUI_C_ExecuteUbergraph_CustomOverlayUI_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	return Parms.ReturnValue;

}

}


