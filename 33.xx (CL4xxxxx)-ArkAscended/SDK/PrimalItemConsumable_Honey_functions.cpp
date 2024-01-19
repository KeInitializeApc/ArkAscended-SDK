#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C
// (None)

class UClass* UPrimalItemConsumable_Honey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Honey_C");

	return Clss;
}


// PrimalItemConsumable_Honey_C PrimalItemConsumable_Honey.Default__PrimalItemConsumable_Honey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Honey_C* UPrimalItemConsumable_Honey_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Honey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Honey_C*>(UPrimalItemConsumable_Honey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.BPNotifyDropped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            FromCharacter                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bWasThrown                                                       (Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemConsumable_Honey_C::BPNotifyDropped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Honey_C", "BPNotifyDropped");

	Params::UPrimalItemConsumable_Honey_C_BPNotifyDropped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


