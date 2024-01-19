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
// class UPrimalInventoryComponent*   InvComp                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ByPC                                                             (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               bRequestedByPlayer                                               (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bEggAllowed                                                      (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsEggItemAllowed_IsAllowed                              (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool UPrimalItemConsumable_Egg_C::BPAllowRemoteAddToInventory(bool bRequestedByPlayer, bool ReturnValue, bool* bEggAllowed, bool* CallFunc_DoesImplementInterface_ReturnValue, bool* CallFunc_IsEggItemAllowed_IsAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPAllowRemoteAddToInventory");

	Params::UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params Parms{};

	Parms.bRequestedByPlayer = bRequestedByPlayer;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bEggAllowed != nullptr)
		*bEggAllowed = Parms.bEggAllowed;

	if (CallFunc_DoesImplementInterface_ReturnValue != nullptr)
		*CallFunc_DoesImplementInterface_ReturnValue = Parms.CallFunc_DoesImplementInterface_ReturnValue;

	if (CallFunc_IsEggItemAllowed_IsAllowed != nullptr)
		*CallFunc_IsEggItemAllowed_IsAllowed = Parms.CallFunc_IsEggItemAllowed_IsAllowed;

	return Parms.ReturnValue;

}


// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetItemDisplaySlot_InSlot                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetItemDisplaySlot_SlotFound                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class FString UPrimalItemConsumable_Egg_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, bool* CallFunc_DoesImplementInterface_ReturnValue, int32* CallFunc_GetItemDisplaySlot_InSlot, bool* CallFunc_GetItemDisplaySlot_SlotFound, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_DoesImplementInterface_ReturnValue != nullptr)
		*CallFunc_DoesImplementInterface_ReturnValue = Parms.CallFunc_DoesImplementInterface_ReturnValue;

	if (CallFunc_GetItemDisplaySlot_InSlot != nullptr)
		*CallFunc_GetItemDisplaySlot_InSlot = Parms.CallFunc_GetItemDisplaySlot_InSlot;

	if (CallFunc_GetItemDisplaySlot_SlotFound != nullptr)
		*CallFunc_GetItemDisplaySlot_SlotFound = Parms.CallFunc_GetItemDisplaySlot_SlotFound;

	return Parms.ReturnValue;

}

}


