#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WildcardTools.WildcardHelpers
// (None)

class UClass* UWildcardHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WildcardHelpers");

	return Clss;
}


// WildcardHelpers WildcardTools.Default__WildcardHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UWildcardHelpers* UWildcardHelpers::GetDefaultObj()
{
	static class UWildcardHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UWildcardHelpers*>(UWildcardHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function WildcardTools.WildcardHelpers.CreateJIRABug
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Args                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class FString UWildcardHelpers::CreateJIRABug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WildcardHelpers", "CreateJIRABug");

	Params::UWildcardHelpers_CreateJIRABug_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


