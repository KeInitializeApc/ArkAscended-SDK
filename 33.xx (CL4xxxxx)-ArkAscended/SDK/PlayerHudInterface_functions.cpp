#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerHudInterface.PlayerHudInterface_C
// (None)

class UClass* IPlayerHudInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerHudInterface_C");

	return Clss;
}


// PlayerHudInterface_C PlayerHudInterface.Default__PlayerHudInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPlayerHudInterface_C* IPlayerHudInterface_C::GetDefaultObj()
{
	static class IPlayerHudInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPlayerHudInterface_C*>(IPlayerHudInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerHudInterface.PlayerHudInterface_C.SetElementBarBoostIconHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

void IPlayerHudInterface_C::SetElementBarBoostIconHidden(bool* IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHudInterface_C", "SetElementBarBoostIconHidden");

	Params::IPlayerHudInterface_C_SetElementBarBoostIconHidden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsHidden != nullptr)
		*IsHidden = Parms.IsHidden;

}

}


