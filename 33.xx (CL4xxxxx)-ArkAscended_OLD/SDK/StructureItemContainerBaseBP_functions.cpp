#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
// (Actor)

class UClass* AStructureItemContainerBaseBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureItemContainerBaseBP_C");

	return Clss;
}


// StructureItemContainerBaseBP_C StructureItemContainerBaseBP.Default__StructureItemContainerBaseBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStructureItemContainerBaseBP_C* AStructureItemContainerBaseBP_C::GetDefaultObj()
{
	static class AStructureItemContainerBaseBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStructureItemContainerBaseBP_C*>(AStructureItemContainerBaseBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.BPOnTransferAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   ToInventory                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UPrimalInventoryComponent* AStructureItemContainerBaseBP_C::BPOnTransferAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructureItemContainerBaseBP_C", "BPOnTransferAll");

	Params::AStructureItemContainerBaseBP_C_BPOnTransferAll_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


