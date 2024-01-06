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
// class UPrimalItemConsumable_Egg_C* EggItem                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               IsAllowed                                                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

bool IEggIncubatorInterface_C::IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* EggItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EggIncubatorInterface_C", "IsEggItemAllowed");

	Params::IEggIncubatorInterface_C_IsEggItemAllowed_Params Parms{};

	Parms.EggItem = EggItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ForItem                                                          (OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InSlot                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               SlotFound                                                        (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UPrimalItem* IEggIncubatorInterface_C::GetItemDisplaySlot(int32 InSlot, bool SlotFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EggIncubatorInterface_C", "GetItemDisplaySlot");

	Params::IEggIncubatorInterface_C_GetItemDisplaySlot_Params Parms{};

	Parms.InSlot = InSlot;
	Parms.SlotFound = SlotFound;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

