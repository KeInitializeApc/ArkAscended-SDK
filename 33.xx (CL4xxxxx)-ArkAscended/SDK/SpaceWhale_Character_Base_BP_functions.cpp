#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpaceWhale_Character_Base_BP.SpaceWhale_Character_Base_BP_C
// (Actor, Pawn)

class UClass* ASpaceWhale_Character_Base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceWhale_Character_Base_BP_C");

	return Clss;
}


// SpaceWhale_Character_Base_BP_C SpaceWhale_Character_Base_BP.Default__SpaceWhale_Character_Base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpaceWhale_Character_Base_BP_C* ASpaceWhale_Character_Base_BP_C::GetDefaultObj()
{
	static class ASpaceWhale_Character_Base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpaceWhale_Character_Base_BP_C*>(ASpaceWhale_Character_Base_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpaceWhale_Character_Base_BP.SpaceWhale_Character_Base_BP_C.OnSaddleEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool ASpaceWhale_Character_Base_BP_C::OnSaddleEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceWhale_Character_Base_BP_C", "OnSaddleEquipped");

	Params::ASpaceWhale_Character_Base_BP_C_OnSaddleEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


