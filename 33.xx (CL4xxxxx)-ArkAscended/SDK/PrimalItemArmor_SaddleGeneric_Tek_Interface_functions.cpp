#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C
// (None)

class UClass* IPrimalItemArmor_SaddleGeneric_Tek_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SaddleGeneric_Tek_Interface_C");

	return Clss;
}


// PrimalItemArmor_SaddleGeneric_Tek_Interface_C PrimalItemArmor_SaddleGeneric_Tek_Interface.Default__PrimalItemArmor_SaddleGeneric_Tek_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C* IPrimalItemArmor_SaddleGeneric_Tek_Interface_C::GetDefaultObj()
{
	static class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPrimalItemArmor_SaddleGeneric_Tek_Interface_C*>(IPrimalItemArmor_SaddleGeneric_Tek_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.IGet Max Ammo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

void IPrimalItemArmor_SaddleGeneric_Tek_Interface_C::IGet_Max_Ammo(int32* RetVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_Interface_C", "IGet Max Ammo");

	Params::IPrimalItemArmor_SaddleGeneric_Tek_Interface_C_IGet_Max_Ammo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

}


// Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.ISetElementToMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPrimalItemArmor_SaddleGeneric_Tek_Interface_C::ISetElementToMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_Interface_C", "ISetElementToMax");



	UObject::ProcessEvent(Func, nullptr);

}

}


