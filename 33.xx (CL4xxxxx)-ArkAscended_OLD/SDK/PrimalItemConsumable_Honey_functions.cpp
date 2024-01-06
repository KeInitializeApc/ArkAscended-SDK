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
// class APrimalCharacter*            FromCharacter                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bWasThrown                                                       (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemConsumable_Honey_C::BPNotifyDropped(class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Honey_C", "BPNotifyDropped");

	Params::UPrimalItemConsumable_Honey_C_BPNotifyDropped_Params Parms{};

	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


