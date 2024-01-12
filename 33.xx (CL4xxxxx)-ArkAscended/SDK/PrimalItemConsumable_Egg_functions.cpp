#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C
// (None)

class UClass* UPrimalItemConsumable_Egg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_C");

	return Clss;
}


// PrimalItemConsumable_Egg_C PrimalItemConsumable_Egg.Default__PrimalItemConsumable_Egg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_C* UPrimalItemConsumable_Egg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_C*>(UPrimalItemConsumable_Egg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPAllowRemoteAddToInventory
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   InvComp                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ByPC                                                             (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bRequestedByPlayer                                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bEggAllowed                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsEggItemAllowed_IsAllowed                              (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemConsumable_Egg_C::BPAllowRemoteAddToInventory(class UPrimalInventoryComponent** InvComp, class AShooterPlayerController* ByPC, bool bEggAllowed, class AActor** CallFunc_GetOwner_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C>* K2Node_DynamicCast_AsEgg_Incubator_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool* CallFunc_IsEggItemAllowed_IsAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPAllowRemoteAddToInventory");

	Params::UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params Parms{};

	Parms.ByPC = ByPC;
	Parms.bEggAllowed = bEggAllowed;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InvComp != nullptr)
		*InvComp = Parms.InvComp;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_AsEgg_Incubator_Interface != nullptr)
		*K2Node_DynamicCast_AsEgg_Incubator_Interface = Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsEggItemAllowed_IsAllowed != nullptr)
		*CallFunc_IsEggItemAllowed_IsAllowed = Parms.CallFunc_IsEggItemAllowed_IsAllowed;

	return Parms.ReturnValue;

}


// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetItemDisplaySlot_InSlot                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetItemDisplaySlot_SlotFound                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UPrimalItemConsumable_Egg_C::BPGetCustomInventoryWidgetText(class AActor** CallFunc_GetOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C>* K2Node_DynamicCast_AsEgg_Incubator_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_GetItemDisplaySlot_InSlot, bool CallFunc_GetItemDisplaySlot_SlotFound, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetItemDisplaySlot_InSlot = CallFunc_GetItemDisplaySlot_InSlot;
	Parms.CallFunc_GetItemDisplaySlot_SlotFound = CallFunc_GetItemDisplaySlot_SlotFound;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsEgg_Incubator_Interface != nullptr)
		*K2Node_DynamicCast_AsEgg_Incubator_Interface = Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}

}


