#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NISBlueprint.NISLibrary
// (None)

class UClass* UNISLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NISLibrary");

	return Clss;
}


// NISLibrary NISBlueprint.Default__NISLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNISLibrary* UNISLibrary::GetDefaultObj()
{
	static class UNISLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNISLibrary*>(UNISLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NISBlueprint.NISLibrary.SetNISSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Sharpness                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNISLibrary::SetNISSharpness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "SetNISSharpness");

	Params::UNISLibrary_SetNISSharpness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.SetNISMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUNISMode               NISMode                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EUNISMode UNISLibrary::SetNISMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "SetNISMode");

	Params::UNISLibrary_SetNISMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              CustomScreenPercentage                                           (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNISLibrary::SetNISCustomScreenPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "SetNISCustomScreenPercentage");

	Params::UNISLibrary_SetNISCustomScreenPercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.IsNISSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UNISLibrary::IsNISSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "IsNISSupported");

	Params::UNISLibrary_IsNISSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.IsNISModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUNISMode               NISMode                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UNISLibrary::IsNISModeSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "IsNISModeSupported");

	Params::UNISLibrary_IsNISModeSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.GetSupportedNISModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUNISMode>       ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<enum class EUNISMode> UNISLibrary::GetSupportedNISModes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetSupportedNISModes");

	Params::UNISLibrary_GetSupportedNISModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinScreenPercentage                                              (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UNISLibrary::GetNISScreenPercentageRange(float* MaxScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetNISScreenPercentageRange");

	Params::UNISLibrary_GetNISScreenPercentageRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUNISMode               NISMode                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UNISLibrary::GetNISRecommendedScreenPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetNISRecommendedScreenPercentage");

	Params::UNISLibrary_GetNISRecommendedScreenPercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NISBlueprint.NISLibrary.GetDefaultNISMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUNISMode               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EUNISMode UNISLibrary::GetDefaultNISMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetDefaultNISMode");

	Params::UNISLibrary_GetDefaultNISMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


