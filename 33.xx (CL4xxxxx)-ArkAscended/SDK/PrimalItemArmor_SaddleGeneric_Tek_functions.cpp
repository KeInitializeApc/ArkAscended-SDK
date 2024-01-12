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
// int32                              RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

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
// int32                              AmountToDecreaseBy                                               (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// bool                               CanDecrease                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               ReturnVal                                                        (EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemArmor_SaddleGeneric_Tek_C::CanElementDecrease(bool* ReturnVal, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "CanElementDecrease");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_CanElementDecrease_Params Parms{};

	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

double UPrimalItemArmor_SaddleGeneric_Tek_C::BPGetCustomInventoryWidgetText(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              AmountToDecreaseBy                                               (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)

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
// double                             Percent                                                          (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

double UPrimalItemArmor_SaddleGeneric_Tek_C::IncreaseElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "IncreaseElement");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_Event_bIsFromSaveGame                                     (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_CanElementDecrease_CanDecrease                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UseItemOntoItem_ReturnValue                             (Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_2                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// double                             K2Node_CustomEvent_Percent                                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_3                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (ConstParm, BlueprintVisible, Net, Parm, ReturnParm, EditConst, SubobjectReference)

int32 UPrimalItemArmor_SaddleGeneric_Tek_C::ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(class UClass* CallFunc_ClassAssetResolve_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* CallFunc_FClamp_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_3, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek_Params Parms{};

	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue_1 != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue_1 = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue_2 != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue_2 = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_2;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue_3 != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue_3 = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_3;

	return Parms.ReturnValue;

}

}


