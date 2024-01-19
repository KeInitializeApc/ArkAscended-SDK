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
// float                              Sharpness                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UNISLibrary::SetNISSharpness(float* Sharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "SetNISSharpness");

	Params::UNISLibrary_SetNISSharpness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sharpness != nullptr)
		*Sharpness = Parms.Sharpness;

}


// Function NISBlueprint.NISLibrary.SetNISMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUNISMode               NISMode                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UNISLibrary::SetNISMode(enum class EUNISMode NISMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "SetNISMode");

	Params::UNISLibrary_SetNISMode_Params Parms{};

	Parms.NISMode = NISMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              CustomScreenPercentage                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UNISLibrary::SetNISCustomScreenPercentage(float CustomScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "SetNISCustomScreenPercentage");

	Params::UNISLibrary_SetNISCustomScreenPercentage_Params Parms{};

	Parms.CustomScreenPercentage = CustomScreenPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NISBlueprint.NISLibrary.IsNISSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNISLibrary::IsNISSupported(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "IsNISSupported");

	Params::UNISLibrary_IsNISSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NISBlueprint.NISLibrary.IsNISModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUNISMode               NISMode                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNISLibrary::IsNISModeSupported(enum class EUNISMode NISMode, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "IsNISModeSupported");

	Params::UNISLibrary_IsNISModeSupported_Params Parms{};

	Parms.NISMode = NISMode;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NISBlueprint.NISLibrary.GetSupportedNISModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUNISMode>       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNISLibrary::GetSupportedNISModes(const TArray<enum class EUNISMode>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetSupportedNISModes");

	Params::UNISLibrary_GetSupportedNISModes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinScreenPercentage                                              (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UNISLibrary::GetNISScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetNISScreenPercentageRange");

	Params::UNISLibrary_GetNISScreenPercentageRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = Parms.MinScreenPercentage;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;

}


// Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUNISMode               NISMode                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNISLibrary::GetNISRecommendedScreenPercentage(enum class EUNISMode NISMode, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetNISRecommendedScreenPercentage");

	Params::UNISLibrary_GetNISRecommendedScreenPercentage_Params Parms{};

	Parms.NISMode = NISMode;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NISBlueprint.NISLibrary.GetDefaultNISMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUNISMode               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNISLibrary::GetDefaultNISMode(enum class EUNISMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NISLibrary", "GetDefaultNISMode");

	Params::UNISLibrary_GetDefaultNISMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


