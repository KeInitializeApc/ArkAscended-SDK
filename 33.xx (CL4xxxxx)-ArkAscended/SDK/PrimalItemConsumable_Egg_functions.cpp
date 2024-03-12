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
// class UPrimalInventoryComponent*   InvComp                                                          (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ByPC                                                             (Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRequestedByPlayer                                               (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bEggAllowed                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsEggItemAllowed_IsAllowed                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool UPrimalItemConsumable_Egg_C::BPAllowRemoteAddToInventory(class AShooterPlayerController** ByPC, bool bRequestedByPlayer, bool bEggAllowed, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C>* K2Node_DynamicCast_AsEgg_Incubator_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsEggItemAllowed_IsAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPAllowRemoteAddToInventory");

	Params::UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params Parms{};

	Parms.bRequestedByPlayer = bRequestedByPlayer;
	Parms.bEggAllowed = bEggAllowed;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsEggItemAllowed_IsAllowed = CallFunc_IsEggItemAllowed_IsAllowed;

	UObject::ProcessEvent(Func, &Parms);

	if (ByPC != nullptr)
		*ByPC = Parms.ByPC;

	if (K2Node_DynamicCast_AsEgg_Incubator_Interface != nullptr)
		*K2Node_DynamicCast_AsEgg_Incubator_Interface = Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetItemDisplaySlot_InSlot                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetItemDisplaySlot_SlotFound                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)

class FString UPrimalItemConsumable_Egg_C::BPGetCustomInventoryWidgetText(class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C>* K2Node_DynamicCast_AsEgg_Incubator_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_GetItemDisplaySlot_InSlot, bool CallFunc_GetItemDisplaySlot_SlotFound, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetItemDisplaySlot_InSlot = CallFunc_GetItemDisplaySlot_InSlot;
	Parms.CallFunc_GetItemDisplaySlot_SlotFound = CallFunc_GetItemDisplaySlot_SlotFound;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsEgg_Incubator_Interface != nullptr)
		*K2Node_DynamicCast_AsEgg_Incubator_Interface = Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


