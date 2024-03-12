#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass GPSHumanAnimBP.GPSHumanAnimBP_C
// (None)

class UClass* UGPSHumanAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GPSHumanAnimBP_C");

	return Clss;
}


// GPSHumanAnimBP_C GPSHumanAnimBP.Default__GPSHumanAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGPSHumanAnimBP_C* UGPSHumanAnimBP_C::GetDefaultObj()
{
	static class UGPSHumanAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGPSHumanAnimBP_C*>(UGPSHumanAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GPSHumanAnimBP.GPSHumanAnimBP_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)

bool UGPSHumanAnimBP_C::UpdateLayeringValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GPSHumanAnimBP_C", "UpdateLayeringValues");

	Params::UGPSHumanAnimBP_C_UpdateLayeringValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


