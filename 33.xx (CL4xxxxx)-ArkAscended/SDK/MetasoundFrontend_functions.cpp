#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MetasoundFrontend.MetasoundParameterPack
// (None)

class UClass* UMetasoundParameterPack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundParameterPack");

	return Clss;
}


// MetasoundParameterPack MetasoundFrontend.Default__MetasoundParameterPack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundParameterPack* UMetasoundParameterPack::GetDefaultObj()
{
	static class UMetasoundParameterPack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundParameterPack*>(UMetasoundParameterPack::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               OnlyIfExists                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::SetTrigger(class FName ParameterName, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetTrigger");

	Params::UMetasoundParameterPack_SetTrigger_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class FString                      InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::SetString(class FName ParameterName, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetString");

	Params::UMetasoundParameterPack_SetString_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::SetInt(class FName ParameterName, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetInt");

	Params::UMetasoundParameterPack_SetInt_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::SetFloat(class FName ParameterName, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetFloat");

	Params::UMetasoundParameterPack_SetFloat_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::SetBool(class FName ParameterName, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetBool");

	Params::UMetasoundParameterPack_SetBool_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMetasoundParameterPack*     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMetasoundParameterPack::MakeMetasoundParameterPack(class UMetasoundParameterPack* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "MakeMetasoundParameterPack");

	Params::UMetasoundParameterPack_MakeMetasoundParameterPack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMetasoundParameterPack::HasTrigger(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasTrigger");

	Params::UMetasoundParameterPack_HasTrigger_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMetasoundParameterPack::HasString(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasString");

	Params::UMetasoundParameterPack_HasString_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMetasoundParameterPack::HasInt(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasInt");

	Params::UMetasoundParameterPack_HasInt_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMetasoundParameterPack::HasFloat(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasFloat");

	Params::UMetasoundParameterPack_HasFloat_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMetasoundParameterPack::HasBool(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasBool");

	Params::UMetasoundParameterPack_HasBool_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::GetTrigger(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetTrigger");

	Params::UMetasoundParameterPack_GetTrigger_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::GetString(class FName ParameterName, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetString");

	Params::UMetasoundParameterPack_GetString_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::GetInt(class FName ParameterName, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetInt");

	Params::UMetasoundParameterPack_GetInt_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::GetFloat(class FName ParameterName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetFloat");

	Params::UMetasoundParameterPack_GetFloat_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::GetBool(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetBool");

	Params::UMetasoundParameterPack_GetBool_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


