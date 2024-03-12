#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDNotificationEntrySmall.HUDNotificationEntrySmall_C
// (None)

class UClass* UHUDNotificationEntrySmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDNotificationEntrySmall_C");

	return Clss;
}


// HUDNotificationEntrySmall_C HUDNotificationEntrySmall.Default__HUDNotificationEntrySmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDNotificationEntrySmall_C* UHUDNotificationEntrySmall_C::GetDefaultObj()
{
	static class UHUDNotificationEntrySmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDNotificationEntrySmall_C*>(UHUDNotificationEntrySmall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_QuantityText_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        Temp_text_Variable                                               (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FText UHUDNotificationEntrySmall_C::Get_QuantityText_Text(bool Temp_bool_Variable, class FText* Temp_text_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationEntrySmall_C", "Get_QuantityText_Text");

	Params::UHUDNotificationEntrySmall_C_Get_QuantityText_Text_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_text_Variable != nullptr)
		*Temp_text_Variable = Parms.Temp_text_Variable;

	return Parms.ReturnValue;

}


// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.CheckDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequireUpdate                                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsSOTF_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// struct FHUDNotificationEntry_StructCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

int32 UHUDNotificationEntrySmall_C::CheckDestroy(bool* RequireUpdate, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsSOTF_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, const struct FHUDNotificationEntry_Struct& CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationEntrySmall_C", "CheckDestroy");

	Params::UHUDNotificationEntrySmall_C_CheckDestroy_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsSOTF_ReturnValue = CallFunc_IsSOTF_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RequireUpdate != nullptr)
		*RequireUpdate = Parms.RequireUpdate;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast != nullptr)
		*CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast = Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;

	return Parms.ReturnValue;

}


// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.UpdateProgressData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentMaxTime                                                   (ConstParm, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              IndexCurrentMaxTime                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FHUDNotificationEntry_StructCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UHUDNotificationEntrySmall_C::UpdateProgressData(double CurrentMaxTime, int32* IndexCurrentMaxTime, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, const struct FHUDNotificationEntry_Struct& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationEntrySmall_C", "UpdateProgressData");

	Params::UHUDNotificationEntrySmall_C_UpdateProgressData_Params Parms{};

	Parms.CurrentMaxTime = CurrentMaxTime;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (IndexCurrentMaxTime != nullptr)
		*IndexCurrentMaxTime = Parms.IndexCurrentMaxTime;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_Image_NotifIcon_Brush
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UHUDNotificationEntrySmall_C::Get_Image_NotifIcon_Brush(bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationEntrySmall_C", "Get_Image_NotifIcon_Brush");

	Params::UHUDNotificationEntrySmall_C_Get_Image_NotifIcon_Brush_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.InitWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDNotificationEntry_StructEntry                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               IsSmallNotification                                              (Edit, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>Entries                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              IndexCurrentMaxTime                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CurrentMaxTime                                                   (ConstParm, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UHUDNotificationEntrySmall_C::InitWidget(bool* IsSmallNotification, int32* IndexCurrentMaxTime, double CurrentMaxTime, double CallFunc_SelectFloat_ReturnValue, TArray<struct FHUDNotificationEntry_Struct>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationEntrySmall_C", "InitWidget");

	Params::UHUDNotificationEntrySmall_C_InitWidget_Params Parms{};

	Parms.CurrentMaxTime = CurrentMaxTime;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSmallNotification != nullptr)
		*IsSmallNotification = Parms.IsSmallNotification;

	if (IndexCurrentMaxTime != nullptr)
		*IndexCurrentMaxTime = Parms.IndexCurrentMaxTime;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.GetNotifStringColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateColor UHUDNotificationEntrySmall_C::GetNotifStringColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationEntrySmall_C", "GetNotifStringColor");

	Params::UHUDNotificationEntrySmall_C_GetNotifStringColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


