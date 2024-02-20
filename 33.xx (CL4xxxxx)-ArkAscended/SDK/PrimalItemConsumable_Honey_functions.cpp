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
// class APrimalCharacter*            FromCharacter                                                    (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bWasThrown                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UPrimalItemConsumable_Honey_C::BPNotifyDropped(class APrimalCharacter* FromCharacter, bool bWasThrown, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Honey_C", "BPNotifyDropped");

	Params::UPrimalItemConsumable_Honey_C_BPNotifyDropped_Params Parms{};

	Parms.FromCharacter = FromCharacter;
	Parms.bWasThrown = bWasThrown;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}

}


