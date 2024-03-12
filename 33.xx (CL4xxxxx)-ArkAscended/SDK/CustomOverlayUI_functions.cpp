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
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UUserWidget*                 Child                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   Size                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
// int32                              ZOrder                                                           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

int32 UCustomOverlayUI_C::AddChildToCanvas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "AddChildToCanvas");

	Params::UCustomOverlayUI_C_AddChildToCanvas_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetArrowAlpha
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TheLeftRightAlpha                                                (ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TheUpDownAlpha                                                   (ConstParm, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              Scale                                                            (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)

float UCustomOverlayUI_C::SetPointerScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetPointerScale");

	Params::UCustomOverlayUI_C_SetPointerScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomOverlayUI.CustomOverlayUI_C.ShowReticule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              Scale0                                                           (Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Scale1                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Scale2                                                           (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUserWidget*                 K2Node_Event_Child                                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   K2Node_Event_Size                                                (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_zOrder                                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_1                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_2                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// float                              K2Node_Event_theLeftRightAlpha                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_theUpDownAlpha                                      (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_3                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_Event_scale                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_show                                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_4                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_5                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              K2Node_Event_add                                                 (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale0                                              (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale1                                              (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_scale2                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_6                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_Bottom_ImplicitCast                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast               (BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetPointerScale_NewParam_ImplicitCast                   (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetPointerColorAdd_Add_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale0_ImplicitCast                  (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale1_ImplicitCast                  (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetInnerRingScales_Scale2_ImplicitCast                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UCustomOverlayUI_C::ExecuteUbergraph_CustomOverlayUI(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPanelSlot** CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot** K2Node_DynamicCast_AsCanvas_Panel_Slot, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, bool* K2Node_DynamicCast_bSuccess_3, bool* K2Node_DynamicCast_bSuccess_4, bool* K2Node_DynamicCast_bSuccess_5, bool* K2Node_DynamicCast_bSuccess_6, bool* K2Node_DynamicCast_bSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "ExecuteUbergraph_CustomOverlayUI");

	Params::UCustomOverlayUI_C_ExecuteUbergraph_CustomOverlayUI_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (K2Node_DynamicCast_AsCanvas_Panel_Slot != nullptr)
		*K2Node_DynamicCast_AsCanvas_Panel_Slot = Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (K2Node_DynamicCast_bSuccess_7 != nullptr)
		*K2Node_DynamicCast_bSuccess_7 = Parms.K2Node_DynamicCast_bSuccess_7;

	return Parms.ReturnValue;

}

}


