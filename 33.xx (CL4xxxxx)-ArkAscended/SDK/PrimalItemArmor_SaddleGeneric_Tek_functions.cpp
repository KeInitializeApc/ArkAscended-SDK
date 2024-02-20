#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
// (None)

class UClass* UPrimalItemArmor_SaddleGeneric_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SaddleGeneric_Tek_C");

	return Clss;
}


// PrimalItemArmor_SaddleGeneric_Tek_C PrimalItemArmor_SaddleGeneric_Tek.Default__PrimalItemArmor_SaddleGeneric_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SaddleGeneric_Tek_C* UPrimalItemArmor_SaddleGeneric_Tek_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SaddleGeneric_Tek_C*>(UPrimalItemArmor_SaddleGeneric_Tek_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IGet Max Ammo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

int32 UPrimalItemArmor_SaddleGeneric_Tek_C::IGet_Max_Ammo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "IGet Max Ammo");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_IGet_Max_Ammo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.CanElementDecrease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CanDecrease                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnVal                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UPrimalItemArmor_SaddleGeneric_Tek_C::CanElementDecrease(bool CanDecrease, bool* ReturnVal, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "CanElementDecrease");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_CanElementDecrease_Params Parms{};

	Parms.CanDecrease = CanDecrease;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class FString UPrimalItemArmor_SaddleGeneric_Tek_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemArmor_SaddleGeneric_Tek_C::BlueprintEquipped(bool bIsFromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_BlueprintEquipped_Params Parms{};

	Parms.bIsFromSaveGame = bIsFromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_SaddleGeneric_Tek_C::BlueprintUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "BlueprintUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.TryToDecreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

int32 UPrimalItemArmor_SaddleGeneric_Tek_C::TryToDecreaseElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "TryToDecreaseElement");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_TryToDecreaseElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.SetElementToMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_SaddleGeneric_Tek_C::SetElementToMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "SetElementToMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IncreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)

void UPrimalItemArmor_SaddleGeneric_Tek_C::IncreaseElement(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "IncreaseElement");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ISetElementToMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_SaddleGeneric_Tek_C::ISetElementToMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "ISetElementToMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_bIsFromSaveGame                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanElementDecrease_CanDecrease                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_UseItemOntoItem_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             K2Node_CustomEvent_Percent                                       (BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_3                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

int32 UPrimalItemArmor_SaddleGeneric_Tek_C::ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(bool* K2Node_Event_bIsFromSaveGame, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, int32* K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_CanElementDecrease_CanDecrease, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool CallFunc_UseItemOntoItem_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* K2Node_CustomEvent_Percent, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double* CallFunc_FClamp_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_3, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek_Params Parms{};

	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Buff = K2Node_ClassDynamicCast_AsPrimal_Buff;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1 = CallFunc_GetWeaponClipAmmo_ReturnValue_1;
	Parms.CallFunc_UseItemOntoItem_ReturnValue = CallFunc_UseItemOntoItem_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_2 = CallFunc_GetWeaponClipAmmo_ReturnValue_2;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_3 = CallFunc_GetWeaponClipAmmo_ReturnValue_3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_bIsFromSaveGame != nullptr)
		*K2Node_Event_bIsFromSaveGame = Parms.K2Node_Event_bIsFromSaveGame;

	if (K2Node_CustomEvent_AmountToDecreaseBy != nullptr)
		*K2Node_CustomEvent_AmountToDecreaseBy = Parms.K2Node_CustomEvent_AmountToDecreaseBy;

	if (CallFunc_CanElementDecrease_CanDecrease != nullptr)
		*CallFunc_CanElementDecrease_CanDecrease = Parms.CallFunc_CanElementDecrease_CanDecrease;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_CustomEvent_Percent != nullptr)
		*K2Node_CustomEvent_Percent = Parms.K2Node_CustomEvent_Percent;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	return Parms.ReturnValue;

}

}


