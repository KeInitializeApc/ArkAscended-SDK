#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemCanoe.PrimalItemCanoe_C
// (None)

class UClass* UPrimalItemCanoe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemCanoe_C");

	return Clss;
}


// PrimalItemCanoe_C PrimalItemCanoe.Default__PrimalItemCanoe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemCanoe_C* UPrimalItemCanoe_C::GetDefaultObj()
{
	static class UPrimalItemCanoe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemCanoe_C*>(UPrimalItemCanoe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPCanUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CanUse_                                                          (ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AMissionType*                CallFunc_GetActiveMission_ReturnValue                            (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItemCanoe_C::BPCanUse(bool CanUse_, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "BPCanUse");

	Params::UPrimalItemCanoe_C_BPCanUse_Params Parms{};

	Parms.CanUse_ = CanUse_;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemIcon
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UTexture2D*                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  OutIcon_Loc                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItemCanoe_C::BPGetItemIcon(class AShooterPlayerController** ForPC, class UTexture2D* OutIcon_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "BPGetItemIcon");

	Params::UPrimalItemCanoe_C_BPGetItemIcon_Params Parms{};

	Parms.OutIcon_Loc = OutIcon_Loc;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item = Parms.K2Node_DynamicCast_AsPrimal_Item;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomIconMaterialParent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMaterialInterface*          OutMat_Loc                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItemCanoe_C::BPGetCustomIconMaterialParent(class UMaterialInterface* OutMat_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "BPGetCustomIconMaterialParent");

	Params::UPrimalItemCanoe_C_BPGetCustomIconMaterialParent_Params Parms{};

	Parms.OutMat_Loc = OutMat_Loc;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item = Parms.K2Node_DynamicCast_AsPrimal_Item;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemCanoe.PrimalItemCanoe_C.SetColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      OutColors_Loc                                                    (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue                                       (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<double>                     CallFunc_Array_Length_TargetArray_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     CallFunc_Array_Get_TargetArray_ImplicitCast                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)

int32 UPrimalItemCanoe_C::SetColors(const TArray<int32>& OutColors_Loc, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, double CallFunc_Array_Get_Item, int32 CallFunc_Round_ReturnValue, TArray<double>* CallFunc_Array_Length_TargetArray_ImplicitCast, const TArray<double>& CallFunc_Array_Get_TargetArray_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "SetColors");

	Params::UPrimalItemCanoe_C_SetColors_Params Parms{};

	Parms.OutColors_Loc = OutColors_Loc;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Array_Get_TargetArray_ImplicitCast = CallFunc_Array_Get_TargetArray_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_TargetArray_ImplicitCast != nullptr)
		*CallFunc_Array_Length_TargetArray_ImplicitCast = std::move(Parms.CallFunc_Array_Length_TargetArray_ImplicitCast);

	return Parms.ReturnValue;

}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPInitIconMaterial
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      OutColors_Loc                                                    (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemCanoe_C::BPInitIconMaterial(const TArray<int32>& OutColors_Loc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "BPInitIconMaterial");

	Params::UPrimalItemCanoe_C_BPInitIconMaterial_Params Parms{};

	Parms.OutColors_Loc = OutColors_Loc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemNameIn                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      OutName_Loc                                                      (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)

class FString UPrimalItemCanoe_C::BPGetItemName(class AShooterPlayerController** ForPC, const class FString& OutName_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "BPGetItemName");

	Params::UPrimalItemCanoe_C_BPGetItemName_Params Parms{};

	Parms.OutName_Loc = OutName_Loc;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomDurabilityText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             OutDurabilityPercent_Loc                                         (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue                                       (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// double                             K2Node_VariableSet_OutDurabilityPercent_Loc_ImplicitCast         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

class FString UPrimalItemCanoe_C::BPGetCustomDurabilityText(double OutDurabilityPercent_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, double K2Node_VariableSet_OutDurabilityPercent_Loc_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "BPGetCustomDurabilityText");

	Params::UPrimalItemCanoe_C_BPGetCustomDurabilityText_Params Parms{};

	Parms.OutDurabilityPercent_Loc = OutDurabilityPercent_Loc;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_VariableSet_OutDurabilityPercent_Loc_ImplicitCast = K2Node_VariableSet_OutDurabilityPercent_Loc_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemDurabilityPercentage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             OutPercent_Loc                                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_OutPercent_Loc_ImplicitCast                   (ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UPrimalItemCanoe_C::BPGetItemDurabilityPercentage(double OutPercent_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, double K2Node_VariableSet_OutPercent_Loc_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemCanoe_C", "BPGetItemDurabilityPercentage");

	Params::UPrimalItemCanoe_C_BPGetItemDurabilityPercentage_Params Parms{};

	Parms.OutPercent_Loc = OutPercent_Loc;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_VariableSet_OutPercent_Loc_ImplicitCast = K2Node_VariableSet_OutPercent_Loc_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


