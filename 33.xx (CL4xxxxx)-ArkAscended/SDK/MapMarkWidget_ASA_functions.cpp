#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapMarkWidget_ASA.MapMarkWidget_ASA_C
// (None)

class UClass* UMapMarkWidget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapMarkWidget_ASA_C");

	return Clss;
}


// MapMarkWidget_ASA_C MapMarkWidget_ASA.Default__MapMarkWidget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapMarkWidget_ASA_C* UMapMarkWidget_ASA_C::GetDefaultObj()
{
	static class UMapMarkWidget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapMarkWidget_ASA_C*>(UMapMarkWidget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Track Entry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// bool                               Click_was_to_track                                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Was_tracked                                                      (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Lowest_dist_index                                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// double                             Lowest_Dist                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTracking_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)

bool UMapMarkWidget_ASA_C::Handle_Clicking_Track_Entry(bool* Success, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "Handle Clicking Track Entry");

	Params::UMapMarkWidget_ASA_C_Handle_Clicking_Track_Entry_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Death Marks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// bool                               Click_was_to_track                                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Was_tracked                                                      (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Lowest_dist_index                                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// double                             Lowest_Dist                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    CallFunc_PCToSPC_ReturnValue                                     (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVectorBoolPair             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool UMapMarkWidget_ASA_C::Handle_Clicking_Death_Marks(bool* Success, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVectorBoolPair& CallFunc_Array_Get_Item, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "Handle Clicking Death Marks");

	Params::UMapMarkWidget_ASA_C_Handle_Clicking_Death_Marks_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

bool UMapMarkWidget_ASA_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "OnPreviewMouseButtonDown");

	Params::UMapMarkWidget_ASA_C_OnPreviewMouseButtonDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetProgressPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UMapMarkWidget_ASA_C::SetProgressPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "SetProgressPercent");

	Params::UMapMarkWidget_ASA_C_SetProgressPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.IsTracking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMapMarkWidget_ASA_C::IsTracking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "IsTracking");

	Params::UMapMarkWidget_ASA_C_IsTracking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsHovered_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsTracking_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UMapMarkWidget_ASA_C::Init(bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "Init");

	Params::UMapMarkWidget_ASA_C_Init_Params Parms{};

	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.CanTrackMark
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can                                                              (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UMapMarkWidget_ASA_C::CanTrackMark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "CanTrackMark");

	Params::UMapMarkWidget_ASA_C_CanTrackMark_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateVisualStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapMarkWidget_ASA_C::UpdateVisualStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "UpdateVisualStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTrackStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapMarkWidget_ASA_C::SetTrackStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "SetTrackStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetNormalStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapMarkWidget_ASA_C::SetNormalStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "SetNormalStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTextAndBG
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                BGColor                                                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

class FText UMapMarkWidget_ASA_C::SetTextAndBG(const class FString& NewText, struct FLinearColor* BGColor, class FString* CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "SetTextAndBG");

	Params::UMapMarkWidget_ASA_C_SetTextAndBG_Params Parms{};

	Parms.NewText = NewText;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BGColor != nullptr)
		*BGColor = std::move(Parms.BGColor);

	if (CallFunc_GetSubstring_ReturnValue != nullptr)
		*CallFunc_GetSubstring_ReturnValue = std::move(Parms.CallFunc_GetSubstring_ReturnValue);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetHoverStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapMarkWidget_ASA_C::SetHoverStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "SetHoverStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMapMarkWidget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UMapMarkWidget_ASA_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "PreConstruct");

	Params::UMapMarkWidget_ASA_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.RefreshConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapMarkWidget_ASA_C::RefreshConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "RefreshConstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapMarkWidget_ASA_C::BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateTextSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Scale                                                            (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)

double UMapMarkWidget_ASA_C::UpdateTextSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "UpdateTextSize");

	Params::UMapMarkWidget_ASA_C_UpdateTextSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.ExecuteUbergraph_MapMarkWidget_ASA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    CallFunc_PCToSPC_ReturnValue                                     (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_Scale                                         (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue                       (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Handle_Clicking_Death_Marks_success                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Handle_Clicking_Death_Marks_click_was_to_track          (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Handle_Clicking_Track_Entry_success                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Handle_Clicking_Track_Entry_click_was_to_track          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UMapMarkWidget_ASA_C::ExecuteUbergraph_MapMarkWidget_ASA(int32* EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "ExecuteUbergraph_MapMarkWidget_ASA");

	Params::UMapMarkWidget_ASA_C_ExecuteUbergraph_MapMarkWidget_ASA_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue = CallFunc_Conv_DoubleToVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HaandleEditMark__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                Mark                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FMinimapMark UMapMarkWidget_ASA_C::HaandleEditMark__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "HaandleEditMark__DelegateSignature");

	Params::UMapMarkWidget_ASA_C_HaandleEditMark__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HandleTracking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                Mark                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               IsTracking                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UMapMarkWidget_ASA_C::HandleTracking__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkWidget_ASA_C", "HandleTracking__DelegateSignature");

	Params::UMapMarkWidget_ASA_C_HandleTracking__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


