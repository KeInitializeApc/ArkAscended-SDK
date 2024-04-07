#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C
// (None)

class UClass* UMapSpawnPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapSpawnPoint_C");

	return Clss;
}


// MapSpawnPoint_C MapSpawnPoint.Default__MapSpawnPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapSpawnPoint_C* UMapSpawnPoint_C::GetDefaultObj()
{
	static class UMapSpawnPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapSpawnPoint_C*>(UMapSpawnPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESlateVisibility UMapSpawnPoint_C::Get_Default__MapSpawnPoint_C_Visiblity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSpawnPoint_C", "Get_Default__MapSpawnPoint_C_Visiblity_0");

	Params::UMapSpawnPoint_C_Get_Default__MapSpawnPoint_C_Visiblity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


