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
// class UPrimalInventoryComponent*   InvComp                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ByPC                                                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRequestedByPlayer                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bEggAllowed                                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsEggItemAllowed_IsAllowed                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, SubobjectReference)

bool UPrimalItemConsumable_Egg_C::BPAllowRemoteAddToInventory(class AShooterPlayerController** ByPC, bool bRequestedByPlayer, bool ReturnValue, TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface, bool CallFunc_IsEggItemAllowed_IsAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPAllowRemoteAddToInventory");

	Params::UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params Parms{};

	Parms.bRequestedByPlayer = bRequestedByPlayer;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface = K2Node_DynamicCast_AsEgg_Incubator_Interface;
	Parms.CallFunc_IsEggItemAllowed_IsAllowed = CallFunc_IsEggItemAllowed_IsAllowed;

	UObject::ProcessEvent(Func, &Parms);

	if (ByPC != nullptr)
		*ByPC = Parms.ByPC;

	return Parms.ReturnValue;

}


// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetItemDisplaySlot_InSlot                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetItemDisplaySlot_SlotFound                            (ExportObject, Net, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class FString UPrimalItemConsumable_Egg_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, bool* CallFunc_IsValid_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface, int32 CallFunc_GetItemDisplaySlot_InSlot, bool CallFunc_GetItemDisplaySlot_SlotFound, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface = K2Node_DynamicCast_AsEgg_Incubator_Interface;
	Parms.CallFunc_GetItemDisplaySlot_InSlot = CallFunc_GetItemDisplaySlot_InSlot;
	Parms.CallFunc_GetItemDisplaySlot_SlotFound = CallFunc_GetItemDisplaySlot_SlotFound;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}

}


