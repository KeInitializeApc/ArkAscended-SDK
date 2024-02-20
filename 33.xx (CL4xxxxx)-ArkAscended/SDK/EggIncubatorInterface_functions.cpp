#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EggIncubatorInterface.EggIncubatorInterface_C
// (None)

class UClass* IEggIncubatorInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EggIncubatorInterface_C");

	return Clss;
}


// EggIncubatorInterface_C EggIncubatorInterface.Default__EggIncubatorInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IEggIncubatorInterface_C* IEggIncubatorInterface_C::GetDefaultObj()
{
	static class IEggIncubatorInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IEggIncubatorInterface_C*>(IEggIncubatorInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItemConsumable_Egg_C* EggItem                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               IsAllowed                                                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool IEggIncubatorInterface_C::IsEggItemAllowed(class UPrimalItemConsumable_Egg_C** EggItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EggIncubatorInterface_C", "IsEggItemAllowed");

	Params::IEggIncubatorInterface_C_IsEggItemAllowed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EggItem != nullptr)
		*EggItem = Parms.EggItem;

	return Parms.ReturnValue;

}


// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ForItem                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              InSlot                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               SlotFound                                                        (ConstParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool IEggIncubatorInterface_C::GetItemDisplaySlot(int32* InSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EggIncubatorInterface_C", "GetItemDisplaySlot");

	Params::IEggIncubatorInterface_C_GetItemDisplaySlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InSlot != nullptr)
		*InSlot = Parms.InSlot;

	return Parms.ReturnValue;

}

}


