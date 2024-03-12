#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Base_Battery.PrimalItem_Base_Battery_C
// (None)

class UClass* UPrimalItem_Base_Battery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Base_Battery_C");

	return Clss;
}


// PrimalItem_Base_Battery_C PrimalItem_Base_Battery.Default__PrimalItem_Base_Battery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Base_Battery_C* UPrimalItem_Base_Battery_C::GetDefaultObj()
{
	static class UPrimalItem_Base_Battery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Base_Battery_C*>(UPrimalItem_Base_Battery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   ToInventory                                                      (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class APrimalStructureItemContainer*K2Node_DynamicCast_AsPrimal_Structure_Item_Container             (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_Base_Battery_C::BPForceAllowRemoteAddToInventory(class UPrimalInventoryComponent** ToInventory, bool* RetVal, class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Base_Battery_C", "BPForceAllowRemoteAddToInventory");

	Params::UPrimalItem_Base_Battery_C_BPForceAllowRemoteAddToInventory_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ToInventory != nullptr)
		*ToInventory = Parms.ToInventory;

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


