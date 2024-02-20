#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C
// (Actor)

class UClass* AMainMenuGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuGameMode_C");

	return Clss;
}


// MainMenuGameMode_C MainMenuGameMode.Default__MainMenuGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenuGameMode_C* AMainMenuGameMode_C::GetDefaultObj()
{
	static class AMainMenuGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuGameMode_C*>(AMainMenuGameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuGameMode.MainMenuGameMode_C.ExecuteUbergraph_MainMenuGameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

int32 AMainMenuGameMode_C::ExecuteUbergraph_MainMenuGameMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuGameMode_C", "ExecuteUbergraph_MainMenuGameMode");

	Params::AMainMenuGameMode_C_ExecuteUbergraph_MainMenuGameMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


